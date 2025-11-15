// 函数: sub_67a1a0
// 地址: 0x67a1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x1c0)
int32_t ebp = *(arg1 + 0x64)
void* result = *(arg1 + 0x5c)
int32_t var_14 = ebp
arg1 = result

if (arg4 s> 0)
    uint32_t (** esi_1)[0x4] = arg3
    int32_t* edi_2 = arg2 - esi_1
    arg2 = edi_2
    int32_t i
    
    do
        _memset(*esi_1, 0, result)
        void* ecx_1 = ecx
        int32_t ebx_1 = 0
        int32_t var_18_1 = 0
        int32_t eax_1 = *(ecx_1 + 0x30)
        
        if (ebp s> 0)
            do
                char* edi_4 = *(edi_2 + esi_1) + ebx_1
                int32_t edx_2 = *(ecx_1 + (ebx_1 << 2) + 0x34) + (eax_1 << 6)
                int32_t eax_4 = *(*(ecx_1 + 0x18) + (ebx_1 << 2))
                void* j_1 = arg1
                uint32_t (* esi_2)[0x4] = *esi_1
                int32_t eax_5 = 0
                int32_t var_8_1 = edx_2
                
                if (j_1 u> 0)
                    void* j
                    
                    do
                        esi_2 += 1
                        char* edx_4 = *(edx_2 + (eax_5 << 2)) + zx.d(*edi_4)
                        edi_4 = &edi_4[var_14]
                        eax_5 = (eax_5 + 1) & 0xf
                        int32_t ecx_3
                        ecx_3.b = edx_4[eax_4]
                        *(esi_2 - 1) += ecx_3.b
                        edx_2 = var_8_1
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    ebx_1 = var_18_1
                    ecx_1 = ecx
                
                ebp = var_14
                ebx_1 += 1
                esi_1 = arg3
                edi_2 = arg2
                var_18_1 = ebx_1
            while (ebx_1 s< ebp)
        
        esi_1 = &esi_1[1]
        arg3 = esi_1
        i = arg4
        arg4 -= 1
        *(ecx_1 + 0x30) = (eax_1 + 1) & 0xf
        result = arg1
    while (i != 1)

return result
