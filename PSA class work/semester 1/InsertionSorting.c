//Insertion Sort
#include<stdio.h>

//Funciton Definition
void InsertionSort(int arr[],int n)
{
    int i,j,key;

    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;   //inserting key
    }
}

//Driver code
int main(int argc, char const *argv[])
{
    int arr[100],n,i;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nArray before Sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    InsertionSort(arr,n);   //fun call

    printf("\nArray after Sorting:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}