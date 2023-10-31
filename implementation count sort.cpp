#include <stdio.h>
void countingSort(int a[], int n) 
{
  int b[10],c[10];
  int max=a[0];
  for(int i=1;i<n;i++)
  {
    if (a[i]>max)
      max=a[i];
  }
  for(int i=0;i<=max;++i) 
  {
    c[i]=0;
  }
  for(int i=0;i<n;i++)
  {
    c[a[i]]++;
  }
  for(int i=1;i<=max;i++)
  {
    c[i]+=c[i-1];
  }
  for(int i=n-1;i>=0;i--)
  {
    b[c[a[i]]-1]=a[i];
    c[a[i]]--;
  }
  for(int i=0;i<n;i++)
  {
    a[i]=b[i];
  }
}
int main() 
{
  int array[50],n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      scanf("%d",&array[i]);
  }
  countingSort(array,n);
  for(int i=0;i<n;++i) 
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
