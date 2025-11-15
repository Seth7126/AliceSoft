// 函数: sub_5b6380
// 地址: 0x5b6380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, esi_1)
int32_t ecx_2 = esi_1 s/ 0xc

if (ecx_2 u> 4)
    int32_t eax_4 = edi + (4 - esi_1 s/ 0xc) * 0xc
    arg1[1] = eax_4
    return eax_4

if (ecx_2 u< 4)
    int32_t* var_14_2 = arg1
    int32_t var_18_1 = sub_574e20(arg1, 4 - ecx_2)
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 1
    sub_5b64e0(arg1[1], 4 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_10
    int32_t edx_7
    edx_7:eax_10 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_8 = edx_7 s>> 1
    eax = (4 - ((edx_8 u>> 0x1f) + edx_8)) * 0xc
    arg1[1] += eax

return eax
