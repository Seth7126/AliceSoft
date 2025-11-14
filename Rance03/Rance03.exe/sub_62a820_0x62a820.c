// 函数: sub_62a820
// 地址: 0x62a820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_dc
int32_t eax_1 = __security_cookie ^ &var_dc

if ((*(arg3 + 0x74) & 0x8000) != 0)
    if (arg4 s>= 2)
        int32_t* eax_3 = sub_62a7c0(arg3, arg2)
        sub_69a5bc(eax_1 ^ &var_dc)
        return eax_3
    
    sub_62a640(eax_1, &var_dc, arg3, arg2)
    arg2 = &var_dc
else if (arg4 s>= 1)
    if ((*(arg3 + 0x78) & &__dos_header) == 0)
        sub_62a520(arg3, arg2)
        noreturn
else if ((*(arg3 + 0x78) & 0x200000) == 0)
    sub_62a520(arg3, arg2)
    noreturn

int32_t* eax_2 = sub_62a550(arg3, arg2)
sub_69a5bc(eax_1 ^ &var_dc)
return eax_2
