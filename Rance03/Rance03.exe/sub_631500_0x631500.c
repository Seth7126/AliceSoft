// 函数: sub_631500
// 地址: 0x631500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t var_110
int32_t var_4 = __security_cookie ^ &var_110
char ecx = (*(arg3 + 0x74)).b

if ((ecx & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((ecx & 4) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_2 = sub_62a7c0(arg3, "out of place")
    sub_69a5bc(var_4 ^ &var_110)
    return eax_2

if (arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_3 = sub_62a7c0(arg3, "duplicate")
    sub_69a5bc(var_4 ^ &var_110)
    return eax_3

int32_t eax_1
eax_1.b = *(arg3 + 0x157)
void var_104
char* edx_3

if (eax_1.b == 0)
    if (arg4 != 2)
        sub_62fcc0(arg3, arg4)
        edx_3 = "invalid"
    label_631776:
        int32_t* eax_15 = sub_62a7c0(arg3, edx_3)
        sub_69a5bc(var_4 ^ &var_110)
        return eax_15
    
    sub_62fc80(eax_1, &var_110, arg3, 2)
    *(arg3 + 0x150) = 1
    int16_t eax_4 = var_110
    *(arg3 + 0x1c0) = zx.w(eax_4.b) * 0x100 + zx.w(eax_4:1.b)
else if (eax_1.b != 2)
    if (eax_1.b != 3)
        sub_62fcc0(arg3, arg4)
        edx_3 = "invalid with alpha channel"
        goto label_631776
    
    if ((ecx & 2) == 0)
        sub_62fcc0(arg3, arg4)
        edx_3 = "out of place"
        goto label_631776
    
    uint32_t eax_9 = zx.d(*(arg3 + 0x148))
    
    if (arg4 u> eax_9 || arg4 u> 0x100 || arg4 == 0)
        sub_62fcc0(arg3, arg4)
        edx_3 = "invalid"
        goto label_631776
    
    sub_62fc80(eax_9, &var_104, arg3, arg4)
    *(arg3 + 0x150) = arg4.w
else
    if (arg4 != 6)
        sub_62fcc0(arg3, arg4)
        edx_3 = "invalid"
        goto label_631776
    
    char var_10c
    sub_62fc80(eax_1, &var_10c, arg3, 6)
    uint16_t ecx_12 = zx.w(var_10c) * 0x100
    *(arg3 + 0x150) = 1
    char var_10b
    *(arg3 + 0x1ba) = ecx_12 + zx.w(var_10b)
    char var_10a
    char var_109
    *(arg3 + 0x1bc) = zx.w(var_10a) * 0x100 + zx.w(var_109)
    char var_108
    char var_107
    *(arg3 + 0x1be) = zx.w(var_108) * 0x100 + zx.w(var_107)

if (sub_62fcc0(arg3, nullptr) == 0)
    int32_t eax_14 = sub_6349b0(&var_104, arg2, arg3, &var_104, zx.d(*(arg3 + 0x150)), arg3 + 0x1b8)
    sub_69a5bc(var_4 ^ &var_110)
    return eax_14

*(arg3 + 0x150) = 0
sub_69a5bc(var_4 ^ &var_110)
return 0
