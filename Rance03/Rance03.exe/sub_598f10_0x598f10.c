// 函数: sub_598f10
// 地址: 0x598f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_10 = arg2
int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 5
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        void* eax_4 = *(arg1 + 8) + edi_1
        
        if (*(eax_4 + 0x50) != 0)
            float var_c = *(eax_4 + 0x8c) * arg2
            float var_8_1 = *(eax_4 + 0x90) * arg2
            float var_4_1 = *(eax_4 + 0x94) * arg2
            sub_599110(arg1, ebx, &var_c)
            arg2 = var_10
        
        ebx += 1
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
        edi_1 += 0xac
        int32_t edx_5 = edx_4 s>> 5
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
