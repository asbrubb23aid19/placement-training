#include <stdio.h>
int main() {
    int size,even,odd;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=size;i++){
        printf("%d ",arr[i]);
    }
 
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }
     printf("\nEven:%d\n", even);
  printf("Odd: %d\n", odd);
}
    