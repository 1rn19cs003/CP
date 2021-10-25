int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Sum value\n");
    int sum;
    scanf("%d", &sum);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("The two indices are %d and %d\n", i, j);
                return 0;
            }
        }
    }
    printf("No indices found\n");
}