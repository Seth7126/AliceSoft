// 函数: sub_439ae0
// 地址: 0x439ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_412de0(arg2 + 0x38, arg2 + 0x2c)

if (sub_439b40(arg1, arg2) != 0)
    *(arg2 + 0x3c) -= 4
    sub_439d70(arg1)
    int32_t* eax_2
    eax_2.b = 1
    return eax_2

int32_t eax_1 = *(arg2 + 0x38)

if (eax_1 != *(arg2 + 0x3c))
    *(arg2 + 0x2c) = *(eax_1 + ((*(arg2 + 0x3c) - eax_1) s>> 2 << 2) - 4)
    *(arg2 + 0x3c) -= 4

eax_1.b = 0
return eax_1
