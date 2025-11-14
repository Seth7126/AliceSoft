// 函数: sub_5441f0
// 地址: 0x5441f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg1[1]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, esi - *arg1)
int32_t edx_3 = edx_2 s>> 1
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t eax_2 = esi + (arg2 - ecx_2) * 0xc
    arg1[1] = eax_2
    return eax_2

if (ecx_2 u< arg2)
    sub_5337f0(arg1, arg2 - ecx_2)
    int32_t var_10_2 = arg2
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 1
    sub_4bf8d0(arg1[1], arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t esi_4 = arg1[1]
    int32_t eax_6
    int32_t edx_8
    edx_8:eax_6 = muls.dp.d(0x2aaaaaab, esi_4 - *arg1)
    int32_t edx_9 = edx_8 s>> 1
    eax = esi_4 + (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0xc
    arg1[1] = eax

return eax
