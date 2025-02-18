#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5,};
    int arr2[]={1,2,3,4,5,};
    int arr3[]={1,2,3,4,5,};

    int*ptr={arr1,arr2,arr3};

    int i;

    for(i=0;i<3;i++)
    {
        printf("%d",ptr[i]);
    }
    return 0;
}
