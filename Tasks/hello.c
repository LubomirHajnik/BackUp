#include <stdio.h>



int add(const int aditiv){
  static int a=0;
  a=a+aditiv;
  return a;
}

int main(){

  
  // int age;
  // printf("Enter your age: ");
  // scanf("%d",&age);
  // printf("Your age is is %d\n", age);

  printf("%d\n",add(1));
  printf("%d\n",add(1));
  printf("%d\n",add(1));
  printf("%d\n",add(1));
  


  return 0;

}
