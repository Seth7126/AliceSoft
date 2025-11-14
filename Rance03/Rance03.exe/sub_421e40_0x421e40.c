// 函数: sub_421e40
// 地址: 0x421e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t eax_2 = *(arg1 + 4)

if (eax_2 == 0xa || eax_2 == 2 || eax_2 == 0x12 || eax_2 == 0x2f || eax_2 == 0x30 || eax_2 == 0x33)
    int32_t eax_8 = *(arg1 + 0x44)
    sub_69a5bc(eax_1 ^ &var_2c)
    return eax_8

if (eax_2 == 0xb || eax_2 == 3 || eax_2 == 0x13)
    int32_t eax_7 = int.d(fconvert.t(*(arg1 + 0x48)))
    sub_69a5bc(eax_1 ^ &var_2c)
    return eax_7

if (eax_2 == 0xc || eax_2 == 4 || eax_2 == 0x14)
    void* ecx = arg1 + 0x4c
    int32_t var_28 = 0
    
    if (*(ecx + 0x14) u>= 0x10)
        ecx = *ecx
    
    int32_t* var_24
    sub_401f60(&var_24, ecx)
    int32_t* var_34_2 = &var_28
    int32_t* eax_3 = &var_24
    int32_t var_10
    
    if (var_10 u>= 0x10)
        eax_3 = var_24
    
    int32_t ebx
    ebx.b = sub_69b31c(eax_3, 0x6dcf3c) == 1
    
    if (var_10 u>= 0x10)
        j__free(var_24)
    
    if (ebx.b != 0)
        int32_t eax_5 = var_28
        sub_69a5bc(eax_1 ^ &var_2c)
        return eax_5

sub_69a5bc(eax_1 ^ &var_2c)
return 0
