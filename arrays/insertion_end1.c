#include <stdio.h>

int add_at_end(int arr[], int freePos, int data){
    arr[freePos] = data;
    return ++freePos;
}

int main(){
    int arr[10], i, n, freePos;

    printf("enter no of elements of array: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        printf("enter an element: ");
        scanf("%d", &arr[i]);
    }

    freePos = n;
    freePos = add_at_end(arr, freePos, 27);

    for(i=0; i<freePos; i++)
        printf("%d\n", arr[i]);
    
    return 0;
}

