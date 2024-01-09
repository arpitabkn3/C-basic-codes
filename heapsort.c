
#include <stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
void heapify (int arr[], int N, int i)
{
    int large=i;
    int left= 2*i+1;
    int right=2*i+2;
    
    if(left<N && arr[left]>arr[large])
    large= left;
    
    if(right<N && arr[right]> arr[large])
    large= right;
    
    if(large!=i){
        swap(&arr[i],&arr[large]);
        heapify(arr,N,large);
        
    }
    
}
void heapSort(int arr[],int N)
{
    for(int i=N/2-1;i>=0; i--)
    heapify(arr,N,i);
    
    for(int i=N-1;i>=0; i--)
    swap(&arr[0],&arr[i]);
    heapify (arr,i,0); 
}

void printArray(int arr[],int N)
{
    for(int i=0;i<N;i++)
    printf("%d",arr[i]);
    printf("\n");
    
}
int main()
{
    int arr[]={12,11,13,5,6,7};
    int N=sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,N);
    printf("sorted array is \n");
    printArray(arr,N);
    
}
