// 函数: sub_41bbb0
// 地址: 0x41bbb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1[1]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, edi - *arg1)
int32_t edx_3 = edx_2 s>> 4
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> 0xb)
    int32_t* __saved_ebx = arg1
    int32_t var_18_1 = ecx_2
    void* esi_1 = edi + (0xb - ecx_2) * 0x28
    int32_t eax_3 = sub_41be60(esi_1, edi)
    arg1[1] = esi_1
    return eax_3

if (ecx_2 u< 0xb)
    sub_41bc70(arg1, 0xb - ecx_2)
    int32_t* var_18_3 = arg1
    int32_t eax_5
    int32_t edx_5
    edx_5:eax_5 = muls.dp.d(0x66666667, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 4
    sub_41be20(arg1[1], 0xb - ((edx_6 u>> 0x1f) + edx_6))
    int32_t esi_5 = arg1[1]
    int32_t eax_6
    int32_t edx_8
    edx_8:eax_6 = muls.dp.d(0x66666667, esi_5 - *arg1)
    int32_t edx_9 = edx_8 s>> 4
    eax = esi_5 + (0xb - ((edx_9 u>> 0x1f) + edx_9)) * 0x28
    arg1[1] = eax

return eax
