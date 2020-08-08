#include <stdio.h>
typedef struct point
{
  int x,y,z;
}POINT ;
POINT func(POINT p)
{
  p.x=1;
  p.y=1;
  p.z=1;
  return p;
}
int  main(int argc, char const *argv[]) {
  POINT pos={0};
  pos=func(pos);

  printf("%d %d %d\n",pos.x,pos.y,pos.z );
  return 0;
}
