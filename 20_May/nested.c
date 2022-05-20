#include<stdio.h>

/*........Seperated Structure..........*/

struct date1{        
	int day;        
	int month;        
	int year;    
};
struct student1{    
	char name[30];    
	int roll;    
	struct date1 birth1;    
	float per; 
};

/*........ Embedded Structure .........*/
struct student2{    
	char name[30];    
	int roll;
	struct date2{        
	    int day;        
	    int month;
	    int year;
	}birth2;
	float per; 
};

int main(){    

	struct student1 s1={"shubham",111,{14,5,1998},99.7};
	struct student2 s2;
	printf("Enter name, roll_no,date of birth, month , year and percentage: ");    
	scanf("%s %d %d %d %d %f",s2.name,&s2.roll,&s2.birth2.day,&s2.birth2.month,&s2.birth2.year,&s2.per);   
	printf("Student1\nName: %s\nRollno: %d\nDate of birth: %d-%d-%d\nPercentage:%.2f\n",s1.name,s1.roll,s1.birth1.day,s1.birth1.month,s1.birth1.year,s1.per);
	printf("Student2\nName: %s\nRollno: %d\nDate of birth: %d-%d-%d\nPercentage:%.2f\n",s2.name,s2.roll,s2.birth2.day,s2.birth2.month,s2.birth2.year,s2.per);
}
