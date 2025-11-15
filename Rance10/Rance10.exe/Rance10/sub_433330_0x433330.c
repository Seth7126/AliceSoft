// 函数: sub_433330
// 地址: 0x433330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg1
int32_t* eax_1 = **data_7fcb44

if (i s> 0)
    do
        eax_1 = *eax_1
        i -= 1
    while (i s> 0)
    
    if (i s< 0)
        int32_t i_2 = neg.d(i)
        int32_t i_1
        
        do
            eax_1 = eax_1[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

int32_t esi = eax_1[2]
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2aaaaaab, eax_1[3] - esi)
int32_t edx_1 = edx s>> 2
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (*(esi + result * 0x18 - 8) == 0)
    return result - 1

return result
