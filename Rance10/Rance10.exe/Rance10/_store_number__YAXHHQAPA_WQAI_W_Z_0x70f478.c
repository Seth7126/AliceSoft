// 函数: ?store_number@@YAXHHQAPA_WQAI_W@Z
// 地址: 0x70f478
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 == 0)
    return store_number_without_lead_zeroes(arg1, arg3, arg4)

int32_t result = arg2
int32_t* esi_1 = arg4

if (result u>= *esi_1)
    *esi_1 = 0
else
    int32_t ebx_1 = 0
    int32_t edi
    int32_t var_1c_2 = edi
    void* var_10_1 = result
    
    if (result != 0)
        int32_t ecx_2 = arg1
        int16_t* eax_1 = (result - 1) * 2
        esi_1.w = arg5
        int16_t* var_8_1 = eax_1
        int32_t var_c_1 = ecx_2
        void* i
        
        do
            if (ecx_2 == 0)
                *(eax_1 + *arg3) = esi_1.w
            else
                *(var_8_1 + *arg3) = (mods.dp.d(sx.q(ecx_2), 0xa)).w + 0x30
            
            ebx_1 += 1
            ecx_2 = divs.dp.d(sx.q(var_c_1), 0xa)
            eax_1 = var_8_1 - 2
            var_c_1 = ecx_2
            i = var_10_1
            var_10_1 -= 1
            var_8_1 = eax_1
        while (i != 1)
        esi_1 = arg4
    
    result = ebx_1 * 2
    *arg3 += result
    *esi_1 -= ebx_1

return result
