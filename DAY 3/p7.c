#include <stdio.h>
int main() {
 int x=5;
 int fact=1;
 for(int i=5;i>=1;i--){
     fact=fact*i;
 }
 printf("%d",fact);
 
 return 0;
}