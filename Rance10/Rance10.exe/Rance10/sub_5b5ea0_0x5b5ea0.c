// 函数: sub_5b5ea0
// 地址: 0x5b5ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_88 = &var_4
int32_t result = (arg2 - arg1) s/ 0x6c
int32_t result_1 = result

if (result s>= 2)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(result)
    result = eax_3 - edx_3
    int32_t i = result s>> 1
    
    if (i s> 0)
        result = arg1
        int32_t ebp_2 = i * 0x6c + result
        
        do
            ebp_2 -= 0x6c
            void var_78
            int32_t var_94_1 = __builtin_memcpy(&var_78, ebp_2, 0x6c)
            i -= 1
            sub_5b6140(result, i, result, result_1, &var_78)
            result = arg1
        while (i s> 0)

*var_88
return result
