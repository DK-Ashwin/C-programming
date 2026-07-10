//write a C program to create an array of structure and display the details of each structure
 //declare a structure named student to store roll_number, name, mark_for_c. We need to find the average mark obtained by the students for the subject programming in C. Use array of structures to store the required data
#include<stdio.h>
struct student{
    int roll_number;
    char name[30];
    float mark_for_c;
}s[20];
int main(){
    struct student;
    int n,i;
    float sum=0,average;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter roll number for student %d: ",i+1);
        scanf("%d",&s[i].roll_number);
        printf("Enter name for student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter mark for C programming for student %d: ",i+1);
        scanf("%f",&s[i].mark_for_c);
        sum+=s[i].mark_for_c;
    }
    average=sum/n;
    printf("\nAverage mark for C programming is: %.2f",average);
    printf("\nDetails of each student:\n");
    for(i=0;i<n;i++){
        printf("\nRoll number: %d",s[i].roll_number);
        printf("\nName: %s",s[i].name);
        printf("\nMark for C programming: %.2f\n",s[i].mark_for_c);
    }
}