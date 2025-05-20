#include <stdio.h>

int main() {
  int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if((x>y)&&(x>z))
    printf("x is greater");
    else if((y>x)&&(y>z))
    printf("y is greater");
    else if((z>x)&&(z>y))
    printf("z is greater");
    else 
    printf("both equal");

    return 0;
}
