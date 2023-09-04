#include<stdio.h>
int main()
{
char s[100];
printf("Enter the string: ");
scanf("%[^\n]s",s);
printf("%s",s);
return 0;
}
