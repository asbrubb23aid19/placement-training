#include <stdio.h>
int main() {
  int x,ans=0,r,y;
  scanf("%d",&x);
   y = x;
    while (x >0) {
        r = x % 10;
        ans= ans * 10 + r;
        x/= 10;
    }
    if (y == ans)
        printf("%d is a palindrome.", y);
    else
        printf("%d is not a palindrome.", y);
    return 0;
}