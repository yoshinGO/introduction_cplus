//３行２列の２次元配列の全構成要素に値を読み込んで表示

#include <iostream>

using namespace std;

int main()
{
    int m[3][2];//３行２列の２次元配列

    cout << "各構成要素の値を代入せよ。"<< endl;
    for(int i= 0; i<3; i++){
      for(int j = 0; j < 2; j++){
        cout <<"m[" << i <<"][" << j << "]：";
        cin >> m[i][j];
      }
    }

    for(int i= 0; i<3; i++){
      for(int j = 0; j<2; j++){
        cout <<"m[" << i <<"][" << j << "]：" << m[i][j] << endl;
      }
    }
}