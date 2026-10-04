//Anuradha Tavdar, Roll No: 1
#include <stdio.h>
int main()
{
    int a[] = {2, 3, 5, 3, 2};
    int n = 5;
    int single = 0;

    for (int i = 0; i < n; i++)
    {
        single = single ^ a[i];
    }

    printf("Single element = %d", single);
    return 0;
}