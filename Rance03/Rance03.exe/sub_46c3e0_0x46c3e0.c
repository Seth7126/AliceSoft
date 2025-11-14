// 函数: sub_46c3e0
// 地址: 0x46c3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 4)

if (eax != 0)
    int32_t eax_1 = *eax
    
    if (eax_1 != 0)
        j__free(eax_1)
    
    j__free(*(arg1 + 4))

*(arg1 + 4) = 0
*(arg1 + 8) = 0x100
*(arg1 + 0xc) = arg2
int32_t ecx
ecx.b = mulu.dp.d(arg2, 4) u>> 0x20 != 0
int32_t __saved_esi_3 = neg.d(ecx) | (arg2 * 4)
*(arg1 + 4) = sub_69a5b3()
int32_t var_10 = arg2 << 8
**(arg1 + 4) = sub_69a5b3()
int32_t result = 1

if (arg2 s> 1)
    int32_t esi_1 = 0x100
    
    do
        int32_t* edx_1 = *(arg1 + 4)
        int32_t ecx_5 = *edx_1 + esi_1
        esi_1 += 0x100
        edx_1[result] = ecx_5
        result += 1
    while (result s< arg2)
    
    result.b = 1

return result
