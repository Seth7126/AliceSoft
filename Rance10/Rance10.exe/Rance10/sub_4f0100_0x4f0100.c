// 函数: sub_4f0100
// 地址: 0x4f0100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0x130)

if (esi == 0)
    int32_t eax
    eax.b = 1
    return eax

void** ebx = *(arg1 + 0x78)
int32_t var_10 = esi
void* eax_1 = sub_4f15e0(ebx)

if (eax_1 != 0)
    int32_t edi_1 = *(eax_1 + 8)
    
    if (esi s>= edi_1 && *(eax_1 + 4) + edi_1 s> esi)
        eax_1.b = *(*(eax_1 + 0xc) + ((esi - edi_1) << 2)) != 0
        
        if (eax_1.b != 0)
            int32_t var_10_1 = esi
            void* ecx_4 = sub_4f15e0(ebx)
            int32_t edx_3
            
            if (ecx_4 != 0)
                edx_3 = *(ecx_4 + 8)
            
            void* const esi_2
            
            if (ecx_4 == 0 || esi s< edx_3 || *(ecx_4 + 4) + edx_3 s<= esi)
                esi_2 = nullptr
            else
                esi_2 = *(*(ecx_4 + 0xc) + ((esi - edx_3) << 2))
            
            int32_t* ecx_5 = *(esi_2 + 0x74)
            
            if (ecx_5 != 0 && (*(*ecx_5 + 8))(1) == 1)
                int32_t* ecx_6 = *(esi_2 + 0x74)
                
                if (ecx_6 != 0 && (*(*ecx_6 + 8))(1) == 1)
                    void* eax_5
                    eax_5.b = *(*(esi_2 + 0x74) + 0xf1)
                    return eax_5
                
                eax_1.b = 0
                return eax_1

eax_1.b = 1
return eax_1
