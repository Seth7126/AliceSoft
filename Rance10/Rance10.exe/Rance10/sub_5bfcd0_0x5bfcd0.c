// 函数: sub_5bfcd0
// 地址: 0x5bfcd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg3
void* result = arg3
int32_t i = (arg2 - result) s>> 2

if (i s> 0)
    void* ebx_1 = *arg4
    int32_t ecx = *(ebx_1 + 0x18)
    
    do
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx) s>> 1
        int32_t* eax_5 = (i_1 << 2) + result
        void* edx_1 = *eax_5
        int32_t eax_6 = *(edx_1 + 0x18)
        
        if (ecx s< eax_6)
            i = i_1
        else if (ecx s> eax_6)
            result = &eax_5[1]
            i += 0xffffffff - i_1
        else
            int32_t eax_7 = *(ebx_1 + 0x1c)
            int32_t ecx_1 = *(edx_1 + 0x1c)
            
            if (eax_7 s< ecx_1)
                ecx = *(ebx_1 + 0x18)
                i = i_1
            else if (eax_7 s> ecx_1)
            label_5bfd44:
                ecx = *(ebx_1 + 0x18)
                result = &eax_5[1]
                i += 0xffffffff - i_1
            else
                eax_7.b = *(ebx_1 + 0x75)
                ecx_1.b = *(edx_1 + 0x75)
                
                if (eax_7.b u< ecx_1.b)
                    ecx = *(ebx_1 + 0x18)
                    i = i_1
                else
                    if (eax_7.b u> ecx_1.b)
                        goto label_5bfd44
                    
                    ecx_1.b = *(ebx_1 + 0x22)
                    ecx = *(ebx_1 + 0x18)
                    
                    if (ecx_1.b u< *(edx_1 + 0x22))
                        i = i_1
                    else
                        result = &eax_5[1]
                        i += 0xffffffff - i_1
    while (i s> 0)

return result
