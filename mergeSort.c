#include<stdio.h>
void merge(int arr[50],int left,int middle,int right)
   {
      int i,j,k;
      int n1=middle-left+1;
      int n2=right-middle;
      int L[n1],R[n2];
      for(i=0;i<n1;i++)
         {
           L[i]=arr[left+i];
         }
      for(j=0;j<n2;j++)
         {
           R[j]=arr[middle+1+j];
         }
      i=0,j=0,k=left;
      while(i<n1 && j<n2)
         {
           if(L[i]<=R[j])
             {
               arr[k]=L[i];
               i++;
               k++;
             }
           else
             {
               arr[k]=R[j];
               j++;
               k++;
             }
         }
      while(i<n1)
         {
           arr[k]=L[i];
           i++;
           k++;
         }
      while(j<n2)
         {
           arr[k]=R[j];
           j++;
           k++;
         }
   }
void mergeSort(int arr[50],int left,int right)
   {
      int middle=(left+right)/2;
      if(left<right)
         {
           mergeSort(arr,left,middle);
           mergeSort(arr,middle+1,right);
           merge(arr,left,middle,right);
         }
   }
void main()
   {
     int limit,i;
     printf("Enter the limit \n");
     scanf("%d",&limit);
     int a[limit];
     printf("Enter the elements of the array\n");
     for(i=0;i<limit;i++)   
        {
          scanf("%d",&a[i]);
        }
     printf("Array is :\n");
     for(i=0;i<limit;i++)   
        {
          printf("%d\t",a[i]);
        }
     mergeSort(a,0,limit-1);
     printf("\nSorted Array :\n");
     for(i=0;i<limit;i++)   
        {
          printf("%d\t",a[i]);
        }
   }
