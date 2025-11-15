// 函数: sub_6857a0
// 地址: 0x6857a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_24
int32_t var_8 = __security_cookie ^ &var_24
int32_t* ecx = *(arg1 + 0xc)

if (ecx == 0)
    int32_t eax_1
    eax_1.b = 0
    @__security_check_cookie@4(var_8 ^ &var_24)
    return eax_1

int32_t xmm0_1 = _mm_cvtepi32_ps(zx.o(arg2))
int32_t var_10 = 0
int32_t var_c = 0x3f800000
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = xmm0_1
int32_t var_14 = _mm_cvtepi32_ps(zx.o(arg3))
(*(*ecx + 0xb0))(ecx, 1, &var_20)
int32_t eax_3
eax_3.b = 1
@__security_check_cookie@4(var_8 ^ &var_24)
return eax_3
