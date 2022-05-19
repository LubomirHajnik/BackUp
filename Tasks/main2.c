static int add(const int aditiv){
  static int a=0;
  a=a+aditiv;
  return a;
}

int function_add(int x){
    return add(x);
}