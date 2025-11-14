// 函数: sub_63e030
// 地址: 0x63e030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t var_20
int32_t eax_1 = __security_cookie ^ &var_20

if (arg1 != 0)
    bool cond:0_1 = arg1[2] == 0
    int32_t eax_2 = *arg1
    __builtin_memset(&var_20, 0, 0x14)
    var_20:0xc.d = eax_2
    var_20:8.d = eax_2
    int32_t var_10_1 = arg1[1]
    
    if (not(cond:0_1) && sub_638110(&var_20, 8) == 1)
        int32_t var_c = 0
        int16_t var_8_1 = 0
        sub_63d7b0(0, &var_c, &var_20, 6)
        
        if (var_c == (*"vorbis")[0].d && var_8_1 == (*"is")[0].w)
            sub_69a5bc(eax_1 ^ &var_20)
            return 1

sub_69a5bc(eax_1 ^ &var_20)
return 0
