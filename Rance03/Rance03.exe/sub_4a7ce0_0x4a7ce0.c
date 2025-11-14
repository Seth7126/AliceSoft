// 函数: sub_4a7ce0
// 地址: 0x4a7ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi_2 = (arg2 - arg3) s>> 2
int32_t var_10 = esi_2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* ecx = (i << 1) + 2
    
    do
        int32_t eax_2 = *(arg3 + (i << 2) - 4)
        i -= 1
        int32_t var_8 = eax_2
        void* i_1 = i
        void* i_2 = ecx - 2
        
        if (ecx - 2 s< esi_2)
            do
                void* edx_1 = *(arg3 + (i_2 << 2) - 4)
                void* ecx_2 = *(arg3 + (i_2 << 2))
                int32_t edi_1 = *(edx_1 + 4)
                int32_t esi_3 = *(ecx_2 + 4)
                
                if (esi_3 s< edi_1)
                    i_2 -= 1
                else if (esi_3 s<= edi_1)
                    int32_t esi_4 = *(ecx_2 + 8)
                    int32_t edi_2 = *(edx_1 + 8)
                    
                    if (esi_4 s< edi_2)
                        i_2 -= 1
                    else if (esi_4 s<= edi_2 && *(ecx_2 + 0xc) s< *(edx_1 + 0xc))
                        i_2 -= 1
                
                esi_2 = var_10
                *(arg3 + (i_1 << 2)) = *(arg3 + (i_2 << 2))
                i_1 = i_2
                i_2 = (i_2 << 1) + 2
            while (i_2 s< esi_2)
        
        if (i_2 == esi_2)
            *(arg3 + (i_1 << 2)) = *(arg3 + (esi_2 << 2) - 4)
            i_1 = esi_2 - 1
        
        int32_t var_24_1 = arg4
        result = sub_4a8010(&var_8, i_1, arg3, i, &var_8)
        ecx -= 2
    while (i s> 0)

return result
