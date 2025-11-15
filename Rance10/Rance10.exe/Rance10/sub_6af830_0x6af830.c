// 函数: sub_6af830
// 地址: 0x6af830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = (*(arg3 + 0x74)).b

if ((eax & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax & 4) != 0)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "out of place") __tailcall

if (arg2 != 0 && (*(arg2 + 8) & 0x4000) != 0)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "duplicate") __tailcall

if (arg4 u< 4)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "invalid") __tailcall

char* edi = *(arg3 + 0x2b8)

if (edi == 0)
label_6af8f0:
    
    if (arg4 == 0xffffffff)
        sub_6a77d0(arg3, "out of memory")
        return sub_6ace40(arg3, arg4) __tailcall
    
    int32_t eax_5 = *(arg3 + 0x274)
    char* eax_6
    
    if (eax_5 == 0)
        eax_6 = sub_705e22()
    else
        eax_6 = eax_5(arg3, arg4 + 1)
    
    edi = eax_6
    
    if (edi == 0)
        sub_6a77d0(arg3, "out of memory")
        return sub_6ace40(arg3, arg4) __tailcall
    
    *(arg3 + 0x2b8) = edi
    *(arg3 + 0x2bc) = arg4 + 1
else if (arg4 + 1 u> *(arg3 + 0x2bc))
    int32_t eax_4 = *(arg3 + 0x278)
    *(arg3 + 0x2b8) = 0
    *(arg3 + 0x2bc) = 0
    
    if (eax_4 == 0)
        _free(edi)
    else
        eax_4(arg3, edi)
    
    goto label_6af8f0

int32_t eax_7 = *(arg3 + 0x5c)

if (eax_7 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

sub_6a4030(eax_7(arg3, edi, arg4), edi, arg3, arg4)
*(edi + arg4) = 0
int32_t result = sub_6ace40(arg3, nullptr)

if (result != 0)
    return result

result.b = *edi

if (result.b != 1 && result.b != 2)
    return sub_6a77d0(arg3, "invalid unit") __tailcall

int32_t var_c = 1
int32_t var_8 = 0

if (sub_6a6430(&var_8, arg4, edi, &var_8, &var_c) != 0)
    int32_t ebp_1 = var_c
    
    if (ebp_1 u< arg4)
        int32_t eax_11
        eax_11.b = edi[ebp_1]
        var_c = ebp_1 + 1
        
        if (eax_11.b == 0)
            if ((var_8 & 0x188) != 0x108)
                return sub_6a77d0(arg3, "non-positive width") __tailcall
            
            var_8 = 0
            
            if (sub_6a6430(&var_8, arg4, edi, &var_8, &var_c) == 0 || var_c != arg4)
                return sub_6a77d0(arg3, "bad height format") __tailcall
            
            if ((var_8 & 0x188) != 0x108)
                return sub_6a77d0(arg3, "non-positive height") __tailcall
            
            char* eax_22 = zx.d(result.b)
            return sub_6b1d10(eax_22, arg2, arg3, eax_22, &edi[1], &edi[ebp_1 + 1])

return sub_6a77d0(arg3, "bad width format") __tailcall
