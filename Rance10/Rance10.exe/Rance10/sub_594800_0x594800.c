// 函数: sub_594800
// 地址: 0x594800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1
int32_t result
int32_t edx_1
edx_1:result = muls.dp.d(0x2aaaaaab, arg2 - ebp)
int32_t ebx_2 = (arg2 - ebp) s/ 0x18

if (ebx_2 s>= 2)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = sx.q(ebx_2)
    result = eax_1 - edx_3
    int32_t i = result s>> 1
    
    if (i s> 0)
        void* edi_2 = i * 0x18 + ebp
        
        do
            int128_t xmm0_1 = *(edi_2 - 0x18)
            edi_2 -= 0x18
            i -= 1
            int32_t var_2c_1 = arg1
            int128_t var_18 = xmm0_1
            int64_t var_8_1 = *(edi_2 + 0x10)
            result, arg1 = sub_594e30(&var_18, i, ebp, ebx_2, &var_18)
        while (i s> 0)

return result
