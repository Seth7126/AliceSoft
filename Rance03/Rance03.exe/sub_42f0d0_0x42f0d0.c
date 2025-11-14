// 函数: sub_42f0d0
// 地址: 0x42f0d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_b8
int32_t eax_1 = __security_cookie ^ &var_b8
int32_t var_c4_2
int32_t* eax_6

if (arg2 - 0xa u> 0x25)
label_42f288:
    int32_t var_c4_9 = arg3
    int32_t var_74
    eax_6 = sub_4691f0(&var_74, "<%7d>")
    
    if (arg4 != eax_6)
        if (arg4[5] u>= 0x10)
            j__free(*arg4)
        
        arg4[5] = 0xf
        arg4[4] = 0
        *arg4 = 0
        eax_6 = sub_4030b0(arg4, eax_6)
    
    int32_t var_60
    
    if (var_60 u< 0x10)
        sub_69a5bc(eax_1 ^ &var_b8)
        return eax_6
    
    var_c4_2 = var_74
    goto label_42f2d5

switch (arg2 + &jump_table_42f2f0[3]:2)
    case &lookup_table_42f308
        int32_t var_c4 = arg3
        int32_t var_8c
        eax_6 = sub_408340(arg4, sub_4691f0(&var_8c, 0x6db0d8))
        int32_t var_78
        
        if (var_78 u< 0x10)
            sub_69a5bc(eax_1 ^ &var_b8)
            return eax_6
        
        var_c4_2 = var_8c
    label_42f2d5:
        eax_6 = j__free(var_c4_2)
        sub_69a5bc(eax_1 ^ &var_b8)
        return eax_6
    case &lookup_table_42f308[1]
        int32_t var_c8
        var_c8.q = _mm_cvtps_pd(arg3)
        void var_5c
        sub_408340(arg4, sub_4691f0(&var_5c, "%.5f"))
        int32_t eax_8 = sub_401fb0(&var_5c)
        sub_69a5bc(eax_1 ^ &var_b8)
        return eax_8
    case &lookup_table_42f308[2]
        int32_t* eax_10 = (*(**(arg1 + 8) + 4))(arg3)
        
        if (eax_10 == 0)
            int32_t* eax_11 = sub_402670(arg4, """")
            sub_69a5bc(eax_1 ^ &var_b8)
            return eax_11
        
        sub_402670(arg4, U""")
        sub_405780(arg4, (*(*eax_10 + 0x18))())
        int32_t* eax_14 = sub_405780(arg4, U""")
        sub_69a5bc(eax_1 ^ &var_b8)
        return eax_14
    case &lookup_table_42f308[3], &lookup_table_42f308[4], &lookup_table_42f308[5], 
            &lookup_table_42f308[6], &lookup_table_42f308[7], &lookup_table_42f308[8], 
            &lookup_table_42f308[9], &lookup_table_42f308[0xa], &lookup_table_42f308[0xb], 
            &lookup_table_42f308[0xc], &lookup_table_42f308[0xd], &lookup_table_42f308[0xe], 
            &lookup_table_42f308[0xf], &lookup_table_42f308[0x10], &lookup_table_42f308[0x12], 
            &lookup_table_42f308[0x13], &lookup_table_42f308[0x14], &lookup_table_42f308[0x15], 
            &lookup_table_42f308[0x16], &lookup_table_42f308[0x17], &lookup_table_42f308[0x18], 
            &lookup_table_42f308[0x19], &lookup_table_42f308[0x1a], &lookup_table_42f308[0x1b], 
            &lookup_table_42f308[0x1c], &lookup_table_42f308[0x1d], &lookup_table_42f308[0x1e], 
            &lookup_table_42f308[0x1f], &lookup_table_42f308[0x20], &lookup_table_42f308[0x21], 
            &lookup_table_42f308[0x22], &lookup_table_42f308[0x23], &lookup_table_42f308[0x24]
        goto label_42f288
    case &lookup_table_42f308[0x11]
        if (arg3 == 0)
            int32_t* eax_15 = sub_402670(arg4, "NULL")
            sub_69a5bc(eax_1 ^ &var_b8)
            return eax_15
        
        char* eax_17 = (***(arg1 + 0xc))(arg3)
        
        if (eax_17 == 0)
            int32_t* eax_18 = sub_402670(arg4, "???")
            sub_69a5bc(eax_1 ^ &var_b8)
            return eax_18
        
        sub_402670(arg4, U"&"")
        int32_t* eax_19 = sub_405780(arg4, eax_17)
        sub_69a5bc(eax_1 ^ &var_b8)
        return eax_19
    case &lookup_table_42f308[0x25]
        char const* const eax_20 = "true"
        
        if (arg3 == 0)
            eax_20 = "false"
        
        int32_t* eax_21 = sub_402670(arg4, eax_20)
        sub_69a5bc(eax_1 ^ &var_b8)
        return eax_21
