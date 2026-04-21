#include<stdio.h>
void bubbleSort(int a[],int n)
{
if(n==1)
return;
int i,temp;
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;

}
}
bubbleSort(a,n-1);
}
int main()
{
int a[10],i,n;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubbleSort(a,n);
printf("sorted elements:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
