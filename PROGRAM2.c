#include <stdio.h>
int main() {
 int x;
 scanf("%d",&x);
 int y=x ;
 int count=0;
 while(x>0){
     x=x/10;
     count++;
 }
 printf("%d\n",count);
 x=y;
 int r=x%10;
 int prod=1;
 for(int i=1;i<=count;i++){
     prod=prod*r;
 }
 printf("%d",prod);
    return 0;
}