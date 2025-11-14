// 函数: sub_6973d0
// 地址: 0x6973d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg2 + 8)
int32_t edi = *(arg2 + 0xc)
int32_t result = *(arg2 + 0x54)

if (*(arg1 + 0x11) != 0 && (edi s< 0x280 || ebx s< 0x1e0))
    return result

arg2 = nullptr
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t edx_2 = edx_1 s>> 1

if ((edx_2 u>> 0x1f) + edx_2 s> 0)
    int32_t* esi_1 = nullptr
    int32_t ecx_3 = *(arg1 + 4)
    int32_t edx_4
    
    do
        if (*(esi_1 + ecx_3) == edi && *(esi_1 + ecx_3 + 4) == ebx
                && *(esi_1 + ecx_3 + 8) == result)
            return result
        
        esi_1 = &esi_1[3]
        arg2 += 1
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
        ecx_3 = *(arg1 + 4)
        edx_4 = edx_3 s>> 1
    while (arg2 s< (edx_4 u>> 0x1f) + edx_4)

int32_t result_1 = result
int32_t var_c = edi
int32_t var_8_1 = ebx
return sub_6709c0(arg1 + 4, &var_c)
