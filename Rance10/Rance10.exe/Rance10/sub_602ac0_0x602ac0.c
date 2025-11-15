// 函数: sub_602ac0
// 地址: 0x602ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (true)
    int32_t edi_1 = arg6
    
    if (arg4 == edi_1 && arg5 == arg7)
        *arg3 = arg8
        arg3[1] = arg9
        return arg3
    
    int32_t ecx_1
    
    if (arg7 == 0)
        edi_1 -= 4
        ecx_1 = 0x1f
        arg6 = edi_1
    else
        ecx_1 = arg7 - 1
    
    int32_t* esi_1 = arg8
    arg7 = ecx_1
    int32_t edx_1
    
    if (arg9 == 0)
        esi_1 -= 4
        edx_1 = 0x1f
        arg8 = esi_1
    else
        edx_1 = arg9 - 1
    
    arg9 = edx_1
    int32_t eax_1 = *esi_1
    
    if ((*edi_1 & 1 << ecx_1.b) == 0)
        *esi_1 = eax_1 & not.d(1 << (edx_1 u% 0x20))
    else
        *esi_1 = eax_1 | 1 << (edx_1 u% 0x20)
