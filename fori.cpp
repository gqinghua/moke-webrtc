#include <iostream>

using namespace std;

int main() {

  char p;
  float num1, num2;
  cout << "请输入运算符 " << endl;

  cin >> p;
  cout << "请输入两个数 " << endl;

  cin >> num1 >> num2;
  switch (p) {
      case '+':
        cout << num1+num2;
        break;
  case '-':
    cout << num1-num2;
    break;
  case '*':
    cout << num1*num2;
    break;
  case '/':
    cout << num1*num2;
    if (num2 == 0){
      cout << "error不能除以零";
      break;
    } else{
      cout << num1 / num2;
      break;
    }
  default:
    // 如果运算符不是 +, -, * 或 /, 提示错误信息
    cout << "Error!  请输入正确运算符。";
    break;


  }

  return 0;
}
