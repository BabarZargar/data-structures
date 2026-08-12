#include <stdio.h>

int add_beg(int arr[10], int n, int data){
    for(int i = n; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0]= data;
    return n+1;
}
int main(){
    int arr[10];
    int data = 10, n;
    printf("enter no of elements: ");
    scanf("%d", &n);

    printf("enter elements of the array: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    n = add_beg(arr, n, data);

    for(int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}

