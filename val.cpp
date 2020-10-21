#include <iostream>
using namespace std;

int main()
{

  int val;
  char val2[10];
  cout << "var1 变量的地址： ";
  cout << & val << endl;

  cout << "var2 变量的地址： ";
  cout << &val2 << endl;




  int var  = 20;  //实际变量
  int *ip;  //指针变量

  ip = &var; // 在指针变量中存储 var 的地址
  cout << "Value of var variable: ";
  cout << var << endl;

  // 输出在指针变量中存储的地址
  cout << "Address stored in ip variable: ";
  cout << ip << endl;

  // 访问指针中地址的值
  cout << "Value of *ip variable: ";
  cout << *ip << endl;




  int  *ptr = NULL;

  cout << "ptr 的值是 " << ptr ;


  // 声明简单的变量
  int    i;
  double d;

  // 声明引用变量 ,被引用否,r和i的值一致
  int&    r = i;
  double& s = d;

  i = 5;
  cout << "Value of i : " << i << endl;
  cout << "Value of i reference : " << r  << endl;

  d = 11.7;
  cout << "Value of d : " << d << endl;
  cout << "Value of d reference : " << s  << endl;




  return 0;



}