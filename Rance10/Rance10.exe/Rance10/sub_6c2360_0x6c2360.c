// 函数: sub_6c2360
// 地址: 0x6c2360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg1
int32_t edi = 0xffffffff
int32_t* i_1 = i
int32_t eax = i[0x72]
int64_t var_3c = 0
void* var_34
int32_t eax_1
int32_t edx_1
eax_1, edx_1 = sub_6c1ab0(eax, &var_34, arg1, 0xffffffff, 0xffffffff)
int32_t result

if (edx_1 s< 0 || (edx_1 s<= 0 && eax_1 u< 0))
    result = 0
else
    int32_t ebx_1 = 0
    result = 0
    
    while (true)
        void* edx_2 = var_34
        
        if ((*(edx_2 + 5) & 2) != 0)
            break
        
        uint32_t eax_4 = zx.d(*(edx_2 + 0xe))
        
        if ((((zx.d(*(edx_2 + 0x11)) << 8 | zx.d(*(edx_2 + 0x10))) << 8 | zx.d(*(edx_2 + 0xf))) << 8
                | eax_4) == eax)
            int32_t eax_5 = sub_6b7dc0(&i[0x1e], &var_34)
            
            while (i != 0xffffff88)
                if (i[0x1e] == 0)
                    break
                
                void var_24
                eax_5 = sub_6b8190(eax_5, &var_24, &i[0x1e], 1)
                
                if (eax_5 == 0)
                    break
                
                if (eax_5 s> 0)
                    eax_5 = sub_6c1950(arg2, &var_24)
                    int32_t ecx_10 = eax_5
                    
                    if (edi != 0xffffffff)
                        int32_t edx_6
                        edx_6:eax_5 = sx.q((ecx_10 + edi) s>> 2)
                        int32_t result_1 = result
                        result += eax_5
                        ebx_1 = adc.d(ebx_1, edx_6, result_1 + eax_5 u< result_1)
                    
                    edi = ecx_10
            
            int32_t eax_8
            int32_t edx_7
            eax_8, edx_7 = sub_6b78e0(&var_34)
            eax_4 = eax_8 & edx_7
            
            if (eax_4 != 0xffffffff)
                int32_t eax_10
                int32_t edx_10
                eax_10, edx_10 = sub_6b78e0(&var_34)
                bool c_2 = eax_10 u< result
                result = eax_10 - result
                ebx_1 = sbb.d(edx_10, ebx_1, c_2)
                break
            
            i = i_1
        
        int32_t eax_9
        int32_t edx_9
        eax_9, edx_9 = sub_6c1ab0(eax_4, &var_34, i, 0xffffffff, 0xffffffff)
        
        if (edx_9 s< 0)
            break
        
        if (edx_9 s<= 0)
            if (eax_9 u< 0)
                break
    
    if (ebx_1 s<= 0 && (ebx_1 s< 0 || result u< 0))
        int64_t var_3c_1 = 0
        result = 0

return result
