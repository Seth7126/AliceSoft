// 函数: sub_6806a0
// 地址: 0x6806a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t result
int32_t edx_1
edx_1:result = muls.dp.d(0x2aaaaaab, arg2 - arg1)
int32_t ebx_2 = (arg2 - arg1) s/ 0x18

if (ebx_2 s>= 2)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(ebx_2)
    result = eax_3 - edx_3
    int32_t i = result s>> 1
    
    if (i s> 0)
        int32_t* edi_2 = i * 0x18 + arg1
        
        do
            edi_2 -= 0x18
            int32_t result_1 = 0xf
            int32_t var_c_1 = 0
            i -= 1
            char var_1c[0x10]
            var_1c[0] = 0
            int32_t var_34_2 = sub_4056a0(&var_1c, edi_2)
            sub_680ad0(&var_1c, i, arg1, ebx_2, &var_1c)
            result = result_1
            
            if (result u>= 0x10)
                result = sub_403160(var_1c[0].d, result + 1, 1)
        while (i s> 0)

@__security_check_cookie@4(eax_1 ^ &var_20)
return result
