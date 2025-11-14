// 函数: sub_54c930
// 地址: 0x54c930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_68
int32_t eax_1 = __security_cookie ^ &var_68
int32_t ebx = int.d(arg2)
void* ecx = arg4
void* var_64 = ecx

if (ebx s>= 0)
    int32_t eax_2 = *(arg1 + 0x2c)
    
    if (ebx s>= eax_2)
        ebx = eax_2 - 1
else
    ebx = 0

int32_t var_60 = ebx + 1

if (ebx + 1 s>= 0)
    int32_t ecx_1 = *(arg1 + 0x2c)
    
    if (ebx + 1 s>= ecx_1)
        var_60 = ecx_1 - 1
    
    ecx = var_64
else
    var_60 = 0

int32_t ebp = int.d(arg3)
float xmm1 = arg2 - _mm_cvtepi32_ps(zx.o(ebx))
float var_54 = xmm1

if (ebp s>= 0)
    int32_t eax_5 = *(ecx + 0x2c)
    
    if (ebp s>= eax_5)
        ebp = eax_5 - 1
else
    ebp = 0

var_68 = ebp + 1

if (ebp + 1 s>= 0)
    int32_t ecx_2 = *(ecx + 0x2c)
    
    if (ebp + 1 s>= ecx_2)
        var_68 = ecx_2 - 1
else
    var_68 = 0

int32_t esi_1 = arg6[1] - *arg6
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
int32_t edx_2 = edx_1 s>> 3
float xmm2_1 = arg3 - _mm_cvtepi32_ps(zx.o(ebp))
float var_50 = xmm2_1

if ((edx_2 u>> 0x1f) + edx_2 != esi_1 s>> 6)
    int32_t eax_12
    int32_t edx_3
    edx_3:eax_12 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
    int32_t edx_4 = edx_3 s>> 3
    sub_544300(arg6, (edx_4 u>> 0x1f) + edx_4)
    xmm1 = var_54
    xmm2_1 = var_50

int32_t eax_16
int32_t edx_5
edx_5:eax_16 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
int32_t var_5c = 0
int32_t edx_6 = edx_5 s>> 3
int32_t result = (edx_6 u>> 0x1f) + edx_6

if (result s> 0)
    int32_t ecx_10 = 0
    int32_t var_4c_1 = 0
    
    do
        int128_t var_48
        __builtin_memcpy(&var_48, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        int32_t var_90_1 = ecx_10
        sub_54cc20(arg1, &var_48, ecx_10, ebx, var_60, xmm1, var_64, ebp, var_68, xmm2_1, arg5)
        var_5c += 1
        xmm1 = var_54
        int128_t* eax_20 = *arg6 + var_4c_1
        xmm2_1 = var_50
        var_4c_1 += 0x40
        *eax_20 = var_48
        __builtin_memcpy(&eax_20[1], 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "00\x80\x3f", 
            0x30)
        int32_t eax_21
        int32_t edx_7
        edx_7:eax_21 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
        ecx_10 = var_5c
        int32_t edx_8 = edx_7 s>> 3
        result = (edx_8 u>> 0x1f) + edx_8
    while (ecx_10 s< result)

sub_69a5bc(eax_1 ^ &var_68)
return result
