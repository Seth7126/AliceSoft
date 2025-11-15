// 函数: sub_4d7000
// 地址: 0x4d7000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
int32_t eax_1

if (arg2 u< ecx)
    eax_1 = *arg1

void* eax_2

if (arg2 u>= ecx || eax_1 u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_4aae70(arg1)
    
    eax_2 = arg1[1]
    
    if (eax_2 != 0)
        *eax_2 = *arg2
        *(eax_2 + 0x10) = arg2[1]
        *(eax_2 + 0x20) = arg2[2].q
else
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x66666667, arg2 - eax_1)
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        eax_2 = sub_4aae70(arg1)
    
    int128_t* edx_3 = arg1[1]
    
    if (edx_3 != 0)
        int32_t eax_3 = *arg1
        int32_t ecx_2 = (arg2 - eax_1) s/ 0x28 * 5
        *edx_3 = *(eax_3 + (ecx_2 << 3))
        edx_3[1] = *(eax_3 + (ecx_2 << 3) + 0x10)
        edx_3[2].q = *(eax_3 + (ecx_2 << 3) + 0x20)
        arg1[1] += 0x28
        return eax_3

arg1[1] += 0x28
return eax_2
