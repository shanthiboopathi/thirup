#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();    
printf(“Enter any digit:”);
scanf(“%c”,&ch);
  if(ch>=’0’&&ch<=’9′)
 printf(“nYou have entered a digit”);
 else
printf(“nYou have entered not a digit”);
getch();   
}
