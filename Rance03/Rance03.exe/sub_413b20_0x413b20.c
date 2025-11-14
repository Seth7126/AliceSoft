// 函数: sub_413b20
// 地址: 0x413b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_10 = arg3
sub_413d80(arg3, *(arg1 + 4), arg3 + 0x6c, arg3)
void* edi = *(arg1 + 4)

for (int32_t* i = edi - 0x6c; i != edi; i = &i[0x1b])
    (**i)(0)

*(arg1 + 4) -= 0x6c
*arg2 = arg3
return arg2
