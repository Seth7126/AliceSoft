// 函数: sub_4497d0
// 地址: 0x4497d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_14 = 0
sub_4499f0(&var_14, arg2)
uint32_t ebp = var_14

if (ebp != 0)
    int32_t eax_1 = arg2[1]
    arg2[1] = eax_1 + 1
    int32_t eax_4 = **arg2
    int32_t var_c_1 = eax_4
    eax_4.b = *(eax_4 + (eax_1 u>> 3))
    eax_4.b u>>= 7 - (eax_1.b & 7)
    int32_t eax_5
    eax_5.b = (eax_4.b & 1) == 0
    int32_t edx_2 = 0
    
    if (arg4 != 0)
        int32_t ecx_3 = (eax_1 + 1) & 7
        uint32_t eax_8 = (eax_1 + 1) u>> 3
        char* edx_4 = var_c_1 + eax_8
        char var_8_1 = ecx_3.b
        uint32_t edx_6 = zx.d(*edx_4) << 8
        
        if (ecx_3 != 0)
            ebp = var_14
            
            if (eax_8 + 1 u< *(*arg2 + 4) - **arg2)
                edx_6 |= zx.d(edx_4[1])
        
        arg2[1] = eax_1 + 1 + arg4
        edx_2 = edx_6 u>> (8 - var_8_1) u>> (8 - arg4.b) & ((1 << arg4.b) - 1)
    
    char ecx_10 = arg4.b
    *arg3 += (((ebp - 1) << ecx_10) + edx_2 + 1) * ((eax_5 << 1) + 0xffffffff)
    int32_t edx_10 = *arg3
    
    if (edx_10 s< 0xfffffff0 << ecx_10)
        *arg3 = (0x20 << ecx_10) + edx_10
        int32_t eax_23
        eax_23.b = 1
        return eax_23
    
    if (edx_10 s> (0x10 << ecx_10) - 1)
        *arg3 = edx_10 - (0x20 << ecx_10)

uint32_t eax
eax.b = 1
return eax
