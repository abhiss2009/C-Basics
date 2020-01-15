//Find the two numbers with odd occurrences in an unsorted array

#include<stdio.h>

void nonrepeat(int a[], int n){
    int x=0,y=0;
    int x1=a[0];

    
    for(int i = 1; i < n; i++){
        x1 = x1^a[i];
    }
    printf("xor value %d\n", x1);
    int set_bit_no = x1 & ~(x1 -1);
    
    for(int i=0; i<n; i++){
        if(a[i] & set_bit_no){
            x = x ^ a[i];
        }
        else{
            y = y^a[i];
        }
    }

        printf("%d,%d\n",x,y);
}

int main(void)
{
    int arr[]={6,1,2,1,4,5,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    nonrepeat(arr, size);
    
}
