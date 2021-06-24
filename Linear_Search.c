#include<stdio.h>
 int Linear_Search(int a[],int n,int x)
 {
     int i;
     for(i=1;i<=n;i++)
     {
         if(a[i] == x)
         {
             return i;
         }
     }
     return -1;
 }
int main()
{
  int a[30],n,x,i;
  printf("Enter how many input you insert : ");
  scanf("%d",&n);
  printf("Input your %d Numbers : \n",n);
  for(i=1;i<=n;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("Which number you want to search : ");
  scanf("%d",&x);
 if(Linear_Search(a,n,x) == -1)
 {

     printf("Not Found\n");
 }
 else printf("Found in index of %d",Linear_Search(a,n,x));
}
