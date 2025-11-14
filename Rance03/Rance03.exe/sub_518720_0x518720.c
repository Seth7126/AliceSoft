// 函数: sub_518720
// 地址: 0x518720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t* i = arg2
void* var_c = nullptr

while (i != *(arg1 + 0xac))
    void* ebp_1 = *i
    void** eax_2 = ebp_1 + 4
    int32_t ebx_2 = eax_2[4]
    
    if (*(ebp_1 + 0x18) u>= 0x10)
        eax_2 = *eax_2
    
    int32_t esi_1 = 1
    
    if (ebx_2 u< 1)
        esi_1 = ebx_2
    
    if (esi_1 == 0)
    label_5187c8:
        
        if (ebx_2 u>= 1)
            int32_t eax_5
            eax_5.b = ebx_2 != 1
            
            if (eax_5 == 0)
                return var_c
    else
        wchar32 const* const edi_1 = &(*U"\n\n\n\n\n\n")[3]
        int32_t j_1 = esi_1 - 4
        
        if (esi_1 u>= 4)
            int32_t j
            
            do
                if (*eax_2 != *edi_1)
                    goto label_51878e
                
                eax_2 = &eax_2[1]
                edi_1 = &edi_1[1]
                j = j_1
                j_1 -= 4
            while (j u>= 4)
        
        int32_t eax_4
        
        if (j_1 == 0xfffffffc)
            eax_4 = 0
        else
        label_51878e:
            edx.b = *eax_2
            char temp2_1 = *edi_1
            
            if (edx.b != temp2_1)
                eax_4 = sbb.d(eax_2, eax_2, edx.b u< temp2_1) | 1
            else if (j_1 == 0xfffffffd)
                eax_4 = 0
            else
                edx.b = *(eax_2 + 1)
                char temp4_1 = *(edi_1 + 1)
                
                if (edx.b != temp4_1)
                    eax_4 = sbb.d(eax_2, eax_2, edx.b u< temp4_1) | 1
                else if (j_1 == 0xfffffffe)
                    eax_4 = 0
                else
                    edx.b = *(eax_2 + 2)
                    char temp5_1 = *(edi_1 + 2)
                    
                    if (edx.b != temp5_1)
                        eax_4 = sbb.d(eax_2, eax_2, edx.b u< temp5_1) | 1
                    else if (j_1 == 0xffffffff)
                        eax_4 = 0
                    else
                        eax_2.b = *(eax_2 + 3)
                        char temp6_1 = *(edi_1 + 3)
                        
                        if (eax_2.b == temp6_1)
                            eax_4 = 0
                        else
                            eax_4 = sbb.d(eax_2, eax_2, eax_2.b u< temp6_1) | 1
        
        if (eax_4 == 0)
            goto label_5187c8
    
    int32_t* eax_6 = *(ebp_1 + 0xb0)
    int32_t esi_2 = *(ebp_1 + 0xb4)
    void* ebx_3 = nullptr
    uint32_t ebp_5 = (esi_2 - eax_6 + 3) u>> 2
    
    if (eax_6 u> esi_2)
        ebp_5 = 0
    
    if (ebp_5 != 0)
        int32_t edi_2 = 0
        
        do
            void* edx_2 = *(*eax_6 + 4)
            
            if (edx_2 != 0)
                edx_2 = *(edx_2 + 0x18)
            
            edi_2 += 1
            ebx_3 += edx_2
            eax_6 = &eax_6[1]
        while (edi_2 != ebp_5)
    
    void* eax_7 = *i
    i = &i[1]
    arg2 = i
    edx = var_c + (((esi_2 - *(eax_7 + 0xb0)) s>> 2) - 1) * *(arg1 + 0x40) + ebx_3
    var_c = edx

return edx
