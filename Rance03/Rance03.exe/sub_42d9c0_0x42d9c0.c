// 函数: sub_42d9c0
// 地址: 0x42d9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t eax_6 =
    (*(**(arg1 + 8) + 0x18))((*(**(arg1 + 8) + 0x30))((*(**(arg1 + 8) + 0x2c))() - 1 - arg2 - 1))
char* eax_7 = (***(arg1 + 0xc))(eax_6)

if (eax_7 == 0)
    eax_7.b = 0
    sub_69a5bc(eax_1 ^ &var_24)
    return eax_7

int32_t var_20
int32_t* eax_8 = sub_42da80(&var_20, eax_7)

if (arg3 != eax_8)
    if (arg3[5] u>= 0x10)
        j__free(*arg3)
    
    arg3[5] = 0xf
    arg3[4] = 0
    *arg3 = 0
    sub_4030b0(arg3, eax_8)

int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

eax_8.b = 1
sub_69a5bc(eax_1 ^ &var_24)
return eax_8
