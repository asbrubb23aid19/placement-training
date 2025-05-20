#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);
    
    for(int i=0;i<size;i++){
        if(s==arr[i]){
        printf("present");
        return 0;
    }
    
}
printf("not present");
}