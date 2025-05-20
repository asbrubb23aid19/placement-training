#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a=0,b=1,c=1;
    int d=0;
     if(x==1||x==2)
    printf("%d\n",1);
     else if(x==3)
     printf("%d\n",c);
     else{
for(int i=3;i<=x;i++){
        d= a+b+c;
        a=b;
        b=c;
        c=d;
}
printf("%d\n",d);
}
    return 0;
}