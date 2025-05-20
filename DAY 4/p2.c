#include <stdio.h>
#include <string.h>
int main() {
int x= 7;
int  flag=0;
for(int i=1;i<=x;i++){
  if(x%i==0)
  flag++;
    
}
if(flag==2)
printf("%d is a prime number",x);
else printf("%d is not prime no",x);
printf("%d",flag);
    return 0;
}