#include<stdio.h>
#include<conio.h> 
#include<time.h>
#include<dos.h>
void main()
{   
    clock_t end,start;
    int a[100],n,i,j,min,temp;
    clrscr();
    printf("\n enter the number of elements: ");
    scanf("%d",&n);
    printf("\n enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    start=clock();
    for(i=0;i<n-1;i++)
    {
        delay(10);
	min=i;
	for(j=i+1;j<n;j++)
	{
	    if(a[min]>a[j])
	    min=j;
	}
	if(min!=i)
	{
	    temp=a[i];
	    a[i]=a[min];
	    a[min]=temp;
	}
    }
     end=clock();

    printf("\n the sorted array is : ");
    for(i=0;i<n;i++)
    {
	printf("%d\t ",a[i]);
    }
    printf("\n\n TIME COMPLEXITY=%f",(float)(end-start)/CLK_TCK);
    getch();
}
