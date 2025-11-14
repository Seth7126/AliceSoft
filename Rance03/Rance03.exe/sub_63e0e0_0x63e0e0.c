// 函数: sub_63e0e0
// 地址: 0x63e0e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t var_20
int32_t eax_1 = __security_cookie ^ &var_20

if (arg4 != 0)
    int32_t eax_2 = *arg4
    __builtin_memset(&var_20, 0, 0x14)
    var_20:0xc.d = eax_2
    var_20:8.d = eax_2
    int32_t var_10_1 = arg4[1]
    void* eax_4 = sub_638110(&var_20, 8)
    int32_t var_c = 0
    int16_t var_8_1 = 0
    sub_63d7b0(0, &var_c, &var_20, 6)
    
    if (var_c != (*"vorbis")[0].d || var_8_1 != (*"is")[0].w)
        sub_69a5bc(eax_1 ^ &var_20)
        return 0xffffff7c
    
    if (eax_4 == 1)
        if (arg4[2] != 0 && *(arg3 + 8) == 0)
            int32_t eax_9 = sub_63db40(arg3, &var_20)
            sub_69a5bc(eax_1 ^ &var_20)
            return eax_9
    else if (eax_4 == 3)
        if (*(arg3 + 8) != 0)
            int32_t eax_8 = sub_63dc40(arg2, &var_20)
            sub_69a5bc(eax_1 ^ &var_20)
            return eax_8
    else if (eax_4 == 5 && *(arg3 + 8) != eax_4 - 5 && arg2[3] != eax_4 - 5)
        int32_t eax_7 = sub_63dd70(arg3, &var_20)
        sub_69a5bc(eax_1 ^ &var_20)
        return eax_7

sub_69a5bc(eax_1 ^ &var_20)
return 0xffffff7b
