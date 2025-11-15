// 函数: sub_6a4a20
// 地址: 0x6a4a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint8_t var_c
int32_t eax_1 = __security_cookie ^ &var_c
char var_9 = arg2.b
var_c = (arg2 u>> 0x18).b
uint8_t var_b = (arg2 u>> 0x10).b
uint8_t var_a = (arg2 u>> 8).b
char var_8 = 0

if (arg1 != 0)
    int32_t eax_8 = *(arg1 + 0x258)
    
    if (eax_8 != 0)
        int32_t edx = *(arg1 + 0x25c)
        int32_t* ecx_1 = eax_8 * 5 + edx
        
        do
            ecx_1 -= 5
            
            if (var_c.d == *ecx_1)
                uint32_t result = zx.d(ecx_1[1].b)
                @__security_check_cookie@4(eax_1 ^ &var_c)
                return result
        while (ecx_1 u> edx)

@__security_check_cookie@4(eax_1 ^ &var_c)
return 0
