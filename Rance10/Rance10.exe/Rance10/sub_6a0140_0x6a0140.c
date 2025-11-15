// 函数: sub_6a0140
// 地址: 0x6a0140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1[7]
char* ebx = *arg1
void* eax_2 = arg1[1] - 5 + ebx
uint8_t* esi = arg1[3]
void* eax_3 = arg1[4]
uint32_t edi_1 = *(result + 0x3c)
void* eax_5 = eax_3 - 0x101 + esi
int32_t eax_6 = *(result + 0x2c)
void* ebp_2 = eax_3 - arg2 + esi
int32_t edx = *(result + 0x50)
int32_t eax_7 = *(result + 0x30)
uint32_t i_10 = *(result + 0x34)
void* eax_8 = *(result + 0x38)
int32_t eax_9 = *(result + 0x54)
int32_t ebp_3 = *(result + 0x40)
int32_t var_30_1 = (1 << (*(result + 0x58)).b) - 1
int32_t eax_12 = (1 << (*(result + 0x5c)).b) - 1
void* var_40 = ebx
int32_t var_10 = edx
void* edx_14

while (true)
    if (ebp_3 u< 0xf)
        edi_1 = edi_1 + (zx.d(*ebx) << ebp_3.b) + (zx.d(ebx[1]) << (ebp_3.b + 8))
        var_40 = &ebx[2]
        ebp_3 += 0x10
    
    int32_t ebx_2 = *(edx + ((var_30_1 & edi_1) << 2))
    uint32_t ecx_4 = zx.d((ebx_2 u>> 8).b)
    edi_1 u>>= ecx_4.b
    ebp_3 -= ecx_4
    uint32_t edx_1 = zx.d(ebx_2.b)
    
    if (ebx_2.b == 0)
    label_6a025c:
        *esi = (ebx_2 u>> 0x10).b
        esi = &esi[1]
    else
        while (true)
            void* result_1
            
            if ((edx_1.b & 0x10) != 0)
                uint32_t i = ebx_2 u>> 0x10
                int32_t edx_2 = edx_1 & 0xf
                
                if (edx_2 != 0)
                    if (ebp_3 u< edx_2)
                        void* eax_27 = var_40
                        var_40 += 1
                        edi_1 += zx.d(*eax_27) << ebp_3.b
                        ebp_3 += 8
                    
                    char ecx_9 = edx_2.b
                    int32_t eax_32 = ((1 << ecx_9) - 1) & edi_1
                    edi_1 u>>= ecx_9
                    i += eax_32
                    ebp_3 -= edx_2
                
                if (ebp_3 u< 0xf)
                    edi_1 =
                        edi_1 + (zx.d(*var_40) << ebp_3.b) + (zx.d(*(var_40 + 1)) << (ebp_3.b + 8))
                    var_40 += 2
                    ebp_3 += 0x10
                
                int32_t edx_5 = *(eax_9 + ((eax_12 & edi_1) << 2))
                uint32_t ecx_13 = zx.d((edx_5 u>> 8).b)
                int32_t var_3c_1 = edx_5
                ebp_3 -= ecx_13
                uint32_t edx_6 = zx.d(edx_5.b)
                edi_1 u>>= ecx_13.b
                
                if ((edx_6.b & 0x10) != 0)
                label_6a0324:
                    int32_t edx_10 = edx_6 & 0xf
                    
                    if (ebp_3 u< edx_10)
                        char ecx_17 = ebp_3.b
                        ebp_3 += 8
                        edi_1 += zx.d(*var_40) << ecx_17
                        void* eax_51 = var_40 + 1
                        var_40 = eax_51
                        
                        if (ebp_3 u< edx_10)
                            var_40 += 1
                            edi_1 += zx.d(*eax_51) << ebp_3.b
                            ebp_3 += 8
                    
                    char ecx_19 = edx_10.b
                    ebp_3 -= edx_10
                    int32_t eax_56 = ((1 << ecx_19) - 1) & edi_1
                    edi_1 u>>= ecx_19
                    int32_t var_3c_3 = (var_3c_1 u>> 0x10) + eax_56
                    void* eax_58 = esi - ebp_2
                    
                    if (var_3c_3 u<= eax_58)
                        uint8_t* ecx_23 = esi - var_3c_3
                        
                        do
                            uint8_t eax_63 = *ecx_23
                            ecx_23 = &ecx_23[3]
                            *esi = eax_63
                            i -= 3
                            esi[1] = ecx_23[0xfffffffe]
                            esi[2] = ecx_23[0xffffffff]
                            esi = &esi[3]
                        while (i u> 2)
                        
                        if (i != 0)
                            *esi = *ecx_23
                            esi = &esi[1]
                            
                            if (i u> 1)
                                *esi = ecx_23[1]
                                esi = &esi[1]
                        
                        break
                    
                    void* i_6 = var_3c_3 - eax_58
                    
                    if (i_6 u> eax_7)
                        result_1 = result
                    
                    if (i_6 u<= eax_7 || *(result_1 + 0x1bc4) == 0)
                        void* edi_5 = eax_8 - i_6
                        uint32_t eax_59
                        void* edi_6
                        
                        if (i_10 != 0)
                            edi_6 = edi_5 + i_10
                            
                            if (i_10 u< i_6)
                                edi_6 += eax_6
                                void* i_7 = i_6 - i_10
                                
                                if (i_7 u< i)
                                    i -= i_7
                                    char* edi_7 = edi_6 - esi
                                    void* i_1
                                    
                                    do
                                        eax_59.b = *(edi_7 + esi)
                                        *esi = eax_59.b
                                        esi = &esi[1]
                                        i_1 = i_7
                                        i_7 -= 1
                                    while (i_1 != 1)
                                    edi_6 = eax_8
                                    
                                    if (i_10 u< i)
                                        uint32_t i_8 = i_10
                                        i -= i_10
                                        uint32_t i_2
                                        
                                        do
                                            eax_59.b = *edi_6
                                            edi_6 += 1
                                            *esi = eax_59.b
                                            esi = &esi[1]
                                            i_2 = i_8
                                            i_8 -= 1
                                        while (i_2 != 1)
                                        edi_6 = esi - var_3c_3
                            else if (i_6 u< i)
                                i -= i_6
                                void* i_3
                                
                                do
                                    eax_59.b = *edi_6
                                    edi_6 += 1
                                    *esi = eax_59.b
                                    esi = &esi[1]
                                    i_3 = i_6
                                    i_6 -= 1
                                while (i_3 != 1)
                                edi_6 = esi - var_3c_3
                        else
                            edi_6 = edi_5 + eax_6
                            
                            if (i_6 u< i)
                                i -= i_6
                                void* i_4
                                
                                do
                                    eax_59.b = *edi_6
                                    edi_6 += 1
                                    *esi = eax_59.b
                                    esi = &esi[1]
                                    i_4 = i_6
                                    i_6 -= 1
                                while (i_4 != 1)
                                edi_6 = esi - var_3c_3
                        
                        if (i u> 2)
                            int32_t i_9 = (i - 3) u/ 3 + 1
                            int32_t i_5
                            
                            do
                                i -= 3
                                *esi = *edi_6
                                esi[1] = *(edi_6 + 1)
                                eax_59 = zx.d(*(edi_6 + 2))
                                edi_6 += 3
                                esi[2] = eax_59.b
                                esi = &esi[3]
                                i_5 = i_9
                                i_9 -= 1
                            while (i_5 != 1)
                        
                        if (i != 0)
                            eax_59.b = *edi_6
                            *esi = eax_59.b
                            esi = &esi[1]
                            
                            if (i u> 1)
                                eax_59.b = *(edi_6 + 1)
                                *esi = eax_59.b
                                esi = &esi[1]
                        
                        break
                    
                    arg1[6] = "invalid distance too far back"
                else
                    while ((edx_6.b & 0x40) == 0)
                        int32_t edx_9 =
                            *(eax_9 + (((((1 << edx_6.b) - 1) & edi_1) + (var_3c_1 u>> 0x10)) << 2))
                        uint32_t ecx_16 = zx.d((edx_9 u>> 8).b)
                        var_3c_1 = edx_9
                        ebp_3 -= ecx_16
                        edx_6 = zx.d(edx_9.b)
                        edi_1 u>>= ecx_16.b
                        
                        if ((edx_6.b & 0x10) != 0)
                            goto label_6a0324
                    
                    result_1 = result
                    arg1[6] = "invalid distance code"
                
                edx_14 = eax_5
                ebx = var_40
            else if ((edx_1.b & 0x40) != 0)
                result_1 = result
                ebx = var_40
                edx_14 = eax_5
                
                if ((edx_1.b & 0x20) != 0)
                    *(result_1 + 4) = 0x3f3f
                    goto label_6a051b
                
                arg1[6] = "invalid literal/length code"
            else
                ebx_2 = *(var_10 + (((((1 << edx_1.b) - 1) & edi_1) + (ebx_2 u>> 0x10)) << 2))
                uint32_t ecx_7 = zx.d((ebx_2 u>> 8).b)
                edi_1 u>>= ecx_7.b
                ebp_3 -= ecx_7
                edx_1 = zx.d(ebx_2.b)
                
                if (ebx_2.b == 0)
                    goto label_6a025c
                
                continue
            
            *(result_1 + 4) = 0x3f51
            goto label_6a051b
    
    ebx = var_40
    edx_14 = eax_5
    
    if (ebx u>= eax_2)
        break
    
    if (esi u>= edx_14)
        break
    
    edx = var_10

label_6a051b:
uint32_t eax_67 = ebp_3 u>> 3
void* ebx_5 = ebx - eax_67
int32_t ebp_4 = ebp_3 - (eax_67 << 3)
void** ecx_28 = arg1
ecx_28[1] = eax_2 - ebx_5 + 5
*ecx_28 = ebx_5
ecx_28[3] = esi
ecx_28[4] = edx_14 - esi + 0x101
*(result + 0x3c) = edi_1 & ((1 << ebp_4.b) - 1)
*(result + 0x40) = ebp_4
return result
