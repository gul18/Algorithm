#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<dos.h>
void main()
{
clock_t end,start;
int a[10],i,j,k,n;
clrscr();
printf("\n Enter the number of elements in an array:");
scanf("%d",&n);
printf("\n Enter the elements in an array:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
start=clock();
for(i=2;i<=n;i++)
{
delay(10);
j=i-1;
k=a[i];

while(a[j]>=k && j>0)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=k;
}
end=clock();
printf("\n The sorted array is:");
for(j=1;j<=n;j++)
printf("\t%d",a[j]);

printf("\n\n TIME COMPLEXITY=%f",(float)(end-start)/CLK_TCK);
getch();
}
