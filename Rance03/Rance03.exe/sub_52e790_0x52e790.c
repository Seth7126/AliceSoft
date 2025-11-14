// 函数: sub_52e790
// 地址: 0x52e790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_10 = arg3
sub_52e9c0(arg3, *(arg1 + 4), arg3 + 0x14, arg3)
void* edi = *(arg1 + 4)

for (int32_t* i = edi - 0x14; i != edi; i = &i[5])
    (**i)(0)

*(arg1 + 4) -= 0x14
*arg2 = arg3
return arg2
