#include <stdio.h>

int main()
{
   int num1;
   scanf("%d",num1);
   if (num1%5==0&&num1%11==0)printf("hihello");
 else if(num1%5==0)
 printf("hello");
 else if(num1%11==0)
 printf("hi");

    return 0;
}