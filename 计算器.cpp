#include <iostream>
using namespace std;
 
int main()
{
    char op;//变量名为char
    float num1, num2;
 
    cout << "输入运算符：+、-、*、/ : ";
    cin >> op;
 
    cout << "输入两个数: "; 
    cin >> num1 >> num2;
 
    switch(op)//对+，-，*，/进行选择 
    {
        case '+'://输入'+'号时,实现计算 
            cout << num1+num2;
            break;
 
        case '-'://输入'-'号时 ，实现计算 
            cout << num1-num2;
            break;
 
        case '*'://输入'*'号时，实现计算 
            cout << num1*num2;
            break;
 
        case '/'://输入'/'号时，实现计算 
            if (num2 == 0)//如果除数为0 
            {
                cout << "error不能除以零";//提示输入错误 
                break;
            }
            else//除数不为0，开始计算 
            {
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
