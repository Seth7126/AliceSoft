// 函数: sub_6247b0
// 地址: 0x6247b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg2

if (sub_6249e0(arg1, esi) == 0)
    return sub_563c60(esi)

void** esi_1 = sub_432330(arg1 + 0x1c, esi)
void** result

if (esi_1 != *(arg1 + 0x1c))
    result = sub_412ca0(arg2, &esi_1[4])

if (esi_1 == *(arg1 + 0x1c) || result.b != 0)
    esi_1 = *(arg1 + 0x1c)

result.b = esi_1 != *(arg1 + 0x1c)
return result
