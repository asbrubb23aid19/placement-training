#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a=1,b=1;
    
for(int i=1;i<=x;i++){
    if(i==1)
    printf("%d\n",a);
    else if(i==2)
    printf("%d\n",b);
    else{
        int c= a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
    return 0;
}