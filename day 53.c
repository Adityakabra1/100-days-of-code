#include <stdio.h>

int main()
{
    int n, i;
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum = totalSum + arr[i];
    }

    for (i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}