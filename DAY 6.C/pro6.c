#include <stdio.h>
int main() {
  
    int arr[]={1,2,3,4,5.6,45,8};
    int min=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=length-1;i++){
         if(min >arr[i])min=arr[i];
 }
 printf("%d",min);
    return 0;
}