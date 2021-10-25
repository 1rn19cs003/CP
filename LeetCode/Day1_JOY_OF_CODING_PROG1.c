int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    int arr[2][n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[0][i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[1][i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[0][i] == arr[0][j])
            {
                int temp = arr[1][i];
                temp++;
                arr[1][i] = temp;
                arr[1][j] = temp;
            }
        }
    }
    printf("Freq of the elements are\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}