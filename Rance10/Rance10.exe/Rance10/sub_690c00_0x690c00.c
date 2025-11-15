// 函数: sub_690c00
// 地址: 0x690c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg12
(*(*ebx + 0x68))(2)
(*(*ebx + 0x68))(3)
arg12 = fconvert.s(arg5)
(*(*ebx + 0x68))(4)
(*(*ebx + 0x68))(5)
float var_10 = fconvert.s(arg7)
(*(*ebx + 0x68))(6)
float var_14 = fconvert.s(arg8)
(*(*ebx + 0x68))(7)
float var_c = fconvert.s(arg9)
var_c f- 0
int32_t eax_12
eax_12:1.b =
    (var_c == 0f ? 1 : 0) << 6 | (is_unordered.d(var_c, 0f) ? 1 : 0) << 2 | (var_c < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float var_18_1

if (not(p_1))
    var_18_1 = 0f
else
    var_18_1 = var_14 / var_c

int32_t esi = *arg2
*arg2 = esi + 1
(*(*ebx + 0x68))(0)
*(arg3 + (esi << 2)) = fconvert.s(arg10)
int32_t esi_1 = *arg2
*arg2 = esi_1 + 1
(*(*ebx + 0x68))(1)
int32_t ecx_8 = *arg2
*(arg3 + (esi_1 << 2)) = fconvert.s(arg11)
*(arg3 + (ecx_8 << 2)) = fconvert.s(arg4)
*(arg3 + (ecx_8 << 2) + 4) = arg12
*(arg3 + (ecx_8 << 2) + 8) = fconvert.s(arg6) * arg12
*(arg3 + (ecx_8 << 2) + 0xc) = var_14 * var_10
*(arg3 + (ecx_8 << 2) + 0x10) = var_c * var_10
*(arg3 + (ecx_8 << 2) + 0x14) = var_18_1
*arg2 = ecx_8 + 6
return ecx_8 + 6
