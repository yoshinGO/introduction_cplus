//自動車クラス（ヘッダ部のみで実現するような仕様にする）

#include <cmath>
#include <string>
#include <iostream>

class Car{
  std::string name; //名前
  int width, length, height; //車幅、車長、車校
  double xp, yp; //現在位置燃料
  double fuel_level; //残り燃料

public:
  //コンストラクタ
  Car(std::string n, int w, int l, int h, double f){
    name = n; width = w; length = l; height = h; fuel_level = f;
    xp = yp = 0.0;
  }

  double x(){return xp;}//現在位置のX座標を返す
  double y(){return yp;}//現在位置のY座標を返す

  double fuel(){return fuel_level;}//残りの燃料を返す

  void print_spec(){//スペックを表示
    std::cout << "名前：" << name << "\n";
    std::cout << "車幅：" << width << "mm\n";
    std::cout << "車長：" << length << "mm\n";
    std::cout << "車高：" << height << "mm\n";
  }

  bool move(double dx, double dy){//X方向にdx・Y方向にdy移動
    double dist = sqrt(dx * dx + dy * dy); //sqrtは平方根を求める関数

    if(dist > fuel_level)
      return false; //燃料不足
    else{
      fuel_level -= dist; //移動距離の分だけ燃料が減る
      xp += dx;
      yp += dy;
      return true;
    }
  }
};
