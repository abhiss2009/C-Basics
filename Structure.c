#include <stdio.h>
#include <string.h>

/// 1st type init.
struct point {
    int x, y;
};

// 2nd type init.
struct book{
int x;
}BOOK1, BOOK2;

// 3rd type init.
typedef struct{
	char name;
	int exp;
	}emp;
	
void change1(struct point p);
void change2(struct point *p);
void change3(emp e1);

//struct point p1 = {.x= 7, .y= 1};  // Global Declaration

int main()
{
//////////////////////////////////////////////////////
///////////////1st Type Declaration///////////////
    struct point p1 = {.x= 7, .y= 1}; // Local Declaration
    p1.x = 5;
    printf("%d\n", p1.x);
	change1(p1);
////////////////////////////////////////////////////
/////////////////pointer to structure///////////////
    struct point *ptr = &p1;
    ptr->x = 9;
    printf("%d\n", ptr -> x);
    change2(ptr);
///////////////////////////////////////////////////
///////////array of structure//////////////////////
    struct point arr[10];
    arr[0].x = 5;
    printf("%d\n", arr[0].x);

///////////////2nd Type Declaration/////////////////////////////
BOOK1.x =10;
printf("%d\n", BOOK1.x);

///////////////3rd Type Declaration/////////////////////////////
emp e1;
e1.name='a';
printf("%c\n",e1.name);

//////////passing a structure/////////////
change3(e1);
    return 0;
}
void change1(struct point p){
p.x = 6;
printf("change1: %d\n", p.x);
}

void change2(struct point *p){
p->x = 10;
printf("change2: %d\n", p -> x);
}

void change3(emp e1){
e1.name = 'b';
printf("change3: %c\n",e1.name);
}