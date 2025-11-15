// 函数: sub_594090
// 地址: 0x594090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1
int32_t result
int32_t edx_1
edx_1:result = muls.dp.d(0x2aaaaaab, arg2 - ebp)
int32_t ebx_2 = (arg2 - ebp) s/ 0xc

if (ebx_2 s>= 2)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = sx.q(ebx_2)
    result = eax_1 - edx_3
    int32_t i = result s>> 1
    
    if (i s> 0)
        int64_t* edi_2 = i * 0xc + ebp
        
        do
            int32_t eax_3 = *(edi_2 - 4)
            edi_2 -= 0xc
            i -= 1
            int32_t var_20_1 = arg1
            int32_t var_4_1 = eax_3
            int64_t var_c = *edi_2
            result, arg1 = sub_594cd0(&var_c, i, ebp, ebx_2, &var_c)
        while (i s> 0)

return result
