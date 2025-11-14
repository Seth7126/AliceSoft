// 函数: sub_5c7660
// 地址: 0x5c7660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = arg1 + 0x16c
*(arg1 + 0x234) -= 4
int32_t edi = **(arg1 + 0x234)
int32_t eax_3 = (*(ecx + 0xc) - *(ecx + 8)) s>> 2

if (edi u< eax_3)
    eax_3 = *(*(ecx + 8) + (edi << 2))
    
    if (eax_3 != 0)
        char* eax_5
        
        if (*(eax_3 + 0xc) != 0)
            eax_5 = *(eax_3 + 8)
        
        int32_t ebx_1
        
        if (*(eax_3 + 0xc) == 0 || eax_5 == 0)
            ebx_1 = 0
        else
            ebx_1.b = *eax_5 == 0
        
        int32_t edx_1 = *(arg1 + 0x22c)
        int32_t ebp_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
        
        if (ebp_3 + 1 u>= edx_1)
            sub_64ad90(arg1 + 0x224, edx_1 * 2)
            ecx = arg1 + 0x16c
            *(arg1 + 0x234) = *(arg1 + 0x228) + (ebp_3 << 2)
        
        **(arg1 + 0x234) = ebx_1
        *(arg1 + 0x234) += 4
        int32_t result
        int32_t ecx_2
        int32_t edx_2
        result, ecx_2, edx_2 = sub_5d5e80(ecx, edi)
        
        if (result.b != 0)
            return result
        
        int32_t var_14_3 = 0x6e7b64
        return sub_5c2400(result, edx_2, ecx_2, arg1, "S_EMPTY")

int32_t var_14_4 = edi
int32_t var_18_1 = 0x6e7a2c
int32_t edx
return sub_5c2400(eax_3, edx, ecx, arg1, "S_EMPTY")
