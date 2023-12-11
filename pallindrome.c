#include <stdio.h>
int main()
{
    int n,rev=0,rem,original;
    printf("enter the number");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev)
    printf("number is pallidrome");
    else
    printf("number is not pallidrome");
    return 0;
        
    }
