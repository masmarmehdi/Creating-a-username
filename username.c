#include<stdio.h>
#include<string.h>
#define size 20
void main()
{
  int i,h;
  char firstName[size],lastName[size];
    printf("Enter your first name:");
    scanf("%s",&firstName[i]);
    printf("Enter your last name:");
    scanf("%s",&lastName[i]);

    printf("Here's your username:");
    printf("%c",firstName[0]);
    printf("%c",firstName[1]);
 
     h=strlen(lastName);

    for(i=2;i<h-1;i++)
    {
    printf("%c",lastName[i]);
    }
    for(i=h-3;i<=h;i++){
        printf("%c",firstName[i]);
    }
}