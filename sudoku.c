#include "stdio.h"

#define size 9

int input[size][size] = {
    {6,5,0,8,7,3,0,9,0},
    {0,0,3,2,5,0,0,0,8},
    {9,8,0,1,0,4,3,5,7},
    {1,0,5,0,0,0,0,0,0},
    {4,0,0,0,0,0,0,0,2},
    {0,0,0,0,0,0,5,0,3},
    {5,7,8,3,0,1,0,2,6},
    {2,0,0,0,4,8,9,0,0},
    {0,9,0,6,2,5,0,8,1}
};

void print_sudoku(){
    int i, j;
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
           printf("%d\t", input[i][j]);
        }
        printf("\n\n");
    }

}

int UnAssigned(int *r, int *c){
    int i, j;
    int flag = 0;

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(input[i][j] == 0){
                *r = i;
                *c = j;
                flag = 1;
                return flag;
            }
        }
    }
    return flag;
}

int isSafe(int num, int r, int c){
    int i, j;

    for(i=0; i<size; i++){
        if(input[r][i] == num)
            return 0;
    }
    for(i=0; i<size; i++){
        if(input[i][c] == num)
            return 0;
    }

    int row_start = (r/3)*3;
    int col_start = (c/3)*3;
    for(i=row_start; i<row_start+3; i++){
        for(j=col_start; j<col_start+3; j++){
            if(input[i][j] == num)
                return 0;
        }
    }
    return 1;
}

int solve_sudoku(){
    int r, c;
    if(!UnAssigned(&r, &c))
        return 1;
    int num;
    for(num=1; num<=size; num++){
        if(isSafe(num, r, c)){
            input[r][c] = num;
            if(solve_sudoku())
                return 1;
            input[r][c] = 0;
            }
    }
    return 0;
}

int main(){
    solve_sudoku();
    print_sudoku();
	    /*if (solve_sudoku())
        print_sudoku();
    else
        printf("No solution\n");
    return 0;
    */
   // print_sudoku();

}
