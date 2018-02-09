#include<stdio.h>

void function(void);
int main()
{
printf("hello world\n");
printf("hello world 1\n");
function();
return 0;
}


void function(void)
{
  printf("%s\n",__func__);
}
