// 函数: sub_6172e0
// 地址: 0x6172e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdb08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34
sub_42f420(&var_34, 0x20)
int32_t var_4 = 0
int32_t arg_4
int32_t edi = arg_4
(*(*edi + 0x68))(8)
float var_40 = fconvert.s(arg2)
(*(*edi + 0x68))(9)
float var_3c = fconvert.s(arg3)
(*(*edi + 0x68))(0xa)
float var_38 = fconvert.s(arg4)
float xmm1_3 = var_3c * var_3c + var_40 * var_40 + var_38 * var_38
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 - 0f
int32_t eax_9
eax_9:1.b =
    (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2 | (xmm1_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm2_1
float xmm3_1
float xmm4_1

if (not(p_1))
    int64_t xmm0_5 = var_40.q
    xmm3_1 = xmm0_5:4.d
    xmm2_1 = xmm0_5.d
    xmm4_1 = var_38
else
    float xmm0_4 = 1f / xmm1_4
    xmm2_1 = var_40 * xmm0_4
    xmm3_1 = var_3c * xmm0_4
    xmm4_1 = var_38 * xmm0_4

int32_t* esi = var_34
void* eax_11 = *edi
*esi = xmm2_1 ^ 0x80000000
esi[1] = xmm3_1 ^ 0x80000000
int32_t eax_12 = *(eax_11 + 0x68)
esi[2] = xmm4_1 ^ 0x80000000
esi[3] = 0
eax_12(0xb)
void* eax_13 = *edi
esi[4] = fconvert.s(arg5)
(*(eax_13 + 0x68))(0xc)
void* eax_15 = *edi
esi[5] = fconvert.s(arg6)
(*(eax_15 + 0x68))(0xd)
void* eax_17 = *edi
esi[6] = fconvert.s(arg7)
esi[7] = 0
(*(eax_17 + 0x68))(0xe)
void* eax_19 = *edi
esi[8] = fconvert.s(arg8)
(*(eax_19 + 0x68))(0xf)
void* eax_21 = *edi
esi[9] = fconvert.s(arg9)
(*(eax_21 + 0x68))(0x10)
void* eax_23 = *edi
esi[0xa] = fconvert.s(arg2)
esi[0xb] = 0
(*(eax_23 + 0x68))(0x11)
void* eax_25 = *edi
esi[0xc] = fconvert.s(arg3)
(*(eax_25 + 0x68))(0x12)
void* eax_27 = *edi
esi[0xd] = fconvert.s(arg4)
(*(eax_27 + 0x68))(0x13)
void* eax_29 = *edi
esi[0xe] = fconvert.s(arg5)
esi[0xf] = 0
(*(eax_29 + 0x68))(2)
float var_20 = fconvert.s(arg6)
(*(*edi + 0x68))(3)
void* eax_33 = *edi
arg_4 = fconvert.s(arg7)
(*(eax_33 + 0x68))(4)
float var_10 = fconvert.s(arg8)
(*(*edi + 0x68))(5)
float var_18 = fconvert.s(arg9)
(*(*edi + 0x68))(6)
float var_14 = fconvert.s(arg2)
(*(*edi + 0x68))(7)
float xmm0_7 = var_10 f* arg_4
float var_1c = fconvert.s(arg3)
var_1c f- 0
int32_t eax_41
eax_41:1.b =
    (var_1c == 0f ? 1 : 0) << 6 | (is_unordered.d(var_1c, 0f) ? 1 : 0) << 2 | (var_1c < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float var_10_1

if (not(p_3))
    var_10_1 = 0f
else
    var_10_1 = var_14 / var_1c

(*(*edi + 0x68))(0)
void* eax_44 = *edi
esi[0x10] = fconvert.s(arg4)
(*(eax_44 + 0x68))(1)
int32_t* eax_46 = *edi
esi[0x11] = fconvert.s(arg5)
esi[0x12] = var_20
int32_t eax_47 = *eax_46
esi[0x13] = arg_4
esi[0x14] = xmm0_7
esi[0x15] = var_14 * var_18
esi[0x16] = var_1c * var_18
esi[0x17] = var_10_1
eax_47(eax_2)
void* eax_48 = *edi
esi[0x18] = fconvert.s(arg6)
(*(eax_48 + 4))()
void* eax_50 = *edi
esi[0x19] = fconvert.s(arg7)
(*(eax_50 + 8))()
void* eax_52 = *edi
esi[0x1a] = fconvert.s(arg8)
(*(eax_52 + 0x14))()
esi[0x1b] = fconvert.s(arg9)
int32_t arg_8
int32_t esi_1 = arg_8
(*(*esi_1 + 0x98))()
var_34[0x1c] = fconvert.s(arg2)
(*(*esi_1 + 0x9c))()
var_34[0x1d] = fconvert.s(arg3)
(*(*esi_1 + 0xa0))()
var_34[0x1e] = fconvert.s(arg4)
(*(*esi_1 + 0xa4))()
var_34[0x1f] = fconvert.s(arg5)
(*(*esi_1 + 0x84))()
arg_4 = fconvert.s(arg6)
sub_4158d0(&var_34, &arg_4)
(*(*esi_1 + 0x88))()
arg_4 = fconvert.s(arg7)
sub_4158d0(&var_34, &arg_4)
(*(*esi_1 + 0xc8))()
arg_4 = fconvert.s(arg8)
sub_4158d0(&var_34, &arg_4)
int32_t arg_10
sub_4158d0(&var_34, &arg_10)
(*(*edi + 0x70))()
arg_4 = fconvert.s(arg9)
sub_4158d0(&var_34, &arg_4)
arg_4 = 0
sub_4158d0(&var_34, &arg_4)
arg_4 = 0
sub_4158d0(&var_34, &arg_4)
arg_4 = 0
sub_4158d0(&var_34, &arg_4)
(*(*esi_1 + 0xa8))()
arg_4 = fconvert.s(arg2)
sub_4158d0(&var_34, &arg_4)
(*(*esi_1 + 0xac))()
arg_4 = fconvert.s(arg3)
sub_4158d0(&var_34, &arg_4)
(*(*esi_1 + 0xb0))()
arg_4 = fconvert.s(arg4)
sub_4158d0(&var_34, &arg_4)
(*(*esi_1 + 0xb8))()
arg_4 = fconvert.s(arg5 / fconvert.t(arg10))
sub_4158d0(&var_34, &arg_4)
(*(*edi + 0x44))()
arg_4 = fconvert.s(arg6)
int32_t xmm1_7 = arg_4
xmm1_7 f- 0f
int32_t eax_84
eax_84:1.b = (xmm1_7 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_7, 0f) ? 1 : 0) << 2
    | (xmm1_7 f< 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

arg_8 = p_5 ? 1f f/ xmm1_7 : 0

sub_4158d0(&var_34, &arg_4)
sub_4158d0(&var_34, &arg_8)
arg_4 = 0
sub_4158d0(&var_34, &arg_4)
arg_4 = 0
sub_4158d0(&var_34, &arg_4)
int32_t* esi_2 = var_34
int32_t edx_1 = *(arg1 + 0xa4)
int32_t* ecx_54 = *(*(arg1 + 4) + 0x38)
void* result

if (edx_1 == 0)
    result.b = 0
else
    (*(*ecx_54 + 0xc0))(ecx_54, edx_1, 0, 0, esi_2, 0, 0)
    result.b = 1

arg_4:3.b = result.b

if (esi_2 != 0)
    j__free(esi_2)
    result.b = arg_4:3.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
