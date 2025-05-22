#include <stdio.h>
int main() {
   int x,sum=0;
   scanf("%d",&x);
   for(int i=1;i<x;i++){
       if(x%i==0){
           sum=sum+i;
       }
   }
//   printf("%d\n",sum);
   if(sum==x)printf("true");
   else printf("false");
    return 0;
}