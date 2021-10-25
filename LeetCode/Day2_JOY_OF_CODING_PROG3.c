int main()
{
    int n = 10;
    printf("Enter the elements of the array\n");
    int arr[n];
    int flag[n];
    for (int i = 0; i < n; i++)
    {
        flag[i] = 0;
    }
    int val;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if (flag[val] == 0)
        {
            arr[p++] = val;
            flag[val] = 1;
        }
        else
            continue;
    }
    for (int i = 0; i < p; i++)
    {
        printf("%d ", arr[i]);
    }
}