#include<stdio.h>
int main()
{
  int n = 0;
  do {
  printf("Enter number of terms till which we should display fibonacci sequence : \n");
  scanf(" %d",&n);
} while(n<1);
int i1=1;
int i2=1;
int i3=1;
if(n<=3) {
  for(int i=0; i<n; i++) {
    printf(" 1 ");
  }
}
else {
    for(int i=0; i<3; i++) {
    printf(" 1 ");
  }
  while(n-3>0) {
    //i1=i1+i2;
    printf(" %d ",i1+i2);
    int i4=i3;
    i3=i1+i2;
    i1=i2;
    i2=i4;
    n--;
  }
}
}
