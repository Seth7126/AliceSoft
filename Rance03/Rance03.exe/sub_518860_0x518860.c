// 函数: sub_518860
// 地址: 0x518860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0xac)
int32_t* esi = arg2
int32_t result = 0
int32_t result_1 = 0

while (esi != eax)
    void* edi_1 = *esi
    void* var_20_1 = edi_1 + 0x3c
    int32_t eax_3 = sub_516190(edi_1 + 0xb0)
    int32_t ebx_1 = *(edi_1 + 0x14)
    int32_t var_8
    int32_t* ecx = &var_8
    var_8 = eax_3
    
    if (result s>= eax_3)
        ecx = &result_1
    
    void* edi_2 = edi_1 + 4
    bool cond:1_1 = *(edi_2 + 0x14) u< 0x10
    result = *ecx
    result_1 = result
    
    if (not(cond:1_1))
        edi_2 = *edi_2
    
    int32_t eax_4 = 1
    
    if (ebx_1 u< 1)
        eax_4 = ebx_1
    
    if (eax_4 == 0)
    label_518922:
        
        if (ebx_1 u>= 1)
            int32_t eax_7
            eax_7.b = ebx_1 != 1
            
            if (eax_7 == 0)
                break
    else
        wchar32 const* const edx_1 = &(*U"\n\n\n\n\n\n")[4]
        int32_t i_1 = eax_4 - 4
        
        if (eax_4 u>= 4)
            int32_t i
            
            do
                if (*edi_2 != *edx_1)
                    goto label_5188e8
                
                edi_2 += 4
                edx_1 = &edx_1[1]
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t eax_6
        
        if (i_1 == 0xfffffffc)
            eax_6 = 0
        else
        label_5188e8:
            ecx.b = *edi_2
            char temp2_1 = *edx_1
            
            if (ecx.b != temp2_1)
                eax_6 = sbb.d(i_1, i_1, ecx.b u< temp2_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_6 = 0
            else
                ecx.b = *(edi_2 + 1)
                char temp4_1 = *(edx_1 + 1)
                
                if (ecx.b != temp4_1)
                    eax_6 = sbb.d(i_1, i_1, ecx.b u< temp4_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_6 = 0
                else
                    ecx.b = *(edi_2 + 2)
                    char temp5_1 = *(edx_1 + 2)
                    
                    if (ecx.b != temp5_1)
                        eax_6 = sbb.d(i_1, i_1, ecx.b u< temp5_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_6 = 0
                    else
                        i_1.b = *(edi_2 + 3)
                        char temp6_1 = *(edx_1 + 3)
                        
                        if (i_1.b == temp6_1)
                            eax_6 = 0
                        else
                            eax_6 = sbb.d(i_1, i_1, i_1.b u< temp6_1) | 1
        
        if (eax_6 == 0)
            goto label_518922
    
    esi = &esi[1]
    arg2 = esi

return result
