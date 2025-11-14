// 函数: sub_598b20
// 地址: 0x598b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 5
int32_t result = (arg2[1] - *arg2) s>> 5

if ((edx_3 u>> 0x1f) + edx_3 == result)
    int32_t eax_3
    int32_t edx_5
    edx_5:eax_3 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
    int32_t edx_6 = edx_5 s>> 5
    int32_t ebx_1 = 0
    result = (edx_6 u>> 0x1f) + edx_6
    
    if (result s> 0)
        int32_t ebp_1 = 0
        int32_t edi_1 = 0
        
        do
            void* eax_7 = *(arg1 + 8) + edi_1
            
            if (*(eax_7 + 0x50) == 0)
                int32_t ecx_6 = *arg2
                *(eax_7 + 0x10) = *(ecx_6 + ebp_1 + 4)
                *(eax_7 + 0x20) = *(ecx_6 + ebp_1 + 0x14)
                *(eax_7 + 0x28) = *(ecx_6 + ebp_1 + 0x1c)
            
            ebx_1 += 1
            int32_t eax_8
            int32_t edx_7
            edx_7:eax_8 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
            edi_1 += 0xac
            ebp_1 += 0x20
            int32_t edx_8 = edx_7 s>> 5
            result = (edx_8 u>> 0x1f) + edx_8
        while (ebx_1 s< result)

return result
