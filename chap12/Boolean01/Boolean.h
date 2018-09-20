//真理値クラスBoolean

#ifndef ___Class_Boolean
#define ___Class_Boolean

#include <iostream>

//真理値クラス
class Boolean{
public:
    enum boolean { False, True}; //Falseは偽 / Trueは真 （列挙体で定義）

private:
    boolean v; //真理値

public:
    //デフォルトコンストラクタ
    Boolean() : v(False){} //偽で初期化

    //コンストラクタ
    Boolean(int val) :v(val == 0 ? False : True){}//中身は空
    //0なら偽、0でないなら真

    //int型への変換関数
    operator int() const{return v;}

    //const char*型への変換関数
    operator const char*(){return v == False ? "False":"True";}
};

//出力ストリームsにxを挿入
inline std::ostream& operator<<(std::ostream& s, Boolean& x)
{
    return s << static_cast<const char*>(x);
}


#endif