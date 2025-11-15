// 函数: sub_499a30
// 地址: 0x499a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_1 = edx s>> 3
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result s> 0)
    int32_t* edi_1 = nullptr
    
    do
        int32_t* ecx_2 = *(edi_1 + *(arg1 + 4))
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x14))()
            (*(**(edi_1 + *(arg1 + 4)) + 4))()
            *(edi_1 + *(arg1 + 4)) = 0
        
        ebx += 1
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
        edi_1 = &edi_1[0xc]
        int32_t edx_3 = edx_2 s>> 3
        result = (edx_3 u>> 0x1f) + edx_3
    while (ebx s< result)

return result
