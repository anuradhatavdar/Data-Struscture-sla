#include <stdio.h>
int main()
{
    int a[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;
    int candidate = a[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == candidate)
            count++;
        else
            count--;

        if (count == 0)
        {
            candidate = a[i];
            count = 1;
        }
    }

    printf("Majority element = %d", candidate);
    return 0;
}