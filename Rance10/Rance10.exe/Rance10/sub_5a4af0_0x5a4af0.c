// 函数: sub_5a4af0
// 地址: 0x5a4af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_5a55a0(arg1)
    
    int128_t* ecx_5 = arg1[1]
    
    if (ecx_5 != 0)
        *ecx_5 = *arg2
        ecx_5[1].q = arg2[1].q
        *(ecx_5 + 0x18) = *(arg2 + 0x18)
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_5a55a0(arg1)
    
    int128_t* edx_4 = arg1[1]
    
    if (edx_4 != 0)
        int32_t eax_1 = *arg1
        int32_t ecx_3 = (arg2 - eax) s/ 0x1c * 7
        *edx_4 = *(eax_1 + (ecx_3 << 2))
        edx_4[1].q = *(eax_1 + (ecx_3 << 2) + 0x10)
        *(edx_4 + 0x18) = *(eax_1 + (ecx_3 << 2) + 0x18)
        arg1[1] += 0x1c
        return 

arg1[1] += 0x1c
