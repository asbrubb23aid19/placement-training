#include <stdio.h>
int main() {
 int x;
 scanf("%d",&x);
 int sum=0;
 while(x>0){
     int r=x%10;
     x/=10;
     sum+=r;
 }
     printf("%d\n",sum);
     
}