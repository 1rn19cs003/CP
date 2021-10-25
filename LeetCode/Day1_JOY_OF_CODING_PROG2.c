int check(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                return arr[i];
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = check(arr, n);
    if (ans == -1)
    {
        printf("Array distinct\n");
    }
    else
    {
        printf("array is not distinct as %d is present more then one times\n", ans);
    }
}