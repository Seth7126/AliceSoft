// 函数: sub_592380
// 地址: 0x592380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_592610(arg1)
    
    int64_t* ecx_4 = arg1[1]
    
    if (ecx_4 != 0)
        *ecx_4 = *arg2
        ecx_4[1].d = arg2[1].d
else
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2aaaaaab, arg2 - eax)
    int32_t edx_2 = edx_1 s>> 1
    
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_592610(arg1)
    
    int64_t* edx_3 = arg1[1]
    
    if (edx_3 != 0)
        int32_t eax_1 = *arg1
        int32_t ecx_2 = ((edx_2 u>> 0x1f) + edx_2) * 3
        *edx_3 = *(eax_1 + (ecx_2 << 2))
        edx_3[1].d = *(eax_1 + (ecx_2 << 2) + 8)
        arg1[1] += 0xc
        return 

arg1[1] += 0xc
