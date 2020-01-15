#include<stdio.h>

int main(void)
{
    int count=0;
    int arr[3][3]={0};
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arr[i][j] =++count;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<i;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]= temp;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
