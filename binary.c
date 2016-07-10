#include<stdio.h>
int main(void)
{
int i,j=0,n,arr[50],arr1[50],m=0,rem;
printf("\n Enter the n value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
while (arr[i])
{
rem=arr[i]%2;
arr[i]=arr[i]/2;
m++;
}
arr1[j++]=m;
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr1[i]>arr1[j])
        {
            int t=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=t;
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
        else if(arr1[i]==arr1[j])
        {
            if(arr[i]>arr[j])
            {
                int t=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=t;
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
                
            }
        }
    }
}
for(i=0;i<n;i++)
printf("%d",arr[i]);
    return 0;
}
