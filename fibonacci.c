#include<stdio.h>
int main()
{
  int n = 0;
  do {
  printf("Enter number of terms till which we should display fibonacci sequence : \n");
  scanf(" %d",&n);
} while(n<1);
int i1, i2, i3;
i1=0;
i2 = 1;
i3=1;
if (n==1){
  printf("%d",i1);
}
else if (n==2){
  printf("%d %d",i1, i2);
}
else {
  printf("%d %d %d",i1,i2,i3);
  while(n-3>0)
  {
    i1=i2+i3;
    printf(" %d ",i1);
    i2=i3;
    i3=i1;
    n--;
  }
}
}
