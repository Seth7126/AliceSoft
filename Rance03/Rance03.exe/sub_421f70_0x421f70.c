// 函数: sub_421f70
// 地址: 0x421f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t result = *(arg1 + 4)

if (result == 0xa || result == 2 || result == 0x12 || result == 0x2f || result == 0x30
        || result == 0x33)
    _mm_cvtepi32_ps(zx.o(*(arg1 + 0x44)))
    sub_69a5bc(eax_1 ^ &var_2c)
    return result

if (result == 0xb || result == 3 || result == 0x13)
    *(arg1 + 0x48)
    sub_69a5bc(eax_1 ^ &var_2c)
    return result

if (result == 0xc || result == 4 || result == 0x14)
    void* ecx = arg1 + 0x4c
    int32_t var_28 = 0
    
    if (*(ecx + 0x14) u>= 0x10)
        ecx = *ecx
    
    int32_t* var_24
    sub_401f60(&var_24, ecx)
    int32_t* var_34_2 = &var_28
    int32_t* eax_2 = &var_24
    int32_t var_10
    
    if (var_10 u>= 0x10)
        eax_2 = var_24
    
    result = sub_69b31c(eax_2, 0x6dcf38)
    int32_t ebx
    ebx.b = result == 1
    
    if (var_10 u>= 0x10)
        result = j__free(var_24)
    
    if (ebx.b != 0)
        sub_69a5bc(eax_1 ^ &var_2c)
        return result

sub_69a5bc(eax_1 ^ &var_2c)
return result
