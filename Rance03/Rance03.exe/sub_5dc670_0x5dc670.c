// 函数: sub_5dc670
// 地址: 0x5dc670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, edi - *arg1)
int32_t edx_3 = edx_2 s>> 4
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t* esi_1 = edi + (arg2 - ecx_2) * 0x28
    int32_t eax_2 = sub_5b66e0(esi_1, edi)
    arg1[1] = esi_1
    return eax_2

if (ecx_2 u< arg2)
    sub_5dc720(arg1, arg2 - ecx_2)
    int32_t var_14_3 = arg2
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = muls.dp.d(0x66666667, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 4
    sub_5dc880(arg1[1], arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t esi_5 = arg1[1]
    int32_t eax_6
    int32_t edx_8
    edx_8:eax_6 = muls.dp.d(0x66666667, esi_5 - *arg1)
    int32_t edx_9 = edx_8 s>> 4
    eax = esi_5 + (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x28
    arg1[1] = eax

return eax
