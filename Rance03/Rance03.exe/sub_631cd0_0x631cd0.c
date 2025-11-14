// 函数: sub_631cd0
// 地址: 0x631cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_10
int32_t eax_1 = __security_cookie ^ &var_10
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax_2.b & 4) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_3 = sub_62a7c0(arg3, "out of place")
    sub_69a5bc(eax_1 ^ &var_10)
    return eax_3

if (arg2 != 0 && (*(arg2 + 8) & 0x100) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_4 = sub_62a7c0(arg3, "duplicate")
    sub_69a5bc(eax_1 ^ &var_10)
    return eax_4

if (arg4 != 9)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_5 = sub_62a7c0(arg3, "invalid")
    sub_69a5bc(eax_1 ^ &var_10)
    return eax_5

sub_62fc80(eax_2, &var_10, arg3, 9)
uint32_t eax_6 = sub_62fcc0(arg3, nullptr)

if (eax_6 == 0)
    eax_6.b = var_10
    char var_f
    char var_e
    char var_d
    uint32_t ecx_16 =
        (((((zx.d(eax_6.b) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
    char var_c
    uint32_t eax_9
    eax_9.b = var_c
    char var_9
    eax_6 = zx.d(var_9)
    char var_b
    char var_a
    uint32_t edx_10 = (((((zx.d(eax_9.b) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + eax_6
    
    if (arg2 != 0)
        char var_8
        eax_6.b = var_8
        *(arg2 + 8) |= 0x100
        *(arg2 + 0xb4) = ecx_16
        *(arg2 + 0xb8) = edx_10
        *(arg2 + 0xbc) = eax_6.b

sub_69a5bc(eax_1 ^ &var_10)
return eax_6
