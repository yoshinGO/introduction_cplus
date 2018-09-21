//日付クラスDate（第４版：ソース部）

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

//平年の各月の日数
int Date::dmax[] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//ヘッダ部でconstを付けて宣言されているため、静的データメンバ

//y年m月の日数を求める
int Date::days_of_month(int y, int m)//静的メンバ関数
{
    return dmax[m-1] + (is_leap(y) && m == 2);
    //二月かつ閏年なら28+1で29になるような設定
}

//Dateのデフォルトコンストラクタ（今日の日付に設定）
Date::Date()
{
    time_t current = time(NULL); //現在の暦時刻を取得
    struct tm* local = localtime(&current); //要素別の時刻に変換

    y = local->tm_year + 1900; //年：tm_yearは西暦年-1900
    m = local->tm_mon + 1; //月：tm_monは０〜１１
    d = local->tm_mday;
}

//Dateのコンストラクタ（指定された年月日に設定）
Date::Date(int yy, int mm, int dd)
{
    y = yy;
    m = mm;
    d = dd;
}

//年内の経過日数を返却
int Date::day_of_year() const
{
    int days = d; //現在のその月の日付

    for(int i = 1; i < m; i++)
      days += days_of_month(y, i);
    return days;
}

//前日の日付を返却
Date Date::preceding_day() const
{
    Date temp = *this; //同一の日付

    if(temp.d > 1)//日付が１より大きければ大きければ、日付の値をデクリメントするだけ
      temp.d--;
    else{//日付が１のとき
      if(--temp.m < 1){//つまり1月1日のとき
        temp.y--;//年をデクリメント
        temp.m = 12;//月を12にする
      }
      temp.d = days_of_month(temp.y, temp.m);//この関数でtemp.dにy年m月の日数が入る。つまり最終日が入る。
    }
    return temp;
}

//翌日の日付を返却
Date Date::following_day() const
{
    Date temp = *this; //同一の日付
    if(temp.d < days_of_month(temp.y, temp.m))//月の最終日でなければインクリメントするだけ
      temp.d++;
    else{//もし最終日なら
      if(++temp.m > 12){//つまり12月31日なら（この時点でtemp.mは大きくなる？）
        temp.y++;//年をインクリメントして
        temp.m = 1;//月に1を代入する
      }
      temp.d = 1;//ただの最終日ならmに1を代入する
    }
    return temp;
}

//文字列表現を返却
string Date::to_string() const
{
    ostringstream s;
    s << y << "年" << m << "月" << d << "日";
    return s.str();
}

//曜日を返却（日曜〜土曜が０〜６に対応）
int Date::day_of_week() const
{
    int yy = y;
    int mm = m;
    if(mm == 1 || mm ==2){
        yy--;
        mm += 12;
    }
    return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8)/ 5 + d) % 7;
}

//出力ストリームsにxを挿入
ostream& operator<<(ostream& s, const Date& x)
{
    return s << x.to_string();
}

//入力ストリームsから日付を抽出してxに格納
istream& operator>>(istream& s, Date& x)
{
    int yy, mm, dd;
    char ch;

    s >> yy >> ch >> mm >> ch >> dd;
    x = Date(yy, mm, dd);
    return s;
}


























