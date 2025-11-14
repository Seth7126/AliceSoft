// 函数: sub_5bc3a0
// 地址: 0x5bc3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, edi - *arg1)
int32_t edx_3 = edx_2 s>> 3
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t var_14_1 = arg2
    int32_t var_18 = ecx_2
    void* esi_3 = (arg2 - ecx_2) * 0x30 + edi
    int32_t eax_1 = sub_5bc190(esi_3, edi)
    arg1[1] = esi_3
    return eax_1

if (ecx_2 u< arg2)
    sub_5bc450(arg1, arg2 - ecx_2)
    int32_t var_14_3 = arg2
    int32_t eax_4
    int32_t edx_5
    edx_5:eax_4 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 3
    sub_5bc5c0(arg1[1], arg2 - ((edx_6 u>> 0x1f) + edx_6))
    int32_t eax_5
    int32_t edx_9
    edx_9:eax_5 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_10 = edx_9 s>> 3
    eax = (arg2 - ((edx_10 u>> 0x1f) + edx_10)) * 0x30
    arg1[1] += eax

return eax
