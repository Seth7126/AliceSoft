// 函数: sub_6b7ac0
// 地址: 0x6b7ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[6]

if (ecx - arg2 s<= arg1[7])
    if (ecx s> 0x7fffffff - arg2)
        sub_6b7a10(arg1)
        return 0xffffffff
    
    int32_t eax_4 = ecx + arg2
    int32_t edi_1 = eax_4 + 0x20
    
    if (eax_4 s>= 0x7fffffdf)
        edi_1 = eax_4
    
    int32_t var_c_1 = edi_1 << 2
    int32_t var_10_1 = arg1[4]
    int32_t eax_6 = _realloc()
    
    if (eax_6 == 0)
        sub_6b7a10(arg1)
        return 0xffffffff
    
    arg1[4] = eax_6
    int32_t var_c_2 = edi_1 << 3
    int32_t var_10_2 = arg1[5]
    int32_t eax_8 = _realloc()
    
    if (eax_8 == 0)
        sub_6b7a10(arg1)
        return 0xffffffff
    
    arg1[5] = eax_8
    arg1[6] = edi_1

return 0
