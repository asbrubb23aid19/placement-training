#include<stdio.h>    
    int main(){
    int reverse(int y) {
        int flag =1;
        if(y<0){
            flag=-1;
            y=y*(-1);
        }
        int x=0;
        while(y>0){
            int r=y%10;
            x=x*10+r;
            y/=10;
        }
        x=x*flag;
        return x;
    }
    printf("%d");
}