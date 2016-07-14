#include<stdio.h>
#include<conio.h>
int main()
{
  int a[1000],t,n,i,j;
  clrscr();
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  scanf("%d",&t);
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
     if(a[i]+a[j]==t)
     {
      printf("%d %d",a[i],a[j]);
      break;
     }
   }
  }
  getch();
 return 0;
}
