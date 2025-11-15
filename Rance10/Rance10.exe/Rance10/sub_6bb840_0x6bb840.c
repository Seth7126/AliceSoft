// 函数: sub_6bb840
// 地址: 0x6bb840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg3[1]
int32_t ebx = *arg3
float xmm4 = *(result + 0x1f0)
int32_t esi = 0
int32_t* var_8 = arg3

if (ebx s> 0)
    do
        int32_t edx = arg3[5]
        int32_t eax = esi + 1
        float xmm2_1 = *(arg4 + (esi << 2))
        int32_t i = *(edx + (esi << 2))
        
        if (eax s< ebx)
            while (*(edx + (esi << 2) + 4) == i)
                esi = eax
                eax = esi + 1
                xmm2_1 = _mm_max_ss(*(arg4 + (esi << 2)), xmm2_1)
                
                if (eax s>= ebx)
                    break
        
        result = arg5
        
        if (not(xmm2_1 + 6f f<= *(result + (esi << 2))))
            int32_t ecx = arg3[8]
            int32_t var_1c_1 = ecx
            int32_t edi_1 = i s>> ecx.b
            
            if (edi_1 s>= 0x11)
                edi_1 = 0x10
            
            int32_t edx_1 = 0
            
            if (edi_1 s>= 0)
                edx_1 = edi_1
            
            result = sub_6bb780(arg2, *(arg2 + (edx_1 << 2)), arg6, xmm2_1, 
                *(edx + (esi << 2)) - var_8[7], var_8[0xa], var_8[9], xmm4 - arg7)
            arg3 = var_8
        
        esi += 1
    while (esi s< ebx)

return result
