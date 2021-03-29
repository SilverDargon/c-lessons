#include <stdio.h>
#include <math.h>
int main()
{
   int x;
   printf("input any int:");
   scanf("%d", &x);
   if(x >= 0){
      int y = sqrt(x) + 1;
      printf("%d", y);
   }else {
      printf("x < 0 无法计算！");
   }
   return 0;
}

