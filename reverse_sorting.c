#include <stdio.h>

void reverse (char arr[], int size);
void bubble_sort (int arr[], int size);

int main () {

//////////////////////////////////////////////////
////////////reverse an array//////////////////////
    char arr1[] = {'a', 'b', 'c', 'd'};
    int size1 = sizeof (arr1) / sizeof(arr1[0]);
    for (int i = 0; i < size1; i++){
        printf("%c", arr1[i]);
        printf("\n");
    	}
    printf("\n");
    
    reverse(arr1, size1);
    
    for (int i = 0; i < size1; i++){
        printf("%c", arr1[i]);
        printf("\n");
    	}
    printf("\n");
    
///////////////////////////////////////////////////
////////////////bubble-sorting/////////////////////
    int arr2[] = {11, 19, 21, 82, 35, 67, 84, 56, 95, 120};
    int size2 = sizeof arr2 / sizeof(arr2[0]);
    
    bubble_sort(arr2, size2);
    
	for (int i = 0; i < size2; i++){
        printf("%d", arr2[i]);
        printf("\n");
    	}
    printf("\n");
    
   return 0;
}


void reverse (char arr[], int size){
    int j = size-1;
    
    for (int i = 0; i < j; i++){
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}

void bubble_sort (int arr[], int size){
    int k= size-1;
    for(int i=0; i<k; i++){
        for(int j =0; j<k-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
