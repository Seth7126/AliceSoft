// 函数: sub_6903f0
// 地址: 0x6903f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_88 = 0.5f

if ((*(*arg4 + 0x28))() != 0)
    var_88 = 0.5f / _mm_cvtepi32_ps(zx.o((*(*arg4 + 0x28))())) + 0.5f

float xmm2_3

if ((*(*arg4 + 0x2c))() == 0)
    xmm2_3 = 0.5f
else
    xmm2_3 = 0.5f + 0.5f / _mm_cvtepi32_ps(zx.o((*(*arg4 + 0x2c))()))

void var_44
float (* ecx_4)[0x4] = &var_44
int128_t var_84
__builtin_memcpy(&var_84, 
    "\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xbf\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x
        00", 
    0x30)
int32_t var_4c = 0
int32_t var_48 = 0x3f800000
float var_50 = xmm2_3
sub_6cb020(&var_84, arg5, ecx_4, &var_84)
sub_6cba50(ecx_4, &var_84)
int32_t eax_9 = *arg2
*(arg3 + (eax_9 << 2)) = var_84
int128_t var_74
*(arg3 + (eax_9 << 2) + 0x10) = var_74
int128_t var_64
*(arg3 + (eax_9 << 2) + 0x20) = var_64
*(arg3 + (eax_9 << 2) + 0x30) = var_88.o
*arg2 = eax_9 + 0x10
return eax_9 + 0x10
