#include "stdio.h"

int main(){
    int i=0;
    char arr[]="abcnfgjsljkddkfh";
    char key[]="fgh";
    
    char *arr_ptr=arr;
    char *key_ptr=key;
    
    int len_key = sizeof key/sizeof(key[0]) - 1;
    
    while(*arr_ptr != '\0'){
        if(*arr_ptr == *key_ptr){
            i++;
            key_ptr++;
            if(i==len_key){
                printf("match\n");
            }
        }
        else{
            i=0;
            key_ptr=key;
        }
        arr_ptr++;
    }
    return 0;
}

