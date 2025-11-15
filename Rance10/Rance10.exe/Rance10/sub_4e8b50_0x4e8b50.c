// 函数: sub_4e8b50
// 地址: 0x4e8b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg2
int32_t var_c = arg3
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x114) - *(arg1 + 0x110))
int32_t edx_3 = edx_2 s>> 2
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3

if (eax_3 s< ecx)
    ecx = eax_3

if (ecx s< 0)
    ecx = 0

int32_t* result = sub_4eb4c0(arg1 + 0x110, &arg2, *(arg1 + 0x110) + ecx * 0x18, ecx)
*(arg1 + 0x124) = 1
return result
