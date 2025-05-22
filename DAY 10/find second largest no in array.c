
#include <stdio.h>
#include <stdbool.h>
int sort(int x[],int r){
   int n=sizeof(r)/sizeof(x[0]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(x[j]>x[j+1])
            int t=x[j];
            x[j]=x[j+1];
            x[j+1]=t;
        }
    }
}
    printf("%d\n",r);
    return x[n-2];
}
int main() {
   int arr[]={1,2,3,4,5};
   int c=7;
    printf("%d",sort(arr,c));
   
    return 0;
}