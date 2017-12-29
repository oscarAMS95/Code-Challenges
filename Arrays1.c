#include <stdio.h>
#include <stdlib.h>

void myApp();
void reverse(int *arr, int N);

int main(){
    myApp();
    return 0;
}

void myApp(){
    int N,*arr,i;
    printf("Select the size of the array: ");
    scanf("%d",&N);
    arr = malloc(sizeof(int) * N);
    printf("Type the numbers for the array: ");
    for(i = 0; i < N;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,N);
}

void reverse(int *arr, int N){
    int i;
    for(i = N-1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
}

