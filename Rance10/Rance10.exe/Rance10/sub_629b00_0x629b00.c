// 函数: sub_629b00
// 地址: 0x629b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t result

if (sub_629c10(arg1 - 0x20, arg2).b != 0 && *(*(*(arg1 + 0x18) + 0x2c) + arg2 * 0x70 + 0x34) == 0xc)
    int32_t eax_4
    
    if (*(arg1 - 0xc) != 0)
        eax_4 = *(arg1 - 0x10)
    else
        eax_4 = 0
    
    result = sub_6227b0(*(arg1 + 4), *(eax_4 + (arg2 << 2)))
    
    if (result != 0)
        void* var_24
        sub_403360(&var_24, arg3)
        void* ebx
        ebx.b = sub_625800(result, &var_24)
        int32_t var_10
        
        if (var_10 u>= 0x10)
            sub_403160(var_24, var_10 + 1, 1)
        
        @__security_check_cookie@4(eax_1 ^ &var_2c)
        return ebx.b

result.b = 0
@__security_check_cookie@4(eax_1 ^ &var_2c)
return result
