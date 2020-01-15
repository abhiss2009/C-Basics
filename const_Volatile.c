#include "stdio.h"
#include "stddef.h"
int main(){

/////////////Changing Value of a Const Variable//////////
/////*
const int var1 = 10;
int var2 = 20;

int *ptr1 = &var1;
printf("%d\n", *ptr1);

*ptr1 = 100; // WARNING: value of pointer can  be changed
printf("%d\n",*ptr1);

ptr1 = &var2; // Pointer to Point to any other Integer Variable
printf("%d\n", *ptr1);
////*/
////////////Pointer to Const/////////////////////////
/*
int var3 = 30;
int var4 = 40;

const int *ptr2 = &var3;
printf("%d\n", *ptr2);

ptr2 = &var4; // Pointer to Point to any other Integer Variable
printf("%d\n", *ptr2);

*ptr2 = 300; // ERROR: read-only variable is not assignable
printf("%d\n", *ptr2);
*/
////////////Pointer to Const-- Variable is Const/////////////////////////
/*
const int var5 = 50;
int var6 = 60;

const int *ptr3 = &var5;
printf("%d\n",*ptr3);

ptr3 = &var6; // Pointer to Point to any other Integer Variable
printf("%d\n",*ptr3);

*ptr3 = 500;  // ERROR: read-only variable is not assignable
printf("%d\n",*ptr3);
*/
/////////////////Constant pointer to variable/////////////////////
/*
int var7 = 70;
int var8 = 80;

int *const ptr4 = &var7;
printf("%d\n",*ptr4);

*ptr4 = 700; // variable is not const, Pointer is const
printf("%d\n",*ptr4);

ptr4 = &var8; // ERROR: can not point to another Variable
printf("%d\n",*ptr4);
*/
////////////////////Const Pointer to const Variable////////////////
/*
const int var9 = 90;
int var10 = 100;

const int *const ptr5 =  &var9;
printf("%d\n",*ptr5);

*ptr5 = 900; //ERROR 
ptr5 = &var10; // ERROR
*/
return 0;
}