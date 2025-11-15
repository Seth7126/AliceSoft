// 函数: sub_5f1680
// 地址: 0x5f1680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1
int32_t esi_1 = arg2 - ebp
int32_t result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)
int32_t ebx_2 = esi_1 s/ 0x1c

if (ebx_2 s>= 2)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = sx.q(ebx_2)
    result = eax_1 - edx_3
    int32_t i = result s>> 1
    
    if (i s> 0)
        void* edi_2 = i * 0x1c + ebp
        
        do
            int128_t xmm0_1 = *(edi_2 - 0x1c)
            int32_t eax_4 = *(edi_2 - 4)
            edi_2 -= 0x1c
            int32_t var_30_1 = arg1
            int32_t var_4_1 = eax_4
            i -= 1
            int128_t var_1c = xmm0_1
            int64_t var_c_1 = *(edi_2 + 0x10)
            result, arg1 = sub_5f1c00(&var_1c, i, ebp, ebx_2, &var_1c)
        while (i s> 0)

return result
