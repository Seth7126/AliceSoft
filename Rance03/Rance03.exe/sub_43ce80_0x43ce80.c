// 函数: sub_43ce80
// 地址: 0x43ce80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x24) - *(arg1 + 0x20))
int32_t edx_3 = edx_2 s>> 2
uint32_t ecx_1 = edx_3 u>> 0x1f

if (ecx_1 == neg.d(edx_3) || ecx_1 + edx_3 s<= arg2 || arg2 s< 0)
    if (data_74f5c8 u>= 0x10)
        return data_74f5b4
    
    return &data_74f5b4

int32_t ecx_3 = arg2 * 3
int32_t eax_3 = *(arg1 + 0x20)
int32_t* result = eax_3 + (ecx_3 << 3)

if (*(eax_3 + (ecx_3 << 3) + 0x14) u< 0x10)
    return result

return *result
