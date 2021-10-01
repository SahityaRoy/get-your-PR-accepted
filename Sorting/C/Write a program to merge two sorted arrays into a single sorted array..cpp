#include <stdio.h>
int main()
{
 
    int arr1[10], arr2[10], arr3[20], m=0, n=0, i=0, j=0, k=0;
    printf("\n Enter size of Arr[1]: ");
    scanf("%d", &m);
 	printf("\n Enter size of Arr[2]: ");
    scanf("%d", &n);
 
    printf("\n Enter elements of Arr[1]: \n");
    for (i = 0; i < m; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("\n Enter elements of Arr[2]: \n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr2[i]);
    }
 
    i = 0;
    j = 0;
 
    while (i < m && j < n) 
    {
    if (arr1[i] < arr2[j]) 
    {
        arr3[k] = arr1[i];
        i++;
    }
 
    else 
    {
        arr3[k] = arr2[j];
        j++;
    }
    	k++;
    }
 
        if (i >= m) 
        {
            while (j < n) 
            {
                arr3[k] = arr2[j];
                j++;
                k++;
            }
        }
 
        if (j >= n) 
        {
            while (i < m)
            {
                arr3[k] = arr1[i];
                i++;
                k++;
            }
        }
 
    printf("\n After merging both Arr[1] and Arr[2]: \n");
    for (i=0;i<m+n;i++) 
    {
        printf("\n%d", arr3[i]);
    }
 	return 0;
}
