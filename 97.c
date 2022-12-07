#include <stdio.h>
#define M 100

int main()
{
    int arr[M];
    int N, i;
    int * ptr ;
    ptr=arr;    // Pointer to arr[0]

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i));
    }

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d, ", *(ptr + i));
    }

    return 0;
}
