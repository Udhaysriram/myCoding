#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string 1 : ");
    scanf("%[^\n]s",str); 
    
    
    char st[100];
    printf("Enter the string 2 : ");
    scanf("%[^\n]s",st);


//printing the string..
//printf("\nEntered string is...%s",str);              
    
    
//length of the string
    int len=0;
    for(int i=0 ;str[i]!='\0'; i++)
    {
        len++;
    }
    printf("Length of the string 1 is : %d",len);
    printf("\n\n");
    
    
//printing using iteration...
    for(int i=0; str[i]!='\0'; i++)
    {
     
        printf("|%d = %c|\n",i,str[i]);
    }
    printf("\n\n");
    
    
//reverse of the string
printf("The reverse of the string 1 is \n");
for(int i=len-1;i>=0;i--)
{
    printf("%c",str[i]);
}
printf("\n\n");






    return 0;
}
