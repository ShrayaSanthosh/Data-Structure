#include<stdio.h>
void quick_sort(int a[50],int lb,int ub);
int partition(int a[50],int lb,int ub);
int a[50];
void main()
   {
     int limit,i;
     printf("Enter the limit of the array\n");
     scanf("%d",&limit);
     printf("Enter the elements \n");
     for(i=0;i<limit;i++)
        {
           scanf("%d",&a[i]);
        }
     quick_sort(a,0,limit-1);
     for(i=0;i<limit;i++)
        {
           printf("%d\t",a[i]);
        }
   }
void quick_sort(int a[50],int lb,int ub)
   {
     int loc;
     if(lb<ub)
       {
         loc=partition(a,lb,ub);
         quick_sort(a,lb,loc-1);
         quick_sort(a,loc+1,ub);
       }
       
    }
int partition(int a[50],int lb,int ub)
    {
       int pivot,start,end,temp;
       pivot=a[lb];
       start=lb;
       end=ub;
       while(start<end)
           {
              while(a[start]<=pivot)
                  {
                      start++;
                  }
              while(a[end]>pivot)
                  {
                      end--;
                  }
             if(start<end)
                  {
                     temp=a[start];
                     a[start]=a[end];
                     a[end]=temp;
                  }
             else
                  {
                    temp=a[lb];
                    a[lb]=a[end];
                    a[end]=temp;
                    return end;
                  }
          }
   }

