// 函数: sub_5d4f40
// 地址: 0x5d4f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14[0x4]
uint32_t var_4 = __security_cookie ^ &var_14
uint32_t eax_1

if (*(arg1 + 0x48) == 0)
    *arg3 = 0
    eax_1.b = 1
    sub_69a5bc(var_4 ^ &var_14)
    return eax_1

if (*(arg1 + 0x38) == 0)
    *arg3 = *(arg1 + 0xc) u>> 2
    uint32_t eax_3
    eax_3.b = 1
    sub_69a5bc(var_4 ^ &var_14)
    return eax_3

if (*(arg1 + 0x44) s>= arg2 && arg2 s> 0 && sub_5d46f0(arg1, &var_14).b != 0)
    int32_t eax_4 = *(arg1 + 0x38)
    
    if (eax_4 - arg2 + 1 u< eax_4 + 1)
        *arg3 = var_14[eax_4 - arg2 + 1]
        int32_t eax_5
        eax_5.b = 1
        sub_69a5bc(var_4 ^ &var_14)
        return eax_5

eax_1.b = 0
sub_69a5bc(var_4 ^ &var_14)
return eax_1
