// 函数: sub_5bfc40
// 地址: 0x5bfc40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg3
int32_t i = (arg2 - arg3) s>> 2

if (i s> 0)
    void* ebp_1 = *arg4
    int32_t ebx_1 = *(ebp_1 + 0x18)
    
    do
        int32_t eax_2
        int32_t edx
        edx:eax_2 = sx.q(i)
        int32_t i_1 = (eax_2 - edx) s>> 1
        int32_t* eax_4 = arg3 + (i_1 << 2)
        void* ecx = *eax_4
        int32_t eax_5 = *(ecx + 0x18)
        
        if (eax_5 s< ebx_1)
        label_5bfcad:
            arg3 = &eax_4[1]
            var_8 = arg3
            i += 0xffffffff - i_1
        else if (eax_5 s> ebx_1)
            arg3 = var_8
            i = i_1
        else
            int32_t eax_6 = *(ecx + 0x1c)
            int32_t edi_1 = *(ebp_1 + 0x1c)
            
            if (eax_6 s< edi_1)
                goto label_5bfcad
            
            if (eax_6 s> edi_1)
                arg3 = var_8
                i = i_1
            else
                ebx_1.b = *(ebp_1 + 0x75)
                eax_6.b = *(ecx + 0x75)
                bool cond:2_1 = eax_6.b u< ebx_1.b
                bool cond:3_1 = eax_6.b u> ebx_1.b
                ebx_1 = *(ebp_1 + 0x18)
                
                if (cond:2_1)
                    goto label_5bfcad
                
                if (cond:3_1)
                    arg3 = var_8
                    i = i_1
                else
                    ecx.b = *(ecx + 0x22)
                    
                    if (ecx.b u< *(ebp_1 + 0x22))
                        goto label_5bfcad
                    
                    arg3 = var_8
                    i = i_1
    while (i s> 0)

return arg3
