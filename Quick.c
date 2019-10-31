#include<stdio.h>
void quicksort(int n[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(n[i]<=n[pivot]&&i<last)
            i++;
         while(n[j]>n[pivot])
            j--;
         if(i<j){
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
         }
      }
      temp=n[pivot];
      n[pivot]=n[j];
      n[j]=temp;
      quicksort(n,first,j-1);
      quicksort(n,j+1,last);

   }
}
void main(){
   int i, count, n[25];
	clrscr();
   printf("enter the no. of elements: ");
   scanf("%d",&count);
   printf("enter the list : ", count);
   for(i=0;i<count;i++)
      scanf("%d",&n[i]);
   quicksort(n,0,count-1);
   printf("Sorted elements are: ");
   for(i=0;i<count;i++)
      printf(" %d",n[i]);
  getch();
}
