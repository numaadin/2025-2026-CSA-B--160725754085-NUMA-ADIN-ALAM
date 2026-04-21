#include<stdio.h>
void insertionSort(int a[],int n)
{
if(n==1)
return;
int i,j,key;
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j--;

}
a[j+1]=key;
}
insertionSort(a,n-1);
}
int main ()
{
int a[10],i,j,n,key;
printf("enter n:\n");
scanf("%d",&n);
printf("enter elements :\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insertionSort(a,n);
printf("sorted elements:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
