#include <stdio.h>
#include "static.h"




static int add(const int aditiv){
  static int a=0;
  a=a+aditiv;
  return a;
}

extern int number;

int main(){

  
  printf("%d",number);

  printf("%d\n",add(1));
  printf("%d\n",add(1));
  printf("%d\n",add(1));
  printf("%d\n",add(1));
  


  return 0;

}
