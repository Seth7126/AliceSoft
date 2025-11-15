// 函数: sub_679590
// 地址: 0x679590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t edx = arg3
int32_t var_4 = edx
int32_t result = arg2[2]
int32_t esi = arg2[4]
int32_t ebp_1 = arg2[6] * result
int32_t result_1 = result

if (esi s> 0)
    do
        int32_t result_2 = esi - ebx
        
        if (arg2[5] s< result_2)
            result_2 = arg2[5]
        
        int32_t ecx_1 = arg2[6] + ebx
        int32_t result_3 = arg2[7] - ecx_1
        
        if (result_2 s>= result_3)
            result_2 = result_3
        
        result = arg2[1] - ecx_1
        
        if (result_2 s>= result)
            result_2 = result
        
        if (result_2 s<= 0)
            break
        
        int32_t esi_1 = result_2 * result_1
        void* var_28_1
        int32_t eax_4
        
        if (arg4 == 0)
            eax_4 = arg2[0xa]
            var_28_1 = &arg2[0xa]
        else
            var_28_1 = &arg2[0xa]
            eax_4 = arg2[0xb]
        
        result = eax_4(edx, var_28_1, *(*arg2 + (ebx << 2)), ebp_1, esi_1)
        ebx += arg2[5]
        ebp_1 += esi_1
        esi = arg2[4]
        edx = var_4
    while (ebx s< esi)

return result
