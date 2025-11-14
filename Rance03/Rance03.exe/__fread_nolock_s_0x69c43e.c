// 函数: __fread_nolock_s
// 地址: 0x69c43e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_8 = arg1
void* var_c = arg2

if (arg3 != 0 && arg4 != 0)
    if (arg1 == 0)
        *__errno() = 0x16
    else if (arg5 == 0 || arg4 u> divu.dp.d(0:0xffffffff, arg3))
        if (arg2 != 0xffffffff)
            _memset(arg1, 0, arg2)
        
        if (arg5 != 0 && arg4 u<= divu.dp.d(0:0xffffffff, arg3))
            goto label_69c4b7
        
        *__errno() = 0x16
    else
    label_69c4b7:
        void* edi_2 = arg3 * arg4
        void* ebx_2 = edi_2
        int32_t ecx_1
        
        if ((arg5[3] & 0x10c) == 0)
            ecx_1 = 0x1000
        else
            ecx_1 = arg5[6]
        
        int32_t var_10_1 = ecx_1
        
        if (edi_2 == 0)
            return arg4
        
        while (true)
            void* var_14_1
            void* eax_7
            
            if ((arg5[3] & 0x10c) != 0)
                eax_7 = arg5[1]
                var_14_1 = eax_7
            
            void* eax_8
            
            if ((arg5[3] & 0x10c) != 0 && eax_7 != 0)
                if (eax_7 s< 0)
                label_69c5eb:
                    arg5[3] |= 0x20
                    return divu.dp.d(0:(edi_2 - ebx_2), arg3)
                
                if (ebx_2 u< eax_7)
                    eax_7 = ebx_2
                    var_14_1 = ebx_2
                
                if (eax_7 u> var_c)
                    break
                
                _memcpy_s(var_8, var_c, *arg5, eax_7)
                eax_8 = var_14_1
                arg5[1] -= eax_8
                ebx_2 -= eax_8
                *arg5 += eax_8
                goto label_69c583
            
            if (ebx_2 u< ecx_1)
                uint32_t eax_14 = sub_6a7222(arg5)
                
                if (eax_14 == 0xffffffff)
                    return divu.dp.d(0:(edi_2 - ebx_2), arg3)
                
                if (var_c == 0)
                    break
                
                char* edx_7 = var_8
                *edx_7 = eax_14.b
                ebx_2 -= 1
                var_8 = &edx_7[1]
                var_c -= 1
                ecx_1 = arg5[6]
                var_10_1 = ecx_1
            else
                uint32_t eax_12
                
                if (ecx_1 == 0)
                    eax_12 = 0x7fffffff
                    
                    if (ebx_2 u<= 0x7fffffff)
                        eax_12 = ebx_2
                else
                    int32_t edx_5 = 0
                    void* eax_10
                    uint32_t edx_6
                    
                    if (ebx_2 u<= 0x7fffffff)
                        edx_6 = modu.dp.d(edx_5:ebx_2, ecx_1)
                        eax_10 = ebx_2
                    else
                        edx_6 = modu.dp.d(edx_5:0x7fffffff, ecx_1)
                        eax_10 = 0x7fffffff
                    
                    eax_12 = eax_10 - edx_6
                
                if (eax_12 u> var_c)
                    break
                
                eax_8 = sub_6a4cda(__fileno(arg5), var_8, eax_12)
                
                if (eax_8 == 0)
                    arg5[3] |= 0x10
                    return divu.dp.d(0:(edi_2 - ebx_2), arg3)
                
                if (eax_8 == 0xffffffff)
                    goto label_69c5eb
                
                ebx_2 -= eax_8
            label_69c583:
                var_8 += eax_8
                var_c -= eax_8
                ecx_1 = var_10_1
            
            if (ebx_2 == 0)
                return arg4
        
        if (arg2 != 0xffffffff)
            _memset(arg1, 0, arg2)
        
        *__errno() = 0x22
    
    __invalid_parameter_noinfo()

return 0
