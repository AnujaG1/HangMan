#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n: ");
    scanf("%d", &n);
    int arr[n];
    for(i =0;i<n;i++)
    {
        printf("Enter elements: ");
        scanf("%d", &arr[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("the element is %d", arr[i]);
        printf("\n");
    }
    return 0;
}