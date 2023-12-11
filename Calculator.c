#include <stdio.h>
void main()
{ 
    int a,b,r,op;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    printf("Enter the operator ");
    scanf("%d",&op);
    if(op==1)
    {
        r=a+b;
        printf("%d",r);
    }
    else if (op==2)
    {
        r=a-b;
        printf("%d",r);
    }
    else if(op==3)
    {
        r=a*b;
        printf("%d",r);
        
    }
    else if(op==4)
    {
        r=a/b;
        printf("%d",r);
    }
    else 
    {
        printf("Invalid number");
        
    }
}

#include <stdio.h>
void main()
{ 
    int a,b,r,op;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    printf("Enter the operator 1='+',2='-',3='*',4='/' ");
    scanf("%d",&op);
    if(op==1)
    {
        r=a+b;
        printf("%d",r);
    }
    else if (op==2)
    {
        r=a-b;
        printf("%d",r);
    }
    else if(op==3)
    {
        r=a*b;
        printf("%d",r);
        
    }
    else if(op==4)
    {
        r=a/b;
        printf("%d",r);
    }
    else 
    {
        printf("Invalid number");
        
    }
}

