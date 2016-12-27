#include <stdio.h>

/* http://i...content-available-to-author-only...e.com/CO4tdA */
int main()
{
 int i=0;
 int a,b,c,d;

 a=++i + ++i;
 i=0;
 b=++i + i++;
 i=0;
 c=i++ + ++i;
 i=0;
 d=i++ + i++;
 i=0;

 printf("%d,%d,%d,%d",a,b,c,d);
 return 0;
}