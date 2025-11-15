// 函数: sub_6b47e0
// 地址: 0x6b47e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3

if (arg3[2] s> 0)
    int32_t esi_1 = 0
    
    if (arg5 s> 0)
        while (true)
            int32_t eax = sub_6b4270(arg3, arg4)
            
            if (eax == 0xffffffff)
                return 0xffffffff
            
            int32_t ebx_1 = arg3[4] + ((*arg3 * eax) << 2)
            int32_t i = 0
            
            if (arg5 - esi_1 s< 4)
            label_6b486f:
                
                if (esi_1 s>= arg5)
                    break
                
                int32_t* edx_4 = ebx_1 + (i << 2)
                
                while (i s< *arg3)
                    i += 1
                    *(arg2 + (esi_1 << 2)) = *edx_4
                    edx_4 = &edx_4[1]
                    esi_1 += 1
                    
                    if (esi_1 s>= arg5)
                        return 0
            else
                void* edx_3 = arg2 + 8 + (esi_1 << 2)
                
                while (i s< *arg3)
                    *(edx_3 - 8) = *(ebx_1 + (i << 2))
                    
                    if (i + 1 s>= *arg3)
                        esi_1 += 1
                        break
                    
                    *(edx_3 - 4) = *(ebx_1 + ((i + 1) << 2))
                    
                    if (i + 2 s>= *arg3)
                        esi_1 += 2
                        break
                    
                    *edx_3 = *(ebx_1 + ((i + 2) << 2))
                    
                    if (i + 3 s>= *arg3)
                        esi_1 += 3
                        break
                    
                    esi_1 += 4
                    *(edx_3 + 4) = *(ebx_1 + ((i + 3) << 2))
                    i += 4
                    edx_3 += 0x10
                    
                    if (esi_1 s>= arg5 - 3)
                        goto label_6b486f
            
            if (esi_1 s>= arg5)
                return 0
else if (arg5 s> 0)
    __builtin_memset(arg2, 0, arg5 << 2)

return 0
