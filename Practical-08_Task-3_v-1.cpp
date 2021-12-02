#include<iostream>
using namespace std;
int main()
{
  int arr=10;
  int *p;
  p=&a;
  int**q;
  q=&(&a);     //error: lvalue required as unary '&' operand
  return 0;
}
