#include<stdio.h>
int linearSearch(int a[], int n, int key, int index)
{
    // Base case: reached end
    if(index >= n)
        return 0;

    // If element found
    if(a[index] == key)
        return 1;

    // Recursive call
    return linearSearch(a, n, key, index + 1);
}

int main()
{
    int i, n, a[100], key;

    printf("enter the size of the array\n");
    scanf("%d", &n);

    printf("enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the key element to search:\n");
    scanf("%d", &key);

    if(linearSearch(a, n, key, 0))
        printf("the element found = %d", key);
    else
        printf("the element not found");

    return 0;
}
