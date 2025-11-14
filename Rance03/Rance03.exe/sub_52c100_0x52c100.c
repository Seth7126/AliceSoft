// 函数: sub_52c100
// 地址: 0x52c100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_10 = arg3
sub_52c340(arg3, *(arg1 + 4), arg3 + 0x38, arg3)
void* edi = *(arg1 + 4)

for (int32_t* i = edi - 0x38; i != edi; i = &i[0xe])
    (**i)(0)

*(arg1 + 4) -= 0x38
*arg2 = arg3
return arg2
