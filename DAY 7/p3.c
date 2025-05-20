#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
   for(int i=1;i<3;i++){
   for(int j=i;j<6;j++){
      if(i%2==0) printf("hi");
    if(j%2==0) printf("hello");
   }
   }
}