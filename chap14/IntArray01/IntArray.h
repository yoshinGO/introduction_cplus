//整数配列クラスIntArray（第１版）

#ifndef ___Class_IntArray
#define ___Class_IntArray

//整数配列クラス
class IntArray{
    int nelem; //配列の要素数
    int* vec; //先頭要素へのポインタ

public:
    //明示的コンストラクタ
    explicit IntArray(int size): nelem(size) {vec = new int[nelem];}

    //デストラクタ
    ~IntArray() { delete[] vec; }

    //要素数を返す
    int size() const {return nelem;}

    //演算子関数として添字演算子[]を定義
    int& operator[](int i){return vec[i];}
};

#endif
