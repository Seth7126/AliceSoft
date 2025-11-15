// 函数: sub_605990
// 地址: 0x605990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t edi = sub_6227b0(arg4, arg2)

if (edi != 0)
    if (arg3 == 0x7fffffff)
        sub_403360(&var_1c, 0x75d5e3)
        void* ebx
        ebx.b = sub_625800(edi, &var_1c)
        int32_t var_8
        
        if (var_8 u>= 0x10)
            sub_403160(var_1c, var_8 + 1, 1)
        
        @__security_check_cookie@4(eax_1 ^ &var_1c)
        return ebx.b
    
    if (arg3 s>= 0)
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x20) - *(arg1 + 0x1c))
        int32_t edx_2 = edx_1 s>> 2
        
        if (arg3 s< (edx_2 u>> 0x1f) + edx_2)
            int32_t eax_10 = sub_625800(edi, *(arg1 + 0x1c) + arg3 * 0x18)
            @__security_check_cookie@4(eax_1 ^ &var_1c)
            return eax_10

int32_t eax_3
eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &var_1c)
return eax_3
