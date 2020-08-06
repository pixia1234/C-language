#include<stdio.h>
int main(int argc, char const *argv[]) {
  int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
  int i,j,(*p)[4];
  for(p=a,i=0;i<3;i++,p++)
  {
    for(j=0;j<4;j++) printf("%d\t",*(*p+j) );
    printf("\n");
  }
}
