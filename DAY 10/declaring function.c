#include <stdio.h>
int main() {
int c=7;
int *p;
p=&c;
// p,&c== address value
// *p,c= value
printf("%d,%d",p,&c);    // printf("%d",*p);
}
/*
//declaring pointer p as another variable
#include <stdio.h>
int main() {
int a=7;
int * p=&a;
printf("%d %d",p,*p);
//a=5;
*p=1000;
printf("\n%d %d",*p,a);
}

//change the address value
#include <stdio.h>
int main() {
int a=7;
int *p;
p=&a;
printf("%d %d %d %d",a,*p,p,&a);
*p=8;
printf("\n%d %d %d %d",a,*p,p,&a);
}

#include <stdio.h>
int main() {
int a=7;
int *p,*q;       
p=&a;               //p=1000
q=p;               //q=p=1000
*p=1;           //    you change q it print same as 1  
*p=4;
printf("\n%d ",a);
}
*/