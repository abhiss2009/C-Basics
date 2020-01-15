#include<stdio.h>

int miss(int a[], int n){
    int i=0;
    int x1=a[0];
    int x2=1;
    
    for( i = 1; i < n; i++){
        x1 = x1^a[i];
    }
    for( i = 2; i <= n+1; i++){
        x2 = x2^i;
    }
    return(x1^x2);

}

int main(void)
{
    int arr[]={1,2,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", miss(arr, size));
    
}
