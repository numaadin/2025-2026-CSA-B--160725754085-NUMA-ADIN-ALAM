#include<stdio.h>
struct student {
int ID;
char name[15];
float marks;
};
int main()
{
struct student s[5];
for(int i=0;i<5;i++)
{
printf("enter student details for student =%d\n",i+1);
printf("ID:");
scanf("%d",&s[i].ID);
printf("name:");
scanf("%s",&s[i].name);
printf("marks:");
scanf("%f",&s[i].marks);
}
printf("\n---STUDENT DETAILS---\n");
for(int i=0;i<5;i++)
{
printf("ID=%d\n",s[i].ID);
printf("name=%s\n",s[i].name);
printf("marks=%.2f\n",s[i].marks);
}
}
