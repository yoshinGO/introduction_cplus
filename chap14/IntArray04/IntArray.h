//整数配列クラス（第４部：ヘッダ部）
#ifndef ___Class_IntArray
#define ___Class_IntArray

//整数配列クラス
class IntArray{
    int nelem; //配列の要素数
    int* vec; //先頭要素へのポインタ

public:
    //添字範囲エラー
    class IdxRngErr{//入れ子クラス
    private:
        const IntArray* ident;
        int idx;
    public:
        IdxRngErr(const IntArray* p, int i) : ident(p), idx(i){}
        int index() const { return idx;}
    };

    //明示的コンストラクタ
    explicit IntArray(int size) : nelem(size){vec = new int[nelem];}

    //コピーコンストラクタ
    IntArray(const IntArray& x);

    //デストラクタ
    ~IntArray(){ delete[] vec; }

    //要素数を返す
    int size() const { return nelem;}

    //代入演算子=
    IntArray& operator=(const IntArray& x);

    //添字演算子[]
    int& operator[](int i) {
        if ( i < 0 || i >= nelem)
            throw IdxRngErr(this, i); //添字範囲エラー
        return vec[i];
    }

    //const版添字演算子[]
    const int& operator[](int i) const {
        if ( i < 0 || i >= nelem)
            throw IdxRngErr(this, i);
        return vec[i];
    }
};
#endif