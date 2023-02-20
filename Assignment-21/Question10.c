// Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.

#include<stdio.h>

struct Marks
{
    char name[10];
    int rollno;
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
int main()
{
    struct Marks m[5];
    int i;
    float percentage ;

    for(i=0;i<5;i++){
        printf("Enter the Name of student %d : ",i+1);
        scanf("%s",m[i].name);
        printf("Enter the Roll Number of student %d : ",i+1);
        scanf("%d",&m[i].rollno);
        printf("Enter the Marks in Chemistry (out of 100) of student %d : ",i+1);
        scanf("%d",&m[i].chem_marks);
        printf("Enter the Marks in Mathematics (out of 100) of student %d : ",i+1);
        scanf("%d",&m[i].maths_marks);
        printf("Enter the Marks in Physics (out of 100) of student %d : ",i+1);
        scanf("%d",&m[i].phy_marks);
        printf("\n");
    }

    for(i=0;i<5;i++){
        percentage = ((m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/3) ;
        printf("Percentage of student %d = %0.2f ",i+1,percentage);
        printf("\n");
    }
    return 0;
}
