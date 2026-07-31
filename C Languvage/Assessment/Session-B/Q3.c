#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    float marks;
    char grade;
};

void assignGrade(struct Student *s) {
    if (s->marks >= 90) {
        s->grade = 'A';
    } else if (s->marks >= 75) {
        s->grade = 'B';
    } else if (s->marks >= 60) {
        s->grade = 'C';
    } else if (s->marks >= 55) {
        s->grade = 'D';
    } else {
        s->grade = 'F';
    }
}

int main() {
    struct Student s[3];
    int i, Index = 0;
    
    printf("*************************************\n");
    printf("        Enter Student Details        \n");
    printf("*************************************\n\n");
    
    for (i = 0; i < 3; i++) {
        printf("Enter Student Details %d\n", i + 1);
        
        printf("Student Name = ");
        scanf("%s", s[i].name);
        
        printf("Student Rollno = ");
        scanf("%d", &s[i].rollno);
        
        printf("Student Marks [0 - 100] = ");
        scanf("%f", &s[i].marks);
        printf("\n");
        
        assignGrade(&s[i]);
        
        if (s[i].marks > s[Index].marks) {
            Index = i;
        }
    }
    
    printf("\n---------- Student Data ----------\n\n");
    printf("==================================================\n");
    printf("%-20s %-10s %-10s %-5s\n", "Name", "Roll No", "Marks", "Grade");
    printf("==================================================\n");
    
    for (i = 0; i < 3; i++) {
        printf("%-20s %-10d %-10.2f %-5c\n", s[i].name, s[i].rollno, s[i].marks, s[i].grade);
    }
    printf("==================================================\n");
    
    printf("\nTop Performer: %s (Roll No: %d) with %.2f Marks (Grade: %c)\n",
           s[Index].name, s[Index].rollno, s[Index].marks, s[Index].grade);
           
    return 0; 
}
