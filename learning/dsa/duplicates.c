#include <stdio.h>

int main()
{
    int array[50], n, i, j;
    int count, alreadyCounted;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Duplicate elements and frequencies:\n");

    for(i = 0; i < n; i++)
    {
        alreadyCounted = 0;

        for(j = 0; j < i; j++)
        {
            if(array[i] == array[j])
            {
                alreadyCounted = 1;
                break;
            }
        }

        if(alreadyCounted)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(array[i] == array[j])
                count++;
        }

        if(count > 1)
            printf("%d : %d times\n", array[i], count);
    }

    return 0;
}