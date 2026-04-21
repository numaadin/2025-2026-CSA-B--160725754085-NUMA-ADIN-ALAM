 #include<stdio.h>
 void main()
 {
 int i,n,a[100],key;
 int found =0;
 printf("enter the size of the array\n");
 scanf("%d",&n);
 printf("enter the elements:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("enter the key element to search:\n");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
 if(a[i]==key)
 {
 found=1;
 printf("the element found =%d",key);
 break;
 }
 }
 if(found==0)
 {
 printf("the element not found");

 }
 }
