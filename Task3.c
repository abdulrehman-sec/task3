#include <stdio.h>
int main(){
    int arr[10], i, count = 0;
    printf("Enter 10 numbers:\n");
    for (i = 0; i <= 10; i++){
        printf("number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 10; i++){
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
printf("Total even numbers = %d\n", count);

}
