// 函数: sub_6a3f90
// 地址: 0x6a3f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0)
    if (arg2 u>= divu.dp.d(0:0xffffffff, arg3))
        sub_6a7530(arg1, "Potential overflow in png_zalloc()")
        return 0
    
    int32_t ecx_3 = arg2 * arg3
    
    if (ecx_3 != 0)
        int32_t eax_4 = *(arg1 + 0x274)
        int32_t result
        
        if (eax_4 == 0)
            result = sub_705e22()
        else
            result = eax_4(arg1, ecx_3)
        
        if (result != 0)
            return result
    
    sub_6a7530(arg1, "Out of memory")

return 0
