#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

struct student
{
  int rlno;
  char name[50];
  char cn[50];
  char major[50];
  char minor[50];

};
int main()

{
    student s[10];
    for(int i=0;i<2;i++)
{
    printf("enter roll no.");
    scanf("%d",&s[i].rlno);
    fflush(stdin);
    printf("Enter Name:");
    gets(s[i].name);
    printf("Enter course name :");
    gets(s[i].cn);
    printf("Enter major:");
    gets(s[i].major);
    printf("Enter minor:");
    gets(s[i].minor);
}
    for(int i=0;i<2;i++)
{
    printf("Name of the students no. %d : %s",i+1,s[i].name);
}
    int a;
    printf("enter roll no.");
    fflush(stdin);
    scanf("%d",&a);
    for(int i=0;i<2;i++)
    {
        if(a==s[i].rlno)
        {



    printf("Name:%s",s[i].name);

    printf(" course name:%s",s[i].cn);

    printf(" major:%s",s[i].major);

    printf(" minor:%s",s[i].minor);
}}}
