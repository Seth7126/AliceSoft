// 函数: sub_4ffa80
// 地址: 0x4ffa80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb4) - *(arg1 + 0xb0))
int32_t edx_3 = edx_2 s>> 2
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> arg2 && arg2 s>= 0)
    int32_t var_c_1 = 0
    int32_t* eax_4 = *(arg1 + 0xb0) + arg2 * 0x18
    int32_t ecx_2 = sub_46f570(eax_4, *(arg1 + 0xb4), &eax_4[6], eax_4)
    void* edx_5 = *(arg1 + 0xb4)
    int32_t var_c_2 = 0
    int32_t var_10_2 = ecx_2
    sub_417d50(edx_5 - 0x18, edx_5)
    *(arg1 + 0xb4) -= 0x18
    int32_t var_c_3 = arg2 - 1
    result = sub_4ffbc0(arg1)
    *(arg1 + 0xc4) = 1

return result
