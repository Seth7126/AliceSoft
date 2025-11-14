// 函数: sub_4a8510
// 地址: 0x4a8510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_14 = arg2
eax_14[1] = *eax_14
int32_t result = (*(arg1 + 0x4c) - *(arg1 + 0x48)) & 0xfffffffc

if (result s> 4)
    int32_t arg_8
    int32_t edx_1 = arg_8
    
    if (edx_1 s< 0)
        edx_1 = sub_4a8430(arg1)
        arg_8 = edx_1
    
    if ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2 s<= edx_1)
        edx_1 = ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2) - 1
        arg_8 = edx_1
    
    int32_t** esi_1 = *(arg1 + 0x48) + (edx_1 << 2)
    int32_t eax_4 = arg2
    int32_t* edi_1 = *esi_1
    bool cond:0_1 = edi_1 == *(arg1 + 0x54)
    *(eax_4 + 4) = *eax_4
    int32_t ebx
    ebx.b = cond:0_1
    sub_4a45e0(edi_1[1], eax_4)
    _memcpy(esi_1, &esi_1[1], (*(arg1 + 0x4c) - &esi_1[1]) & 0xfffffffc)
    *(arg1 + 0x4c) -= 4
    result = (**edi_1)(1)
    
    if (ebx.b != 0)
        int32_t* ecx_8 = &arg_8
        int32_t eax_10 = arg_8 - 1
        *(arg1 + 0x54) = 0
        arg_8 = eax_10
        int32_t eax_11 = *(arg1 + 0x4c)
        
        if (eax_10 s<= 0)
            ecx_8 = &arg2
        
        arg2 = 0
        result = (eax_11 - *(arg1 + 0x48)) s>> 2
        int32_t ecx_9 = *ecx_8
        
        if (ecx_9 s< result)
            result = *(*(arg1 + 0x48) + (ecx_9 << 2))
            *(arg1 + 0x54) = result

return result
