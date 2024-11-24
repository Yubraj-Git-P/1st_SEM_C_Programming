#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int arr[5];

    ptr = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter arr[%d] ",(i+1));
        scanf("%d",arr[i]);

        printf("arr[%d] = %d",i,(arr[i]));
    }

    

    return 0;
}