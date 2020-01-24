#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[100];
    int rollno;
    float marks;
};
int main()
{
    struct student s[2];
    printf("enter the information of student:");
    for (int i=0;i<2;i++)
    {
      printf("\nenter name");
      fflush(stdin);
      gets(s[i].name);
      fflush(stdin);
      printf("\nenter your rollno");
      scanf("%d",&s[i].rollno);
      fflush(stdin);
      printf("\nenter marks");
      scanf("%f",&s[i].marks);
      fflush(stdin);
    }
    for(int i=0;i<2;i++)
    {
        printf("Name:");
        puts(s[i].name);
        fflush(stdin);
        printf("\nthe rollno is:%d",s[i].rollno);
        fflush(stdin);
        printf("\nThe marks is :%f",s[i].marks);
        fflush(stdin);
     }
     return 0;

}


