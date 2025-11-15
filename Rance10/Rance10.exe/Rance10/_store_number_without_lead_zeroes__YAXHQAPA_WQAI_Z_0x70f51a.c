// 函数: ?store_number_without_lead_zeroes@@YAXHQAPA_WQAI@Z
// 地址: 0x70f51a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
int32_t eax = *arg3
int16_t* ecx = *arg2
int32_t result

if (eax u<= 1)
    result = eax * 2
    *arg2 = ecx - result
    *arg3 = 0
else
    int32_t ebx_1 = arg1
    
    do
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(ebx_1)
        ebx_1 = divs.dp.d(edx_1:eax_2, 0xa)
        result = mods.dp.d(edx_1:eax_2, 0xa) + 0x30
        *ecx = result.w
        ecx = &ecx[1]
        *arg3 -= 1
        
        if (ebx_1 s<= 0)
            break
    while (*arg3 u> 1)
    
    int16_t* i = *arg2
    void* esi_1 = &ecx[-1]
    *arg2 = ecx
    
    for (; i u< esi_1; i = &i[1])
        result.w = *i
        int16_t ecx_1 = *esi_1
        *esi_1 = result.w
        esi_1 -= 2
        *i = ecx_1

return result
