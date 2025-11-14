// 函数: sub_4b0280
// 地址: 0x4b0280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb8) - *(arg1 + 0xb4))
int32_t edx_3 = edx_2 s>> 2
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> arg2 && arg2 s>= 0)
    int32_t var_c_1 = arg2
    int32_t* eax_4 = *(arg1 + 0xb4) + arg2 * 0x18
    sub_468940(eax_4, *(arg1 + 0xb8), &eax_4[6], eax_4)
    void* eax_5 = *(arg1 + 0xb8)
    sub_4107c0(eax_5 - 0x18, eax_5)
    *(arg1 + 0xb8) -= 0x18
    int32_t var_c_3 = arg2 - 1
    result = sub_4b0370(arg1)
    int32_t* ecx_3 = *(arg1 + 0xc8)
    
    if (ecx_3 != 0)
        return (**ecx_3)()

return result
