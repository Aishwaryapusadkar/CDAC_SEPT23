#include<cstdio>
int main3(void){
	int num1=30;
	int num2=10;
	int *ptr= &num1;
	int *qtr=&num2;
	if(*ptr>*qtr){
		printf("Maximum no. is :%d",*ptr);

	}else{
		printf("Maximum no. is :%d",*qtr);
	}
	return 0;
}




