// 函数: sub_6b8b40
// 地址: 0x6b8b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t eax_1 = __security_cookie ^ &var_28

if (arg4 != 0)
    int32_t eax_2 = *arg4
    int128_t var_20
    __builtin_memset(&var_20, 0, 0x14)
    var_20:0xc.d = eax_2
    var_20:8.d = eax_2
    int32_t var_10_1 = arg4[1]
    void* eax_4 = sub_6b2ec0(&var_20, 8)
    int32_t var_c
    int32_t* esi_1 = &var_c
    var_c = 0
    int16_t var_8_1 = 0
    int32_t i_1 = 6
    int32_t i
    
    do
        *esi_1 = sub_6b2ec0(&var_20, 8)
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (var_c != (*"vorbis")[0].d || var_8_1 != (*"is")[0].w)
        @__security_check_cookie@4(eax_1 ^ &var_28)
        return 0xffffff7c
    
    if (eax_4 == 1)
        if (arg4[2] != 0 && arg3[2] == 0)
            int32_t eax_11 = sub_6b8550(arg3, &var_20)
            @__security_check_cookie@4(eax_1 ^ &var_28)
            return eax_11
    else if (eax_4 == 3)
        if (arg3[2] != 0)
            int32_t eax_9 = sub_6b8650(arg2, &var_20)
            @__security_check_cookie@4(eax_1 ^ &var_28)
            return eax_9
    else if (eax_4 == 5 && arg3[2] != eax_4 - 5 && arg2[3] != eax_4 - 5)
        int32_t eax_8 = sub_6b87c0(arg3, &var_20)
        @__security_check_cookie@4(eax_1 ^ &var_28)
        return eax_8

@__security_check_cookie@4(eax_1 ^ &var_28)
return 0xffffff7b
