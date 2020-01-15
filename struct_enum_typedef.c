#include <stdio.h>

struct class{
	char *name;
	char id[10];
	float gpa;
	};
struct family{
	char *head;
	int no_ppl;
	float avg_age;
	}sharma, verma,chopra;

struct flat{
	char *number;
	int no_ppl;
	} first_floor, *first;
	
typedef struct{
	float milk;
	int spoon;
	}Kitchen;

enum e_months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main (){
	struct class LKG;
	LKG.name = "Abhi";
	LKG.gpa = 20.5;
	LKG.id[0]= 'i';
	printf("%f\n", LKG.gpa);
	printf("%s\n", LKG.name);
	printf("%c\n", LKG.id[0]);	
	
	struct class all[10];
	all[0].name = "nitin";
	all[1].name = "mulia";
	printf("%s\n",all[0].name);
	printf("%s\n",all[1].name);
	
	sharma.head = "Rohit";
	verma.no_ppl = 6;	
	printf("%s\n",sharma.head);
	printf("%d\n",verma.no_ppl);
	
	struct class *UKG= &LKG;
	(*UKG).name = "santa";
	UKG->id[0]= 's';
	printf("%s\n",(*UKG).name);
	printf("%c\n", UKG->id[0]);
	
	struct family *dharma , farma;
	dharma = &farma;
	dharma->head = "rohin";
	printf("%s\n",(*dharma).head);
	
	first = &first_floor;
	first->number = "1A";
	first->no_ppl = 3;
	printf("%s\n",(*first).number);
	
	Kitchen patna;
	patna.milk = 2.3;
	printf("%f\n",patna.milk);
	
	typedef enum e_months month;
	month currentmonth;
    currentmonth = JUN;      
    printf("%d\n", currentmonth);
	
return(0);
}

