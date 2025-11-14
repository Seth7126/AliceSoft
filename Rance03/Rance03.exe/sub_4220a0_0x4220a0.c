// 函数: sub_4220a0
// 地址: 0x4220a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t eax = *(arg1 + 4)

if (eax == 0x2f || eax == 0x30 || eax == 0x33)
    char* eax_6 = "true"
    
    if (*(arg1 + 0x44) == 0)
        eax_6 = "false"
    
    sub_401f60(arg2, eax_6)
    return arg2

if (eax == 0xa || eax == 2 || eax == 0x12)
    int32_t var_c_1 = *(arg1 + 0x44)
    sub_4691f0(arg2, 0x6da990)
    return arg2

if (eax == 0xb || eax == 3 || eax == 0x13)
    int32_t var_10
    var_10.q = _mm_cvtps_pd(*(arg1 + 0x48))
    sub_4691f0(arg2, 0x6da98c)
    return arg2

if (eax != 0xc && eax != 4 && eax != 0x14)
    sub_401f60(arg2, 0x6da082)
    return arg2

sub_402620(arg2, arg1 + 0x4c)
return arg2
