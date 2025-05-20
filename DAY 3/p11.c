#include <stdio.h>

int main()
{
   int num1,num2;
   scanf("%d%d",&num1,&num2);
   printf("1=add\n2=sub\n3=mul\n4=div");
   int user;
  
   scanf("%d",&user);
   switch(user){
       case'1':
       printf("%d",num1+num2);
       break;
       case 2:
       printf("%d",num1,num2);
       break;
   }
    return 0;
}