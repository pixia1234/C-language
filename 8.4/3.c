#include<stdio.h>

/*
float ans=0;
float num[1001][3];
int n,i;
int check()
{
  if(ans>=50000)
  {
    for(i=1;i<=n;i++) if(num[1001][2])
    {
      ans+=num[i][0]*0.95>num[i][1]?num[i][1]:num[i][0]*0.95;
    }
    printf("%f",ans);
    return 1;
  }
  return 0;
}
*/
int  main(int argc, char const *argv[]) {
  int n,i;
  float num[1001][3];
  float total1=0,total2=0,total3=0,total4=0,total5=0;                   //total1:a比b便宜
  scanf("%d",&n);                                                       //total2:a*0.95比b贵
  for(i=1;i<=n;i++)                                                     //total3:a*0.95<b<a  选A
  {                                                                     //total4:选B
    scanf("%f %f",&num[i][0],&num[i][1]);                               //total5：a*0.95==b
    if(num[i][0]<=num[i][1]) {total1+=num[i][0];num[i][2]=1;}
    else if (num[i][0]*0.95>num[i][1]){total2+=num[i][1];num[i][2]=2;}
    else if(num[i][0]*0.95==num[i][1]){total5+=num[i][0];num[i][3]=3;}
    else {num[i][2]=0;total3+=num[i][0];total4+=num[i][1];}
  }
  if(total1+total3+total5>=50000) printf("%.2f",total2 + total1*0.95 + total3*0.95+total5*0.95);
  else printf("%.2f",total2+total4+total1+total5*0.95);
  return 0;
}
  /*
  for(i=1;i<=n;i++) if(num[i][0]<=num[i][1])
  {
    num[i][2]=0;
    ans+=num[i][0];
  }
   if(check()) return 0;
   for(i=1;i<=n;i++) if(num[i][0]*0.95>num[i][1])
   {
     num[i][2]=0;
     ans+=num[i][1];
   }
   if(check()) return 0;
   float total_a=0;
   for(i=1;i<=n;i++)  total_a+=num[i][0];
   if(total_a<=50000)
   {
     for(i=1;i<=n;i++) if(num[1001][2])
     {
       ans+=num[i][0]*0.95>num[i][1]?num[i][1]:num[i][0]*0.95;
     }
     printf("%f",ans);
     return 0;
   }
   else
   {

   }
   */
