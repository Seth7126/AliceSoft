// 函数: sub_621500
// 地址: 0x621500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 1

if (arg8 == 0 || *arg8 != 0x31)
    return 0xfffffffa

if (arg3 == 0)
    return arg3 - 2

bool cond:0 = *(arg3 + 0x20) != 0
*(arg3 + 0x18) = 0

if (not(cond:0))
    *(arg3 + 0x20) = sub_627020
    *(arg3 + 0x28) = 0

if (*(arg3 + 0x24) == 0)
    *(arg3 + 0x24) = sub_627040

int32_t ebx = arg5

if (arg2 == 0xffffffff)
    arg2 = 6

if (ebx s< 0)
    esi = 0
    ebx = neg.d(ebx)
else if (ebx s> 0xf)
    esi = 2
    ebx -= 0x10

if (arg6 - 1 u> 8 || arg4 != 8 || ebx - 8 u> 7 || arg2 u> 9 || arg7 u> 4)
    return 0xfffffffe

if (ebx == 8)
    ebx = 9

void** eax_5 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1, 0x16c4)

if (eax_5 != 0)
    *(arg3 + 0x1c) = eax_5
    eax_5[6] = esi
    int32_t esi_1 = 1 << ebx.b
    eax_5[0xc] = ebx
    *eax_5 = arg3
    eax_5[0xd] = esi_1 - 1
    eax_5[7] = 0
    int32_t eax_7 = 1 << (arg6 + 7).b
    eax_5[0x13] = eax_7
    eax_5[0x15] = eax_7 - 1
    eax_5[0x14] = arg6 + 7
    eax_5[0xb] = esi_1
    eax_5[0x16] = (arg6 + 9) u/ 3
    int32_t eax_11 = (*(arg3 + 0x20))(*(arg3 + 0x28), esi_1, 2)
    int32_t var_24_1 = eax_5[0xb]
    eax_5[0xe] = eax_11
    int32_t eax_13 = (*(arg3 + 0x20))(*(arg3 + 0x28), var_24_1, 2)
    int32_t var_30_1 = eax_5[0x13]
    eax_5[0x10] = eax_13
    eax_5[0x11] = (*(arg3 + 0x20))(*(arg3 + 0x28), var_30_1, 2)
    eax_5[0x5b0] = 0
    int32_t eax_16 = 1 << (arg6.b + 6)
    eax_5[0x5a7] = eax_16
    int32_t eax_18 = (*(arg3 + 0x20))(*(arg3 + 0x28), eax_16, 4)
    int32_t esi_2 = eax_5[0x5a7]
    bool cond:3_1 = eax_5[0xe] == 0
    eax_5[2] = eax_18
    eax_5[3] = esi_2 << 2
    
    if (not(cond:3_1) && eax_5[0x10] != 0 && eax_5[0x11] != 0 && eax_18 != 0)
        eax_5[9].b = 8
        eax_5[0x5a9] = eax_18 + (esi_2 u>> 1 << 1)
        eax_5[0x5a6] = esi_2 * 3 + eax_18
        eax_5[0x21] = arg2
        eax_5[0x22] = arg7
        return sub_6217b0(arg3) __tailcall
    
    eax_5[1] = 0x29a
    *(arg3 + 0x18) = "insufficient memory"
    sub_6220b0(arg3)

return 0xfffffffc
