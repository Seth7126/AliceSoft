// 函数: sub_6285f0
// 地址: 0x6285f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
int32_t eax = sub_628100(&var_28, arg4)

if (eax == 0)
    void var_48
    eax = sub_627fc0(&var_48, &var_28)
    
    if (eax == 0)
        int32_t eax_1 = sub_628430(eax, &var_48, arg4, 5)
        int32_t eax_2 = neg.d(eax_1)
        eax = sbb.d(eax_2, eax_2, eax_1 != 0) + 1

if (eax == 0)
    return sub_628500(&var_28, arg2, arg3, arg4, &var_28, arg5)

if (eax != 1)
    *(arg2 + 0x4a) |= 0x8000
    sub_62a520(arg3, "internal error checking chromaticities")
    noreturn

*(arg2 + 0x4a) |= 0x8000
sub_62a5c0(arg3, "invalid chromaticities")
return 0
