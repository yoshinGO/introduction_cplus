//検証用・識別番号クラスVerId（ソース部）

#include "VerId.h"

int VerId::counter = 0; //何番までの識別番号を与えたのか//

//コンストラクタ
VerId::VerId()
{
    id_no = ++counter;//識別番号を与える（前置増分演算子だからインクリメント後の値を与える）←そもそも代入演算子があるから、後置だろうと関係なさそう
}

//識別番号を調べる
int VerId::id() const
{
    return id_no; //識別番号を返却
}