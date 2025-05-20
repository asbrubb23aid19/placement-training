#include <stdio.h>
int fact(int n){
    int f=1;
    for(int i=n;i>=1;i--){
        f*=i;
    } 
    return f;
}
int main() 
{
    int x=fact(5);
    int y;
    scanf("%d",&y);
   printf("%d %d %d",x,fact(7),fact(y));
}