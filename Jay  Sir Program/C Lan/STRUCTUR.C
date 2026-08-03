#include<stdio.h>
#include<conio.h>
struct student{
	int id;
	char name[30];
	void setId(int id){
		if(id <= 0){
			printf("id not valid\n");
		}
		else
		{
			printf("id = %d\n",id);
		}
	}
	void setName(char name[30]){
		if(strlen(name) < 25){
			printf("name = %s\n	",name);
		}
	}
};

void main(){
	struct student s1;
	clrscr();
	s1.setId(12);
	s1.setName("user");
	getch();
}