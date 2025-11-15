// 函数: sub_62c7a0
// 地址: 0x62c7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
*arg5 = arg3
*arg8 = arg6
int32_t result
result.b = *arg5 != arg4

if (*arg5 != arg4)
    while (true)
        int16_t* edx_1 = *arg8
        
        if (edx_1 == arg7)
            break
        
        char* ecx = *arg5
        void* ecx_1 = __Mbrtowc(edx_1, ecx, arg4 - ecx, arg2, arg1 + 8)
        
        if (ecx_1 == 0xfffffffe)
            *arg5 = arg4
            break
        
        if (ecx_1 == 0xffffffff)
            return 2
        
        if (ecx_1 == 0 && **arg8 == ecx_1.w)
            char* eax_8 = *arg5
            
            do
                ecx_1.b = *eax_8
                eax_8 = &eax_8[1]
            while (ecx_1.b != 0)
            
            ecx_1 = eax_8 - &eax_8[1] + 1
        
        void* eax_10 = nullptr
        
        if (ecx_1 != 0xfffffffd)
            eax_10 = ecx_1
        
        result = 0
        *arg5 += eax_10
        *arg8 += 2
        
        if (*arg5 == arg4)
            return 0

return result
