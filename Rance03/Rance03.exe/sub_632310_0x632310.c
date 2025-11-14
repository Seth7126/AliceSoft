// 函数: sub_632310
// 地址: 0x632310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_18
int32_t eax_1 = __security_cookie ^ &var_18
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

int32_t* eax_3

if (arg2 == 0 || (*(arg2 + 8) & 0x200) == 0)
    if ((eax_2.b & 4) != 0)
        *(arg3 + 0x74) = eax_2 | 8
    
    if (arg4 == 7)
        int32_t eax_5 = *(arg3 + 0x5c)
        
        if (eax_5 == 0)
            sub_62a520(arg3, "Call to NULL read function")
            noreturn
        
        char var_c
        sub_627190(eax_5(arg3, &var_c, 7), &var_c, arg3, 7)
        eax_3 = sub_62fcc0(arg3, nullptr)
        
        if (eax_3 == 0)
            char var_6
            char var_e = var_6
            char var_7
            char var_f = var_7
            char var_8
            char var_10 = var_8
            char var_9
            char var_11 = var_9
            char var_a
            char var_12 = var_a
            char var_b
            uint16_t var_14 = zx.w(var_c) * 0x100 + zx.w(var_b)
            int32_t eax_14 = sub_634940(&var_14, arg2, arg3, &var_14)
            sub_69a5bc(eax_1 ^ &var_18)
            return eax_14
    else
        sub_62fcc0(arg3, arg4)
        eax_3 = sub_62a7c0(arg3, "invalid")
else
    sub_62fcc0(arg3, arg4)
    eax_3 = sub_62a7c0(arg3, "duplicate")

sub_69a5bc(eax_1 ^ &var_18)
return eax_3
