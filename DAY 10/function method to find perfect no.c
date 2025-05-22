#include <stdio.h>
int perfect(int x){
    int sum =0;
      for(int i=1;i<x;i++){
       if(x%i==0){
           sum=sum+i;
       }
   }
      return sum;
}
int main() {
   int x;
   scanf("%d",&x);
   int a=perfect(x);
//   printf("%d\n",sum);
   if(a==x)printf("true");
   else printf("false");
    return 0;
}