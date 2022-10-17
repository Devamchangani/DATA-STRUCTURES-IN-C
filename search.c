#include<stdio.h>
int binary_search(int arr[],int size,int element)
{ 
   int low,mid,high;
   low=0;
   high=size-1;
//    start searching
while(low<=high)
{
   mid=(low+high)/2;
   if(arr[mid]==element)
   {
    return mid;
   }
   if(arr[mid]<element)
   {
      low=mid + 1;
   }
   else
   {
    high=mid-1;
   } 
}
return -2;
//    searching ends
}
// unsorted array for linear search 
int main()
{
   int n,temp,ele,i;
   printf("\n How many elements : ");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n This is your your sorted elements : ");
     for(i=0;i<n;i++)
     {
         printf("\t%d\t",arr[i]);
     }
     printf("\n Enter your search element : ");
     scanf("%d",&ele);
     int bi=binary_search(arr,n,ele);
    printf("\n Your %d element is %d position.. ",ele,bi+1);
    return 0;

}