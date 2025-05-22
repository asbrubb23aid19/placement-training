#include <stdio.h>

void swap(int *a,int *b){
    int t=*a;        
    *a=*b;          
    *b=t;
}
int main() {
char s[]="happycoding";
char *str=s;
int c=0;
while(*str != '\0'){
    c++;
    str++;
}
printf("%d",c);
}