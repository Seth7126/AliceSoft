// 函数: sub_6a5540
// 地址: 0x6a5540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t eax = sub_6a5050(&var_28, arg4)

if (eax == 0)
    void var_48
    eax = sub_6a4df0(&var_48, &var_28)
    
    if (eax == 0)
        int32_t eax_1 = sub_6a5380(eax, &var_48, arg4, 5)
        int32_t eax_2 = neg.d(eax_1)
        eax = sbb.d(eax_2, eax_2, eax_1 != 0) + 1

if (eax == 0)
    return sub_6a5450(&var_28, arg2, arg3, arg4, &var_28, arg5)

if (eax != 1)
    *(arg2 + 0x4a) |= 0x8000
    sub_6a7500(arg3, "internal error checking chromaticities")
    noreturn

*(arg2 + 0x4a) |= 0x8000
sub_6a75b0(arg3, "invalid chromaticities")
return 0
