#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
 cout<<"Swap value in swap function: "<<*x<<" "<<*y<<endl;
}
int main()
{
  int a=10;
  int b=20;
 cout<<"Value before swap: "<<a<<" "<<b<<endl;
  swap(a,b);
  cout<<"Value after swap value in main function: "<<a<<" "<<b<<endl;
  return 0;
}
