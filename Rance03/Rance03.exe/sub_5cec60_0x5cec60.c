// 函数: sub_5cec60
// 地址: 0x5cec60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t ebx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
int32_t eax_5 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (edx u< eax_5)
    eax_5 = *(arg1 + 0x174)
    void* edi_1 = *(eax_5 + (edx << 2))
    
    if (edi_1 != 0)
        int32_t eax_10
        
        if (ecx == 0xffffffff)
            eax_10 = 0
        else
            int32_t eax_8 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
            
            if (ecx u>= eax_8)
            label_5cecdc:
                int32_t var_10 = ecx
                int32_t var_14 = 0x6e9d78
                return sub_5c2400(eax_8, edx, ecx, arg1, "DG_ADD")
            
            eax_8 = *(*(arg1 + 0x174) + (ecx << 2))
            
            if (eax_8 == 0)
                goto label_5cecdc
            
            eax_10 = *(eax_8 + 0x20)
        
        int32_t result
        int32_t ecx_2
        int32_t edx_1
        result, ecx_2, edx_1 = sub_5d5090(edi_1, ecx, ebx, eax_10)
        
        if (result.b != 0)
            return result
        
        char const* const var_10_2 = "addDelegateMethod"
        return sub_5c2400(result, edx_1, ecx_2, arg1, "DG_ADD")

int32_t var_10_3 = edx
int32_t var_14_2 = 0x6e9d4c
return sub_5c2400(eax_5, edx, ecx, arg1, "DG_ADD")
