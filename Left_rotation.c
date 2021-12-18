#include <stdio.h>
#include <conio.h>

int *rotLeftC(int a_count, int *a, int d)
{
    int key = 0, i;
    while (d > 0)
    {
        key = a[0];
        for (i = 0; i < a_count - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[a_count - 1] = key;
        d--;
    }
    return a;
}

void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]); 
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n=sizeof(arr)/sizeof(int);

    printf("array before rotation\n");
    printarray(arr,n);

    rotLeftC(n,arr,4);

    printf("\narray after rotation\n");
    printarray(arr,n);
}