#include<stdio.h>
#include<stdlib.h>
struct poly
   {
     int coef,exp;
     struct poly *link;
   }*temp,*ptr,*head;
int create_poly()
   {
      int n,i,coef,exp;
      printf("Enter the number of terms in the polynomial :\n");
      scanf("%d",&n);
      head=NULL;
      for(i=0;i<n;i++)
         {
            temp=(struct poly*)malloc( sizeof (struct poly));
            printf("Enter the coefficient ");
            scanf("%d",&coef);
            printf("Enter the exponent");
            scanf("%d",&exp);
            temp->coef=coef;
            temp->exp=exp;
            temp->link=NULL;
            if(head==NULL)
              {
                 head=temp;
                 ptr=head;
              }
            else
              {
                 ptr->link=temp;
                 ptr=ptr->link;
              }
         }
      return head;
   }
int display_poly(head)
   {
     struct poly *ptr,*head;
     ptr=head;
     while(ptr!=NULL)
        {
           printf("%dx^%d ",ptr->coef,ptr->exp);
           if (ptr->link!=NULL)
              {
                 printf("+ ");
              }
          ptr=ptr->link;
        }
   }
void main()
  {
    struct poly *Phead=create_poly();
    display_poly(Phead);
  }
    
    
