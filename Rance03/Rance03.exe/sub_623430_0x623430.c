// 函数: sub_623430
// 地址: 0x623430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx_1 = *arg1 - 1
int32_t* result = arg1[7]
void* eax_2 = arg1[1] - 5 + ebx_1
uint8_t* esi_1 = arg1[3] - 1
void* eax_3 = arg1[4]
uint32_t edi_1 = result[0xe]
void* eax_5 = eax_3 - 0x101 + esi_1
int32_t eax_6 = result[0xa]
void* ebp_2 = eax_3 - arg2 + esi_1
int32_t edx = result[0x13]
int32_t eax_7 = result[0xb]
uint32_t i_10 = result[0xc]
int32_t eax_8 = result[0xd]
int32_t eax_9 = result[0x14]
int32_t ebp_3 = result[0xf]
int32_t var_30_1 = (1 << (result[0x15]).b) - 1
int32_t eax_12 = (1 << result[0x16].b) - 1
void* var_40 = ebx_1
int32_t var_10 = edx
void* edx_14

while (true)
    if (ebp_3 u< 0xf)
        var_40 = ebx_1 + 2
        edi_1 = edi_1 + (zx.d(*(ebx_1 + 1)) << ebp_3.b) + (zx.d(*(ebx_1 + 2)) << (ebp_3.b + 8))
        ebp_3 += 0x10
    
    int32_t ebx_3 = *(edx + ((var_30_1 & edi_1) << 2))
    uint32_t ecx_5 = zx.d((ebx_3 u>> 8).b)
    edi_1 u>>= ecx_5.b
    ebp_3 -= ecx_5
    uint32_t edx_1 = zx.d(ebx_3.b)
    
    if (ebx_3.b == 0)
    label_623549:
        esi_1 = &esi_1[1]
        *esi_1 = (ebx_3 u>> 0x10).b
    else
        while (true)
            int32_t* result_1
            
            if ((edx_1.b & 0x10) != 0)
                uint32_t i = ebx_3 u>> 0x10
                int32_t edx_2 = edx_1 & 0xf
                
                if (edx_2 != 0)
                    if (ebp_3 u< edx_2)
                        void* eax_28 = var_40 + 1
                        var_40 = eax_28
                        edi_1 += zx.d(*eax_28) << ebp_3.b
                        ebp_3 += 8
                    
                    char ecx_10 = edx_2.b
                    int32_t eax_33 = ((1 << ecx_10) - 1) & edi_1
                    edi_1 u>>= ecx_10
                    i += eax_33
                    ebp_3 -= edx_2
                
                if (ebp_3 u< 0xf)
                    void* edx_4 = var_40 + 2
                    uint32_t edi_3 = edi_1 + (zx.d(*(var_40 + 1)) << ebp_3.b)
                    var_40 = edx_4
                    edi_1 = edi_3 + (zx.d(*edx_4) << (ebp_3.b + 8))
                    ebp_3 += 0x10
                
                int32_t edx_5 = *(eax_9 + ((eax_12 & edi_1) << 2))
                uint32_t ecx_14 = zx.d((edx_5 u>> 8).b)
                int32_t var_3c_1 = edx_5
                ebp_3 -= ecx_14
                uint32_t edx_6 = zx.d(edx_5.b)
                edi_1 u>>= ecx_14.b
                
                if ((edx_6.b & 0x10) != 0)
                label_623615:
                    int32_t edx_10 = edx_6 & 0xf
                    
                    if (ebp_3 u< edx_10)
                        char ecx_18 = ebp_3.b
                        void* eax_49 = var_40 + 1
                        ebp_3 += 8
                        var_40 = eax_49
                        edi_1 += zx.d(*eax_49) << ecx_18
                        
                        if (ebp_3 u< edx_10)
                            void* eax_53 = var_40 + 1
                            var_40 = eax_53
                            edi_1 += zx.d(*eax_53) << ebp_3.b
                            ebp_3 += 8
                    
                    char ecx_20 = edx_10.b
                    ebp_3 -= edx_10
                    int32_t eax_58 = ((1 << ecx_20) - 1) & edi_1
                    edi_1 u>>= ecx_20
                    int32_t var_3c_3 = (var_3c_1 u>> 0x10) + eax_58
                    void* eax_60 = esi_1 - ebp_2
                    
                    if (var_3c_3 u<= eax_60)
                        uint8_t* ecx_24 = esi_1 - var_3c_3
                        
                        do
                            char eax_68 = ecx_24[1]
                            ecx_24 = &ecx_24[3]
                            esi_1[1] = eax_68
                            i -= 3
                            esi_1[2] = ecx_24[0xffffffff]
                            esi_1 = &esi_1[3]
                            *esi_1 = *ecx_24
                        while (i u> 2)
                        
                        if (i != 0)
                            esi_1 = &esi_1[1]
                            *esi_1 = ecx_24[1]
                            
                            if (i u> 1)
                                esi_1 = &esi_1[1]
                                *esi_1 = ecx_24[2]
                        
                        break
                    
                    void* i_6 = var_3c_3 - eax_60
                    
                    if (i_6 u> eax_7)
                        result_1 = result
                    
                    if (i_6 u<= eax_7 || result_1[0x6f0] == 0)
                        uint32_t eax_63
                        void* edi_6
                        
                        if (i_10 == 0)
                            edi_6 = eax_8 - 1 + eax_6 - i_6
                            
                            if (i_6 u< i)
                                i -= i_6
                                void* i_1
                                
                                do
                                    eax_63.b = *(edi_6 + 1)
                                    edi_6 += 1
                                    esi_1 = &esi_1[1]
                                    *esi_1 = eax_63.b
                                    i_1 = i_6
                                    i_6 -= 1
                                while (i_1 != 1)
                                edi_6 = esi_1 - var_3c_3
                        else if (i_10 u>= i_6)
                            edi_6 = eax_8 - 1 + i_10 - i_6
                            
                            if (i_6 u< i)
                                i -= i_6
                                void* i_2
                                
                                do
                                    eax_63.b = *(edi_6 + 1)
                                    edi_6 += 1
                                    esi_1 = &esi_1[1]
                                    *esi_1 = eax_63.b
                                    i_2 = i_6
                                    i_6 -= 1
                                while (i_2 != 1)
                                edi_6 = esi_1 - var_3c_3
                        else
                            void* i_7 = i_6 - i_10
                            edi_6 = eax_8 - 1 + i_10 - i_6 + eax_6
                            
                            if (i_7 u< i)
                                i -= i_7
                                int32_t edi_7 = edi_6 - esi_1
                                void* i_3
                                
                                do
                                    eax_63.b = esi_1[edi_7 + 1]
                                    esi_1 = &esi_1[1]
                                    *esi_1 = eax_63.b
                                    i_3 = i_7
                                    i_7 -= 1
                                while (i_3 != 1)
                                edi_6 = eax_8 - 1
                                
                                if (i_10 u< i)
                                    uint32_t i_8 = i_10
                                    i -= i_10
                                    uint32_t i_4
                                    
                                    do
                                        eax_63.b = *(edi_6 + 1)
                                        edi_6 += 1
                                        esi_1 = &esi_1[1]
                                        *esi_1 = eax_63.b
                                        i_4 = i_8
                                        i_8 -= 1
                                    while (i_4 != 1)
                                    edi_6 = esi_1 - var_3c_3
                        
                        if (i u> 2)
                            int32_t i_9 = (i - 3) u/ 3 + 1
                            int32_t i_5
                            
                            do
                                i -= 3
                                esi_1[1] = *(edi_6 + 1)
                                char eax_67 = *(edi_6 + 2)
                                edi_6 += 3
                                esi_1[2] = eax_67
                                esi_1 = &esi_1[3]
                                *esi_1 = *edi_6
                                i_5 = i_9
                                i_9 -= 1
                            while (i_5 != 1)
                        
                        if (i == 0)
                            break
                        
                        eax_63.b = *(edi_6 + 1)
                        esi_1 = &esi_1[1]
                        *esi_1 = eax_63.b
                        
                        if (i u> 1)
                            eax_63.b = *(edi_6 + 2)
                            esi_1 = &esi_1[1]
                            *esi_1 = eax_63.b
                        
                        break
                    
                    arg1[6] = "invalid distance too far back"
                else
                    while ((edx_6.b & 0x40) == 0)
                        int32_t edx_9 =
                            *(eax_9 + (((((1 << edx_6.b) - 1) & edi_1) + (var_3c_1 u>> 0x10)) << 2))
                        uint32_t ecx_17 = zx.d((edx_9 u>> 8).b)
                        var_3c_1 = edx_9
                        ebp_3 -= ecx_17
                        edx_6 = zx.d(edx_9.b)
                        edi_1 u>>= ecx_17.b
                        
                        if ((edx_6.b & 0x10) != 0)
                            goto label_623615
                    
                    result_1 = result
                    arg1[6] = "invalid distance code"
                
                edx_14 = eax_5
                ebx_1 = var_40
            else if ((edx_1.b & 0x40) != 0)
                result_1 = result
                ebx_1 = var_40
                edx_14 = eax_5
                
                if ((edx_1.b & 0x20) != 0)
                    *result_1 = 0xb
                    goto label_62381d
                
                arg1[6] = "invalid literal/length code"
            else
                ebx_3 = *(var_10 + (((((1 << edx_1.b) - 1) & edi_1) + (ebx_3 u>> 0x10)) << 2))
                uint32_t ecx_8 = zx.d((ebx_3 u>> 8).b)
                edi_1 u>>= ecx_8.b
                ebp_3 -= ecx_8
                edx_1 = zx.d(ebx_3.b)
                
                if (ebx_3.b == 0)
                    goto label_623549
                
                continue
            
            *result_1 = 0x1d
            goto label_62381d
    
    ebx_1 = var_40
    edx_14 = eax_5
    
    if (ebx_1 u>= eax_2)
        break
    
    if (esi_1 u>= edx_14)
        break
    
    edx = var_10

label_62381d:
uint32_t eax_72 = ebp_3 u>> 3
void* ebx_7 = ebx_1 - eax_72
int32_t ebp_4 = ebp_3 - (eax_72 << 3)
*arg1 = ebx_7 + 1
arg1[3] = &esi_1[1]
arg1[1] = eax_2 - ebx_7 + 5
arg1[4] = edx_14 - esi_1 + 0x101
result[0xe] = edi_1 & ((1 << ebp_4.b) - 1)
result[0xf] = ebp_4
return result
