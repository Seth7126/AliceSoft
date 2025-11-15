// 函数: sub_5f1230
// 地址: 0x5f1230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1
int32_t result
int32_t edx_1
edx_1:result = muls.dp.d(0x66666667, arg2 - ebp)
int32_t ebx_2 = (arg2 - ebp) s/ 0x14

if (ebx_2 s>= 2)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = sx.q(ebx_2)
    result = eax_1 - edx_3
    int32_t i = result s>> 1
    
    if (i s> 0)
        int128_t* edi_2 = i * 0x14 + ebp
        
        do
            int32_t eax_3 = *(edi_2 - 4)
            edi_2 -= 0x14
            int32_t var_28_1 = arg1
            int32_t var_4_1 = eax_3
            i -= 1
            int128_t var_14 = *edi_2
            result, arg1 = sub_5f1aa0(&var_14, i, ebp, ebx_2, &var_14)
        while (i s> 0)

return result
