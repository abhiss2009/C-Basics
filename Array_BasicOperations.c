#include <stdio.h>

int Total_Duplicate_Elements(int arr[], int size);
int Smallest_Number (int arr[], int size);
int Largest_Number (int arr[], int size);

int main(void){
    int i = 0;
    int arr[] = {9,1,2,1,3,4,-5,12,12,1,4,2,1,8,19};
    printf("Elements Of Array : \n");
    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d\n", arr[i]);
        }
        
    printf("Total Number Of Elements: %d\n",sizeof(arr)/sizeof(arr[0]));
    printf("Largest Number Of The Array : %d\n", Largest_Number(arr, sizeof(arr)/sizeof(arr[0])));
    printf("Smallest Number Of The Array : %d\n", Smallest_Number(arr, sizeof(arr)/sizeof(arr[0])));
    printf("Total Duplicate Elements : %d\n", Total_Duplicate_Elements(arr, sizeof(arr)/sizeof(arr[0])));
    
    return 0;
}

int Total_Duplicate_Elements(int arr[], int size){
    int i,j;
    int count = 0;

    for(i = 0; i < size; i++){
        for(j = i + 1;j < size; j++){
            if (arr[i] == arr[j]){
                count++;
                printf("Duplicate Numbers : %d\n", arr[i]);
                break;
            }
        
        }
    }
    return count;
}

int Smallest_Number (int arr[], int size)
{
    int i;
    int smallest = arr[0];
    for(i = 0; i < size; i++){
        if (smallest > arr[i])
            smallest = arr[i];
    }
    return smallest;
}

int Largest_Number (int arr[], int size)
{
    int i;
    int largest = arr[0];
    for(i = 0; i < size; i++){
        if (largest < arr[i])
            largest = arr[i];
    }
    return largest;
}