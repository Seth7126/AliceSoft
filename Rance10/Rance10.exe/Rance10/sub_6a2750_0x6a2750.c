// 函数: sub_6a2750
// 地址: 0x6a2750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg2[1]
int32_t* eax_1 = arg2[2]
int32_t i_6 = 0
void* j_1 = *arg2
int32_t edx = *eax_1
int32_t edx_1 = eax_1[1]
int32_t edx_2 = eax_1[2]
int32_t i_7 = eax_1[4]
__builtin_memset(arg1 + 0xb3c, 0, 0x20)
int32_t i_3 = 0
void* j = *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c)
*(j_1 + (j << 2) + 2) = 0
int32_t edx_4 = *(arg1 + 0x1454) + 1

if (edx_4 s< 0x23d)
    void* ecx_1 = arg1 + 0xb5c + (edx_4 << 2)
    void* var_10_1 = ecx_1
    int32_t i_4 = 0x23d - edx_4
    j = j_1
    int32_t i
    
    do
        int32_t edi_1 = *ecx_1
        int32_t ecx_2 = edi_1 << 2
        int32_t i_8 = zx.d(*(j_1 + (zx.d(*(ecx_2 + j + 2)) << 2) + 2)) + 1
        
        if (i_8 s> i_7)
            i_8 = i_7
            i_3 = i_6 + 1
        
        j = j_1
        *(ecx_2 + j + 2) = i_8.w
        i_6 = i_3
        
        if (edi_1 s<= eax)
            *(arg1 + (i_8 << 1) + 0xb3c) += 1
            int32_t edi_3
            
            if (edi_1 s< edx_2)
                edi_3 = 0
            else
                edi_3 = *(edx_1 + ((edi_1 - edx_2) << 2))
                j = j_1
            
            uint32_t eax_6 = zx.d(*(ecx_2 + j))
            i_6 = i_3
            *(arg1 + 0x16a8) += (edi_3 + i_8) * eax_6
            
            if (edx != 0)
                i_6 = i_3
                *(arg1 + 0x16ac) += (zx.d(*(ecx_2 + edx + 2)) + edi_3) * eax_6
            
            j = j_1
        
        ecx_1 = var_10_1 + 4
        var_10_1 = ecx_1
        i = i_4
        i_4 -= 1
    while (i != 1)
    int32_t i_1 = i_3
    
    if (i_1 != 0)
        int16_t* ebx_5 = (i_7 << 1) + 0xb3c + arg1
        int16_t* var_10_2 = ebx_5
        
        do
            int32_t ecx_7 = i_7 - 1
            j = arg1 + 0xb3c + (ecx_7 << 1)
            
            if (*(arg1 + 0xb3c + (ecx_7 << 1)) == 0)
                do
                    j -= 2
                    ecx_7 -= 1
                while (*j == 0)
            
            *(arg1 + (ecx_7 << 1) + 0xb3c) -= 1
            i_1 -= 2
            *(arg1 + (ecx_7 << 1) + 0xb3e) += 2
            *ebx_5 -= 1
        while (i_1 s> 0)
        
        int32_t i_5 = i_7
        int32_t edx_7 = 0x23d + 0
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                j = zx.d(*ebx_5)
                
                if (j != 0)
                    int32_t ecx_8 = eax
                    void* edi_5 = arg1 + 0xb5c + (edx_7 << 2)
                    
                    do
                        int32_t ebx_6 = *(edi_5 - 4)
                        edi_5 -= 4
                        edx_7 -= 1
                        
                        if (ebx_6 s<= ecx_8)
                            uint32_t ecx_10 = zx.d(*(j_1 + (ebx_6 << 2) + 2))
                            
                            if (ecx_10 != i_5)
                                *(arg1 + 0x16a8) += (i_5 - ecx_10) * zx.d(*(j_1 + (ebx_6 << 2)))
                                *(j_1 + (ebx_6 << 2) + 2) = i_5.w
                            
                            ecx_8 = eax
                            j -= 1
                    while (j != 0)
                    
                    ebx_5 = var_10_2
                
                ebx_5 -= 2
                var_10_2 = ebx_5
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)

return j
