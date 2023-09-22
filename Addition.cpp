#include<cstdio>
int main2(void)
{
   int fno=5;
   int sno=6;
   int *ptr=&fno;
   int *qtr=&sno;

   int sum= *ptr +*qtr;
   printf("Addition of two number %d\n", sum);
   return 0;
}



