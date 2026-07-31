#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee{
	int id;
	char Name[50];
	int contact;
	char department[50];
}a;
	void funuser()
	{
		FILE* fptr;
	
		fptr = fopen("Employee.txt","w");

		printf("Enter Your ID = ");
		scanf("%d\n",&a.id);
		
		printf("Enter Your Name = ");
		scanf("%s\n",&a.Name);
		
		printf("Enter Your Contact = ");
		scanf("%d\n",&a.contact);
		
		printf("Enter Your Department = ");
		scanf("%s\n",&a.department);
		
		fclose(fptr);
	}
	
	void data()
	{
		printf("id %d",a.id);
		printf("Name %s",a.Name);
		printf("Contact %d",a.contact);
		printf("Department %s",a.department);
	}

	void Showempdata()
	{
		FILE* fptr;
	
		fptr = fopen("Employee.txt","r");
	
		if(fptr == NULL)
		{
			printf("The file is not Found");
			return 0;
		}
		else
		{
        printf("The file is now opened.\n");

        while (fgets(fptr,) != NULL)
        {

            // Print the data
            printf("%s", data);
        }
        fclose(fptr);
    }
}
int main()
{
	funuser();
	data();
	Showempdata();
	return 0;
}
