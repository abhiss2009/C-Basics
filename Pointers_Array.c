#include <stdio.h>
void swap (int *num1, int *num2);
void reverse (char *arr1[], int size);
void print_array (char *arr[], int size);
int main () {
    ///////////////////////////////
    ////////////swapping//////////
    int a = 10, b = 30;
    int *ptr1 = &a; // address of Variable a
    printf("value of a: %d\n", *ptr1);
    printf("unswapped: %d,%d\n", a, b);
    swap(&a, &b); //passing address of Variable a and b
    printf("swapped: %d,%d\n", a, b);
    ////////////////////////////
    //////array n pointer///////
    int arr[3]={7, 4, 9};
    int *arrptr2 = arr; // address of arr[0]
    int *arrptr1 = &arr[1];  // address of arr[1]
    printf("%d\n", *arr); // value of first element of array
    printf("%d\n", *(arrptr1+1)); // value of arr[1+1]
    
    ////////////////////////////////////
    //////////////string reversal///////
    char *arr1[] = {"you", "love", "me", "too"};
    int size = (sizeof arr1/ sizeof (arr1[0]));
    print_array(arr1, size); // original array
    reverse (arr1 , size); // reverse function
    print_array(arr1, size); // reversed array
    
    
   return 0;
}

void swap (int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void print_array (char *arr[], int size){
    for (int i=0; i < size; i++){
        printf("%s",arr[i]);
    }
    printf("\n");
}

void reverse (char *arr1[], int size){
    int j = size-1;
    for (int i=0; i < j; i++){
       char *temp = arr1[i];
        
        arr1[i] = arr1[j];
        arr1[j] = temp;
        j--;
        
    }
    
}