#include<stdio.h>
void swap(int *a,int *b,int *c)
{
	int temp = *a;
	*a=*c;
	*c=*b;
	*b= temp;
}
int main(){
	int a, b, c;
	printf("Enter three numbers\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Before swap\n");
	printf("%d %d %d",a , b, c);
	swap(&a, &b, &c);
	printf("After swap\n");
	printf("%d %d %d",a , b, c);

}




