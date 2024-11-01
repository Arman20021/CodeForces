#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int prim_diagonal = 0, second_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                prim_diagonal+=arr[i][j];
            }
            if(i+j==n-1)
            {
                second_diagonal+=arr[i][j];
            }
        }
    }
    printf("%d",abs(prim_diagonal-second_diagonal));
   

    return 0;
}
