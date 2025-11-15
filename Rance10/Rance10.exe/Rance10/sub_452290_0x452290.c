// 函数: sub_452290
// 地址: 0x452290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x30)

for (int32_t edi = *(arg1 + 0x34); i != edi; i = &i[1])
    int32_t* ebx_1 = *i
    int32_t ecx = ebx_1[1]
    ebx_1[1] -= 1
    (**ebx_1)(ecx - 1)

int32_t result = *(arg1 + 0x30)
*(arg1 + 0x34) = result
return result
