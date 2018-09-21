//日付クラスDate（第４版）の利用例

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date today(2016, 2, 17); //今日//デフォルトコンストラクタによって現在の日付で初期化される

    cout << "今日の日付：" << today << '\n';

    cout << "昨日の日付：" << today.preceding_day() << '\n';
    cout << "一昨日の日付：" << today.preceding_day().preceding_day() << '\n';

    cout << "明日の日付：" << today.following_day() << '\n';
    cout << "明後日のの日付：" << today.following_day().following_day() << '\n';

    cout << "元旦から" << today.day_of_year() << "日経過しています。\n";

    cout << "今年は閏年"
         << (today.is_leap() ? "です。":"ではありません。") << '\n';

    int y, m, d;
    cout << "西暦年：";
    cin >> y;

    cout << "その年は閏年"
         << (Date::is_leap(y) ? "です。" : "ではありません。")<<'\n';
}