// 函数: sub_4a6a50
// 地址: 0x4a6a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1
void* var_c = edx
int32_t* ecx_1 = *(edx + 0xc) + 0x94
int32_t* i = *ecx_1

if (i == ecx_1[1])
    return 

int32_t* edi_1 = arg2
int32_t* eax = ecx_1

do
    int32_t ebx_1 = *i
    
    if (ebx_1 s> 0)
        int32_t ebp_3 = ebx_1 s/ 0x2710
        int32_t* edx_3 = *(*(edx + 8) + 0x1c)
        int32_t* ecx_3 = edx_3
        int32_t* eax_2 = edx_3[1]
        
        while (*(eax_2 + 0xd) == 0)
            if (eax_2[4] s>= ebp_3)
                ecx_3 = eax_2
                eax_2 = *eax_2
            else
                eax_2 = eax_2[2]
        
        void** eax_3
        
        if (ecx_3 == edx_3 || ebp_3 s< ecx_3[4])
            int32_t* var_4 = edx_3
            eax_3 = &var_4
        else
            arg2 = ecx_3
            eax_3 = &arg2
        
        edx = var_c
        void* eax_4 = *eax_3
        
        if (eax_4 != *(*(edx + 8) + 0x1c))
            void* ecx_5 = *(eax_4 + 0x14)
            
            if (ecx_5 != 0)
                int32_t edx_4 = *(ecx_5 + 8)
                int32_t ebx_3
                
                if (ebx_1 s< edx_4 || *(ecx_5 + 4) + edx_4 s<= ebx_1)
                    ebx_3 = 0
                else
                    ebx_3 = *(*(ecx_5 + 0xc) + ((ebx_1 - edx_4) << 2))
                
                int32_t var_8 = ebx_3
                
                if (ebx_3 != 0)
                    int32_t eax_8 = edi_1[1]
                    int32_t* ecx_6 = &var_8
                    
                    if (&var_8 u< eax_8)
                        ecx_6 = *edi_1
                    
                    if (&var_8 u>= eax_8 || ecx_6 u> &var_8)
                        if (eax_8 == edi_1[2])
                            int32_t* var_24_2 = ecx_6
                            sub_412f20(edi_1)
                        
                        int32_t* eax_11 = edi_1[1]
                        
                        if (eax_11 != 0)
                            *eax_11 = ebx_3
                    else
                        if (eax_8 == edi_1[2])
                            int32_t* var_24_1 = ecx_6
                            sub_412f20(edi_1)
                        
                        int32_t* ecx_8 = edi_1[1]
                        
                        if (ecx_8 != 0)
                            *ecx_8 = *(*edi_1 + ((&var_8 - ecx_6) s>> 2 << 2))
                    
                    edi_1[1] += 4
                
                edx = var_c
        
        eax = ecx_1
    
    i = &i[1]
while (i != eax[1])
