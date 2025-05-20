
#include <stdio.h>
#include <limits.h>
int main() {
    int num;
    scanf("%d",&num);
    switch (num)
    {
        case 1:
        printf("sunday");
        break;
           case 2:
        printf("monday");
        break;
           case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;   
           case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        default:
        printf("saturday");
        
    }
    
    return 0;
}