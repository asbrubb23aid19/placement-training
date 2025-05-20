#include <stdio.h>
#include <string.h>
int main() {
  char username[20]="gokila";
  int password=12345;
  char arr[20];
  int x;
    scanf("%s%d",arr,&x);
  printf("%d",(strcmp(username,arr)));
if((strcmp(username,arr)==0)&& (password==x))
    printf("login success");
    else
    printf("fail");
    return 0;
}