// 函数: sub_6a7ba0
// 地址: 0x6a7ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 s<= 0 || arg4 s< 0 || (arg2 == 0 && arg4 s> 0))
    sub_6a7500(arg3, "internal error: array realloc")
    noreturn

if (arg5 s<= 0x7fffffff - arg4)
    int32_t ebx_1 = arg4 + arg5
    
    if (ebx_1 u<= divu.dp.d(0:0xffffffff, arg6))
        int32_t ebx_2 = ebx_1 * arg6
        
        if (ebx_2 - 1 u<= 0xfffffffe)
            int32_t eax_5
            
            if (arg3 != 0)
                eax_5 = *(arg3 + 0x274)
            
            char* result
            
            if (arg3 == 0 || eax_5 == 0)
                int32_t var_1c_2 = ebx_2
                result = sub_705e22()
            else
                result = eax_5(arg3, ebx_2)
            
            if (result != 0)
                if (arg4 s> 0)
                    sub_700660(result, arg2, arg4 * arg6)
                
                _memset(arg4 * arg6 + result, 0, arg5 * arg6)
                return result

return 0
