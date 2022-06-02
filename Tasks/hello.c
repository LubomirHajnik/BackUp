#include <stdio.h>
#include "static.h"


static int add(const int aditiv){
  static int a=0;
  a=a+aditiv;
  return a;
}

extern int number;

int main(){

  
  /* int first = 'ab';
  int second = 'cd';

  printf("%d\n", first);
  printf("%d\n", second); */

  printf("%d\n",number);

  printf("%d\n",add(1));
  printf("%d\n",add(1));
  printf("%d\n",add(1));
  printf("%d\n",add(1));
  
  return 0;

}
