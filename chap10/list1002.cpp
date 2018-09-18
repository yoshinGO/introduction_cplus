//銀行口座クラス（第１版）とその利用例

#include <string>
#include <iostream>

using namespace std;

class Account
{
public:
    string name; //口座名義
    string number; //口座番号
    long balance; //預金残高
};

int main()
{
    //クラス型オブジェクトの定義
    Account suzuki; //鈴木君の口座
    Account takeda; //武田君の口座

    suzuki.name = "鈴木龍一";
    suzuki.number = "12345678";
    suzuki.balance = 1000;

    takeda.name = "武田浩文";
    takeda.number = "87654321";
    takeda.balance = 200;

    suzuki.balance -= 200;
    takeda.balance += 100;

    cout << "■鈴木君の口座：\"" << suzuki.name << "\"（" << suzuki.number << "）" << suzuki.balance << "円\n";

    cout << "■武田君の口座：\"" << takeda.name << "\"（" << takeda.number << "）" << takeda.balance << "円\n";
}


