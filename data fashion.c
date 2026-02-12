//write a program to check the given number is even
#include<stdio.h>
int main()
{
    int date,you;
    printf("enter the rating of you ,date\n");
    scanf("%d",&you,date);
    if ( you<=2|| date<=2)
    { printf("0");}
    else if(you>=8||date>=8)
    {
    printf("2");
  }
  else{
  printf("1");}
    return 0;
}           