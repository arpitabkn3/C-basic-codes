#include <stdio.h>
void main()
{
    int n;
    char A ='a', B ='b',C ='c';
    void hanoi( int,char,char,char);
    printf("%d",&n);
    printf("/n/n Tower of hanoi problem with %d disks,n");
    printf("Sequence is :\n");
    hanoi (n,A,B,C);
    printf("/n");

}
void hanoi(int n,char A,char B, char C)
{if(n!=0)
{
    hanoi(n-1,A,B,C);
    printf("move disks %d from %c to %c /n",A,C);
    hanoi(n-1,B,A,C);
}
}