// 函数: sub_6b7a60
// 地址: 0x6b7a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]

if (ecx - arg2 s<= arg1[2])
    int32_t eax_5
    int32_t edi_1
    
    if (ecx s<= 0x7fffffff - arg2)
        int32_t eax_4 = ecx + arg2
        edi_1 = eax_4 + 0x400
        
        if (eax_4 s>= 0x7ffffbff)
            edi_1 = eax_4
        
        int32_t var_c_1 = edi_1
        int32_t var_10_1 = *arg1
        eax_5 = _realloc()
    
    if (ecx s> 0x7fffffff - arg2 || eax_5 == 0)
        sub_6b7a10(arg1)
        return 0xffffffff
    
    arg1[1] = edi_1
    *arg1 = eax_5

return 0
