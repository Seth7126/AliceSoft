// 函数: sub_439dd0
// 地址: 0x439dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x2c)

if (eax != *(arg1 + 0x30))
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x66666667, *(arg1 + 0x30) - eax)
    int32_t edx_2 = edx_1 s>> 4
    
    if ((edx_2 u>> 0x1f) + edx_2 != 1)
        return 5
    
    void* ecx_2 = *(arg1 + 0x2c)
    int32_t result = *(ecx_2 + 4)
    
    if (result == 2)
        return 1
    
    if (result == 3)
        return 2
    
    if (result == 4)
        return result
    
    if (result == 1)
        if (sub_40c250(ecx_2 + 8, "true") != 0)
            return 3
        
        int32_t ecx_6
        ecx_6.b = sub_40c250(*(arg1 + 0x2c) + 8, "false") == 0
        return (ecx_6 << 1) + 3

return 0
