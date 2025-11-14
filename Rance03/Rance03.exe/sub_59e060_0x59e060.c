// 函数: sub_59e060
// 地址: 0x59e060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = *(arg1 + 4)
int32_t eax

if (edx != 0)
    eax = *(edx + 4)
else
    eax = 0xffffffff

void* ecx = *(arg2 + 4)
int32_t edi

if (ecx != 0)
    edi = *(ecx + 4)
else
    edi = 0xffffffff

if (eax s>= edi)
    int32_t edi_1
    
    if (edx != 0)
        edi_1 = *(edx + 4)
    else
        edi_1 = 0xffffffff
    
    int32_t* eax_1
    
    if (ecx != 0)
        eax_1 = *(ecx + 4)
    else
        eax_1 = 0xffffffff
    
    if (edi_1 s> eax_1)
        eax_1.b = 0
        return eax_1
    
    int32_t edi_2
    
    if (edx != 0)
        edi_2 = *(edx + 8)
    else
        edi_2 = 0xffffffff
    
    if (ecx != 0)
        eax = *(ecx + 8)
    else
        eax = 0xffffffff
    
    if (edi_2 s>= eax)
        int32_t edi_3
        
        if (edx != 0)
            edi_3 = *(edx + 8)
        else
            edi_3 = 0xffffffff
        
        if (ecx != 0)
            eax_1 = *(ecx + 8)
        else
            eax_1 = 0xffffffff
        
        if (edi_3 s> eax_1)
            eax_1.b = 0
            return eax_1
        
        if (edx != 0)
            eax = *(edx + 0x1c)
        else
            eax = 0
        
        if (ecx == 0 || eax u>= *(ecx + 0x1c))
            int32_t edi_4
            
            if (edx != 0)
                edi_4 = *(edx + 0x1c)
            else
                edi_4 = 0
            
            if (ecx != 0)
                eax_1 = *(ecx + 0x1c)
            else
                eax_1 = nullptr
            
            if (edi_4 u> eax_1)
                eax_1.b = 0
                return eax_1
            
            int32_t ebx
            
            if (edx != 0)
                ebx.b = *(edx + 0x38)
            else
                ebx.b = 0
            
            if (ecx != 0)
                eax_1.b = *(ecx + 0x38)
            
            if (ecx == 0 || ebx.b u>= eax_1.b)
                if (edx != 0)
                    ebx.b = *(edx + 0x38)
                else
                    ebx.b = 0
                
                if (ecx != 0)
                    eax_1.b = *(ecx + 0x38)
                else
                    eax_1.b = 0
                
                if (ebx.b u> eax_1.b)
                    eax_1.b = 0
                    return eax_1
                
                int32_t xmm0_1 = (zx.o(0)).d
                int32_t xmm2_1
                
                if (edx != 0)
                    xmm2_1 = *(edx + 0x20)
                else
                    xmm2_1 = (zx.o(0)).d
                
                int32_t xmm1_1
                
                if (ecx != 0)
                    xmm1_1 = *(ecx + 0x20)
                else
                    xmm1_1 = (zx.o(0)).d
                
                if (not(xmm1_1 f> xmm2_1))
                    int32_t xmm2_2
                    
                    if (edx != 0)
                        xmm2_2 = *(edx + 0x20)
                    else
                        xmm2_2 = (zx.o(0)).d
                    
                    int32_t xmm1_2
                    
                    if (ecx != 0)
                        xmm1_2 = *(ecx + 0x20)
                    else
                        xmm1_2 = (zx.o(0)).d
                    
                    if (xmm2_2 f> xmm1_2)
                        eax_1.b = 0
                        return eax_1
                    
                    int32_t xmm2_3
                    
                    if (edx != 0)
                        xmm2_3 = *(edx + 0x24)
                    else
                        xmm2_3 = (zx.o(0)).d
                    
                    int32_t xmm1_3
                    
                    if (ecx != 0)
                        xmm1_3 = *(ecx + 0x24)
                    else
                        xmm1_3 = (zx.o(0)).d
                    
                    if (not(xmm1_3 f> xmm2_3))
                        int32_t xmm2_4
                        
                        if (edx != 0)
                            xmm2_4 = *(edx + 0x24)
                        else
                            xmm2_4 = (zx.o(0)).d
                        
                        int32_t xmm1_4
                        
                        if (ecx != 0)
                            xmm1_4 = *(ecx + 0x24)
                        else
                            xmm1_4 = (zx.o(0)).d
                        
                        if (xmm2_4 f> xmm1_4)
                            eax_1.b = 0
                            return eax_1
                        
                        int32_t xmm2_5
                        
                        if (edx != 0)
                            xmm2_5 = *(edx + 0x28)
                        else
                            xmm2_5 = (zx.o(0)).d
                        
                        int32_t xmm1_5
                        
                        if (ecx != 0)
                            xmm1_5 = *(ecx + 0x28)
                        else
                            xmm1_5 = (zx.o(0)).d
                        
                        if (not(xmm1_5 f> xmm2_5))
                            int32_t xmm2_6
                            
                            if (edx != 0)
                                xmm2_6 = *(edx + 0x28)
                            else
                                xmm2_6 = (zx.o(0)).d
                            
                            int32_t xmm1_6
                            
                            if (ecx != 0)
                                xmm1_6 = *(ecx + 0x28)
                            else
                                xmm1_6 = (zx.o(0)).d
                            
                            if (xmm2_6 f> xmm1_6)
                                eax_1.b = 0
                                return eax_1
                            
                            int32_t xmm2_7
                            
                            if (edx != 0)
                                xmm2_7 = *(edx + 0x2c)
                            else
                                xmm2_7 = (zx.o(0)).d
                            
                            int32_t xmm1_7
                            
                            if (ecx != 0)
                                xmm1_7 = *(ecx + 0x2c)
                            else
                                xmm1_7 = (zx.o(0)).d
                            
                            if (not(xmm1_7 f> xmm2_7))
                                int32_t xmm1_8
                                
                                if (edx != 0)
                                    xmm1_8 = *(edx + 0x2c)
                                else
                                    xmm1_8 = (zx.o(0)).d
                                
                                if (ecx != 0)
                                    xmm0_1 = *(ecx + 0x2c)
                                
                                if (xmm1_8 f> xmm0_1)
                                    eax_1.b = 0
                                    return eax_1
                                
                                int32_t* eax_2 = sub_59e360(arg1)
                                
                                if (not(*sub_59e360(arg2) f> *eax_2))
                                    int32_t* eax_3 = sub_59e360(arg1)
                                    eax_1 = sub_59e360(arg2)
                                    
                                    if (*eax_3 f> *eax_1)
                                        eax_1.b = 0
                                        return eax_1
                                    
                                    int32_t* edx_3 = sub_59e360(arg1) + 4
                                    
                                    if (not(sub_59e360(arg2)[1] f> *edx_3))
                                        int32_t* edx_4 = sub_59e360(arg1) + 4
                                        eax_1 = sub_59e360(arg2)
                                        
                                        if (*edx_4 f> eax_1[1])
                                            eax_1.b = 0
                                            return eax_1
                                        
                                        if ((*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
                                                u>= (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
                                            if ((*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
                                                    u<= (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
                                                int32_t i = 0
                                                
                                                if (((*(arg1 + 0xc) - *(arg1 + 8)) & 0xfffffffc)
                                                        s> 0)
                                                    int32_t ebx_1 = *(arg1 + 8)
                                                    
                                                    do
                                                        eax_1 = *(ebx_1 + (i << 2))
                                                        int32_t edx_5 = *(*(arg2 + 8) + (i << 2))
                                                        
                                                        if (eax_1 s< edx_5)
                                                            goto label_59e356
                                                        
                                                        if (eax_1 s> edx_5)
                                                            break
                                                        
                                                        i += 1
                                                    while (i s< (*(arg1 + 0xc) - ebx_1) s>> 2)
                                            
                                            eax_1.b = 0
                                            return eax_1
            
        label_59e356:
            eax_1.b = 1
            return eax_1

eax.b = 1
return eax
