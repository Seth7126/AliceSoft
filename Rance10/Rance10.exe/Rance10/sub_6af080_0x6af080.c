// 函数: sub_6af080
// 地址: 0x6af080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t var_2e0
int32_t eax_1 = __security_cookie ^ &var_2e0
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax_2 & 4) != 0 || (eax_2 & 2) == 0)
    int32_t eax_12 = sub_6ace40(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6a7750(arg3, "out of place")
        noreturn
    
    char var_2dc[0xd8]
    sub_6a7650(eax_12, &var_2dc, arg3, "out of place")
    int32_t eax_13 = sub_6a7530(arg3, &var_2dc)
    @__security_check_cookie@4(eax_1 ^ &var_2e0)
    return eax_13

if (arg2 != 0 && (*(arg2 + 8) & 0x40) != 0)
    sub_6ace40(arg3, arg4)
    int32_t eax_3 = sub_6a77d0(arg3, "duplicate")
    @__security_check_cookie@4(eax_1 ^ &var_2e0)
    return eax_3

uint32_t edi_1 = arg4 u>> 1

if (edi_1 != zx.d(*(arg3 + 0x148)) || edi_1 u> 0x100)
    sub_6ace40(arg3, arg4)
    int32_t eax_11 = sub_6a77d0(arg3, "invalid")
    @__security_check_cookie@4(eax_1 ^ &var_2e0)
    return eax_11

int32_t ebx = 0
int16_t var_204[0x100]

if (edi_1 != 0)
    do
        int32_t eax_5 = *(arg3 + 0x5c)
        
        if (eax_5 == 0)
            sub_6a7500(arg3, "Call to NULL read function")
            noreturn
        
        sub_6a4030(eax_5(arg3, &var_2e0, 2), &var_2e0, arg3, 2)
        int16_t eax_7 = var_2e0
        var_204[ebx] = zx.w(eax_7.b) * 0x100 + zx.w(eax_7:1.b)
        ebx += 1
    while (ebx u< edi_1)

int32_t eax_9 = sub_6ace40(arg3, nullptr)

if (eax_9 == 0)
    eax_9 = sub_6b18f0(&var_204, arg2, arg3, &var_204)

@__security_check_cookie@4(eax_1 ^ &var_2e0)
return eax_9
