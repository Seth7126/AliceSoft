// 函数: sub_5ef930
// 地址: 0x5ef930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2

if (esi s>= 0)
    int32_t ebx_1 = *arg1
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x66666667, arg1[1] - ebx_1)
    int32_t edx_4 = edx_3 s>> 3
    
    if (esi s< (edx_4 u>> 0x1f) + edx_4)
        edx_4.b = arg2.b
        arg2.b = edx_4.b
        *(ebx_1 + esi * 0x14) = arg3
        int32_t* ecx_1 = *arg1
        int32_t eax_5
        int32_t edx_7
        edx_7:eax_5 = muls.dp.d(0x66666667, arg1[1] - ecx_1)
        int32_t edx_8 = edx_7 s>> 3
        int32_t eax_8 = (edx_8 u>> 0x1f) + edx_8
        sub_5f0d00(eax_8, arg1[1], ecx_1, eax_8, &arg2)
        char* eax_9
        eax_9.b = 1
        return eax_9

int32_t eax
eax.b = 0
return eax
