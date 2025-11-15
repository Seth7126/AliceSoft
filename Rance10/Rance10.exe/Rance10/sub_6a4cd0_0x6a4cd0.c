// 函数: sub_6a4cd0
// 地址: 0x6a4cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_dc
int32_t eax_1 = __security_cookie ^ &var_dc
int32_t eax_2 = arg4 - 0x10
char* edx

if (eax_2 u> 0x2540be30)
    edx = "gamma value out of range"
else
    if ((*(arg3 + 0x74) & 0x8000) == 0 || (*(arg2 + 0x4a) & 8) == 0)
        if (*(arg2 + 0x4a) s>= 0)
            eax_2 = sub_6a4b60(eax_2, arg2, arg3, arg4, 1)
            
            if (eax_2 != 0)
                *(arg2 + 0x4a) |= 9
                *arg2 = arg4
        
        @__security_check_cookie@4(eax_1 ^ &var_dc)
        return eax_2
    
    edx = "duplicate"

*(arg2 + 0x4a) |= 0x8000

if ((*(arg3 + 0x74) & 0x8000) != 0)
    sub_6a7650(0x8000, &var_dc, arg3, edx)
    edx = &var_dc
else if ((*(arg3 + 0x78) & &__dos_header) == 0)
    sub_6a7500(arg3, edx)
    noreturn

int32_t eax_3 = sub_6a7530(arg3, edx)
@__security_check_cookie@4(eax_1 ^ &var_dc)
return eax_3
