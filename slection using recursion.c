#include<stdio.h>
void selectionSort(int a[],int n)
{
if(n==1)
return;
int i,j,temp,min;
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]<a[min])
min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
selectionSort(a,n-1);
}
int main()
{
int a[10],n,i,j,min,temp;
printf("enter value of n \n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
selectionSort(a,n);
printf("sorted elements:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
