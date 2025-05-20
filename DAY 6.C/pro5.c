#include <stdio.h>
int main() {
  
    int arr[]={1,2,3,4,5.6,45,8};
 int max=arr[0];
 int length=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<=length-1;i++){
     if(max <arr[i])max=arr[i];
 }
 printf("%d",max);
    return 0;
}