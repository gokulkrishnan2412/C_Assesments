/*Comments 
Name:Gokula Krishnan
Date:13-6-2021
Description:Program to implement the student record using array of strutures.
Input:./28student_record.c
Output: Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2
----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.
Name
maths
science
1
Nandhu
99
91
Do you want to continue to display(Y/y) : n */

#include <stdio.h>
#include<string.h>

/*structure */
struct student
{
    int rollno;
    char name[80];
    int mark1,mark2;
    float avg;
};

void accept(struct student[], int);
void display(struct student[], int);
float average( struct student[],int, int);
void search(struct student[],int,int);

int main()
{
char c;
do
{
    /* Getting no of students from the user */
    struct student data[80];
    int n, choice, rollno;

    printf("Enter no.of Students: ");
    scanf("%d", &n);
    accept(data, n);

        printf("\nDisplay menu:");
        printf("\n1.All student details.");
        printf("\n2.Particular student details");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
	/*Switch case to get the details */
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter roll number to search : ");
                scanf("%d", &rollno);
                search(data, n, rollno);
                break;
            default:
                printf("Invalid data");
        }

printf("\nDo you want to continue (y/Y):");
scanf( " %c", &c);
}while((c == 'y') || (c == 'Y'));		                 //Condition to iterate the do while loop				
    

    return 0;
}

void accept(struct student list[80], int s)
{	
    /*Getting student details form the user */
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record %d", i + 1);

        printf("\nEnter the Student Rollno : ");
        scanf("%d", &list[i].rollno);
        fflush(stdin);
        printf("Enter the student name : ");
        scanf("%s",list[i].name);
        printf("Enter Math mark : ");
        scanf("%d", &list[i].mark1);
        printf("Enter Science mark: ");
        scanf("%d", &list[i].mark2);
    } 
}
/* Function to display student details */
void display(struct student list[80], int s)
{
    int i;
    printf("\n\nRollno\tName\tMath\tScience\tAverage\tGrade\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\t%d\t\n", list[i].rollno, list[i].name, list[i].mark1,list[i].mark2,list[i].avg);
    } 
}
/*Function to search particular student */
void search(struct student list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].rollno == number)
        {
            printf("Rollno : %d\nName : %s\nMarks : %d\n", list[i].rollno,
                list[i].name, list[i].mark1,list[i].mark2);
            return ;
        } 
    }
    printf("Record not Found\n");
}
/* Function to find average */
float average(struct student list[80], int m1, int m2)
{
float sum, avg;
sum=m1+m2;
avg= sum/2;
return avg;
}