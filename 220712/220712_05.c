#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *first = arr;
    int *last = &arr[5];

    for (int i = 0; i < 3; i++)
    {
        int temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}