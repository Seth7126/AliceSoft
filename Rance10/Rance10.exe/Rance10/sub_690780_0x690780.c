// 函数: sub_690780
// 地址: 0x690780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_ec
int32_t eax_1 = __security_cookie ^ &var_ec
var_ec = arg11
float var_e8 = 0f
int32_t var_e0
sub_690c00(
    sub_6909e0(arg11, &var_e8, &var_e0, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10), 
    &var_e8, &var_e0, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10)
float ebx = var_e8
(**arg10)()
void* eax_6 = *arg10
(&var_e0)[ebx] = fconvert.s(arg2)
(*(eax_6 + 4))()
void* eax_8 = *arg10
void var_dc
*(&var_dc + (ebx << 2)) = fconvert.s(arg3)
(*(eax_8 + 8))()
void* eax_10 = *arg10
void var_d8
*(&var_d8 + (ebx << 2)) = fconvert.s(arg4)
(*(eax_10 + 0x14))()
int32_t* ecx_6 = var_ec
void var_d4
*(&var_d4 + (ebx << 2)) = fconvert.s(arg5)
(*(*ecx_6 + 0x9c))()
int32_t* ecx_7 = var_ec
void var_d0
*(&var_d0 + (ebx << 2)) = fconvert.s(arg6)
(*(*ecx_7 + 0xa0))()
int32_t* ecx_8 = var_ec
void var_cc
*(&var_cc + (ebx << 2)) = fconvert.s(arg7)
(*(*ecx_8 + 0xa4))()
int32_t* ecx_9 = var_ec
void var_c8
*(&var_c8 + (ebx << 2)) = fconvert.s(arg8)
(*(*ecx_9 + 0xa8))()
int32_t* ecx_10 = var_ec
void var_c4
*(&var_c4 + (ebx << 2)) = fconvert.s(arg9)
(*(*ecx_10 + 0x88))()
int32_t* ecx_11 = var_ec
void var_c0
*(&var_c0 + (ebx << 2)) = fconvert.s(arg2)
(*(*ecx_11 + 0x8c))()
int32_t* ecx_12 = var_ec
void var_bc
*(&var_bc + (ebx << 2)) = fconvert.s(arg3)
(*(*ecx_12 + 0xcc))()
int32_t* ecx_13 = var_ec
void var_b8
*(&var_b8 + (ebx << 2)) = fconvert.s(arg4)
void var_b4
*(&var_b4 + (ebx << 2)) = arg12
(*(*ecx_13 + 0x18))()
var_e8 = fconvert.s(arg5)
(*(*arg10 + 0x70))()
void* eax_30 = *var_ec
void var_b0
*(&var_b0 + (ebx << 2)) = fconvert.s(arg6 * fconvert.t(var_e8))
void var_ac
__builtin_memset(&var_ac + (ebx << 2), 0, 0xc)
(*(eax_30 + 0xac))()
int32_t* ecx_16 = var_ec
void var_a0
*(&var_a0 + (ebx << 2)) = fconvert.s(arg7)
(*(*ecx_16 + 0xb0))()
int32_t* ecx_17 = var_ec
void var_9c
*(&var_9c + (ebx << 2)) = fconvert.s(arg8)
(*(*ecx_17 + 0xb4))()
int32_t* ecx_18 = var_ec
void var_98
*(&var_98 + (ebx << 2)) = fconvert.s(arg9)
(*(*ecx_18 + 0xbc))()
int32_t eax_39 = *(*arg10 + 0x44)
void var_94
*(&var_94 + (ebx << 2)) = fconvert.s(arg2 / fconvert.t(arg13))
eax_39()
var_e8 = fconvert.s(arg3)
float xmm1 = var_e8
float xmm0_1 = (zx.o(0)).d
xmm1 f- 0
int32_t eax_40
eax_40:1.b =
    (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm0_1 = 1f / xmm1

int32_t* ecx_20 = var_ec
void var_90
*(&var_90 + (ebx << 2)) = xmm1
void var_8c
*(&var_8c + (ebx << 2)) = xmm0_1
void var_88
__builtin_memset(&var_88 + (ebx << 2), 0, 8)
int32_t xmm0_2

if ((*(*ecx_20 + 0xd4))() == 0)
    xmm0_2 = (zx.o(0)).d
else
    xmm0_2 = 0x3f800000

void var_80
*(&var_80 + (ebx << 2)) = xmm0_2
void var_7c
__builtin_memset(&var_7c + (ebx << 2), 0, 0xc)
bool result = sub_684cb0(arg1 + 0xe8, &var_e0, *(*(arg1 + 4) + 0x38)) != 0
@__security_check_cookie@4(eax_1 ^ &var_ec)
return result
