// 函数: sub_51a9d0
// 地址: 0x51a9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg1 + 0x44)
int32_t esi = *(arg1 + 0x48)

if (edi == esi)
    return 

char* var_8_1 = &edi[1]

do
    int32_t ebx_1 = *edi
    int32_t var_20_1 = ebx_1
    void* eax_2 = sub_4f15e0(*(arg1 + 0x58))
    
    if (eax_2 == 0)
        sub_6feca0(edi, var_8_1, esi - var_8_1)
        *(arg1 + 0x48) -= 4
    else
        int32_t edx_1 = *(eax_2 + 8)
        
        if (ebx_1 s< edx_1 || *(eax_2 + 4) + edx_1 s<= ebx_1)
            sub_6feca0(edi, var_8_1, esi - var_8_1)
            *(arg1 + 0x48) -= 4
        else
            void* ebx_3 = *(*(eax_2 + 0xc) + ((ebx_1 - edx_1) << 2))
            
            if (ebx_3 == 0)
                sub_6feca0(edi, var_8_1, esi - var_8_1)
                *(arg1 + 0x48) -= 4
            else
                sub_4eec50(ebx_3, 1, 1)
                void* edx_2 = *(ebx_3 + 0x74)
                void* var_4 = arg1 + 8
                
                if (arg1 != 0xfffffff8)
                    void* eax = *(edx_2 + 0x48)
                    int32_t* edx_3 = *(edx_2 + 0x44)
                    
                    if (edx_3 == eax)
                        sub_42ccf0(edx_2 + 0x44, &var_4)
                    else
                        while (*edx_3 != arg1 + 8)
                            edx_3 = &edx_3[1]
                            
                            if (edx_3 == eax)
                                break
                        
                        if (edx_3 == eax)
                            sub_42ccf0(edx_2 + 0x44, &var_4)
                
                edi = &edi[1]
                var_8_1 = &var_8_1[4]
    
    esi = *(arg1 + 0x48)
while (edi != esi)
