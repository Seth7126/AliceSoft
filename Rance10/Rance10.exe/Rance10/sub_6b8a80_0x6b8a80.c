// 函数: sub_6b8a80
// 地址: 0x6b8a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t var_20
int32_t eax_1 = __security_cookie ^ &var_20

if (arg1 != 0)
    bool cond:0_1 = arg1[2] == 0
    int32_t eax_2 = *arg1
    __builtin_memset(&var_20, 0, 0x14)
    var_20:0xc.d = eax_2
    var_20:8.d = eax_2
    int32_t var_10_1 = arg1[1]
    
    if (not(cond:0_1) && sub_6b2ec0(&var_20, 8) == 1)
        int32_t var_c = 0
        int32_t* esi_1 = &var_c
        int16_t var_8_1 = 0
        int32_t i_1 = 6
        int32_t i
        
        do
            *esi_1 = sub_6b2ec0(&var_20, 8)
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (var_c == (*"vorbis")[0].d && var_8_1 == (*"is")[0].w)
            @__security_check_cookie@4(eax_1 ^ &var_20)
            return 1

@__security_check_cookie@4(eax_1 ^ &var_20)
return 0
