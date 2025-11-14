// 函数: sub_57eae0
// 地址: 0x57eae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, edi - *arg1)
int32_t edx_3 = edx_2 s>> 1
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t eax_2 = edi + (arg2 - ecx_2) * 0xc
    arg1[1] = eax_2
    return eax_2

if (ecx_2 u< arg2)
    int64_t* esi_1 = arg3
    int32_t eax_3
    
    if (esi_1 u< edi)
        eax_3 = *arg1
    
    if (esi_1 u>= edi || eax_3 u> esi_1)
        sub_5337f0(arg1, arg2 - ecx_2)
    else
        sub_5337f0(arg1, arg2 - ecx_2)
        esi_1 = *arg1 + (esi_1 - eax_3) s/ 0xc * 0xc
    
    int32_t var_14_3 = arg2
    int32_t eax_10
    int32_t edx_6
    edx_6:eax_10 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_7 = edx_6 s>> 1
    sub_544650(eax_10, arg2 - ((edx_7 u>> 0x1f) + edx_7), arg1[1], esi_1)
    int32_t esi_9 = arg1[1]
    int32_t eax_11
    int32_t edx_10
    edx_10:eax_11 = muls.dp.d(0x2aaaaaab, esi_9 - *arg1)
    int32_t edx_11 = edx_10 s>> 1
    eax = esi_9 + (arg2 - ((edx_11 u>> 0x1f) + edx_11)) * 0xc
    arg1[1] = eax

return eax
