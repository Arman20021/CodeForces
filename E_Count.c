#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    scanf("%s",a);
    int sum=0;
    for(int i=0;a[i]!='\0';i++)
    {
     sum+=a[i]-'0' ;
     
  
    }
       
    printf("%d",sum);
}