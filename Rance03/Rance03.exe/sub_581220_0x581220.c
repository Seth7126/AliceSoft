// 函数: sub_581220
// 地址: 0x581220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_8 = arg3
int32_t i = (arg2 - arg3) s>> 2

if (i s> 0)
    void* ebp_1 = *arg4
    int32_t ebx_1 = *(ebp_1 + 0x1c)
    
    do
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx) s>> 1
        int32_t* eax_4 = arg3 + (i_1 << 2)
        void* eax_5 = *eax_4
        int32_t edi_1 = *(eax_5 + 0x1c)
        
        if (ebx_1 s< edi_1)
            i = i_1
        else if (ebx_1 s> edi_1)
        label_581285:
            arg3 = &eax_4[1]
            var_8 = arg3
            i += 0xffffffff - i_1
        else
            int32_t ecx = *(ebp_1 + 0x20)
            int32_t edi_2 = *(eax_5 + 0x20)
            
            if (ecx s< edi_2)
                arg3 = var_8
                i = i_1
            else
                if (ecx s> edi_2)
                    goto label_581285
                
                ebx_1.b = *(eax_5 + 0x73)
                ecx.b = *(ebp_1 + 0x73)
                bool cond:2_1 = ecx.b u< ebx_1.b
                bool cond:3_1 = ecx.b u> ebx_1.b
                ebx_1 = *(ebp_1 + 0x1c)
                
                if (cond:2_1)
                    arg3 = var_8
                    i = i_1
                else
                    if (cond:3_1)
                        goto label_581285
                    
                    eax_5.b = *(eax_5 + 0x26)
                    
                    if (*(ebp_1 + 0x26) u>= eax_5.b)
                        goto label_581285
                    
                    arg3 = var_8
                    i = i_1
    while (i s> 0)

return arg3
