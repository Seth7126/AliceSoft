// 函数: sub_5bc7c0
// 地址: 0x5bc7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
int32_t esi = *arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, ecx - esi)
int32_t edi_2 = (ecx - esi) s/ 0xc

if (edi_2 u> arg2)
    int32_t eax_2 = ecx + (arg2 - edi_2) * 0xc
    arg1[1] = eax_2
    return eax_2

if (edi_2 u< arg2)
    int64_t* eax_7
    int32_t ecx_3
    
    if (ecx u<= &data_7fd4d8 || esi u> &data_7fd4d8)
        ecx_3 = sub_574e20(arg1, arg2 - edi_2)
        eax_7 = &data_7fd4d8
    else
        sub_574e20(arg1, arg2 - edi_2)
        ecx_3 = *arg1
        eax_7 = ecx_3 + (&data_7fd4d8 - esi) s/ 0xc * 0xc
    
    int32_t var_14_3 = arg2
    int32_t var_18_1 = ecx_3
    int32_t eax_10
    int32_t edx_6
    edx_6:eax_10 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_7 = edx_6 s>> 1
    sub_586c40(eax_10, arg2 - ((edx_7 u>> 0x1f) + edx_7), arg1[1], eax_7)
    int32_t eax_11
    int32_t edx_10
    edx_10:eax_11 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_11 = edx_10 s>> 1
    eax = (arg2 - ((edx_11 u>> 0x1f) + edx_11)) * 0xc
    arg1[1] += eax

return eax
