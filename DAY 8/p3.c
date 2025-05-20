#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
       for(int j=1;j<=x-i;j++){
        printf(" ");
    }
    for(int k=1;k<=2*i-1;k++){
        if(k==1||k==2*i-1||i==x){
            printf("*");
        }else printf(" ");
    }
    printf("\n");
}
int n=x;
 for(int i=n-1;i>=0;i--){
       for(int j=0;j<n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=2*i-1;k++){
        if(k==1||k==2*i-1){
            printf("*");
        }else printf(" ");
    }
    printf("\n");

}
    return 0;
}