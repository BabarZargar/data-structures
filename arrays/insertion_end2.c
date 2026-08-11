#include <stdio.h>

int add_at_end(int a[], int b[], int n, int freePos, int data){
    for(int i=0; i<n; i++)
        b[i] = a[i];
    b[freePos] = data;
    return ++freePos;
}

int main(){
    int a[3], i, n, freePos;

    printf("enter no of elements of array: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        printf("enter an element: ");
        scanf("%d", &a[i]);
    }

    int size = sizeof(a)/sizeof(a[0]);
    freePos = n;
    if(size==n){
        int b[size+2];
        freePos = add_at_end(a, b, size, freePos, 27);
        for(i=0; i<freePos; i++)
            printf("%d\n", b[i]);
    }
    return 0;
}

