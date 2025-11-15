// 函数: sub_5964e0
// 地址: 0x5964e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e0d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1 + 0x90

if (*(arg1 + 0x94) f> *(arg1 + 0x90))
    esi = arg1 + 0x94

if (*(arg1 + 0x98) f> *esi)
    esi = arg1 + 0x98

float xmm0_2 = *esi
int32_t* esi_1 = arg4

if (*esi_1 == esi_1[1])
    __Smtx_lock_shared(arg1 + 0xc)
    int32_t esi_2 = *(arg1 + 8)
    __Smtx_unlock_shared(arg1 + 0xc)
    
    if (esi_2 != 0)
        __Smtx_lock_shared(arg1 + 0xc)
        void* esi_3 = *(arg1 + 8)
        __Smtx_unlock_shared(arg1 + 0xc)
        float xmm0_3 = *(esi_3 + 0xe0)
        __Smtx_lock_shared(arg1 + 0xc)
        void* esi_4 = *(arg1 + 8)
        __Smtx_unlock_shared(arg1 + 0xc)
        int32_t xmm0_4 = *(arg1 + 0x5c)
        *(arg3 + 4) = _mm_unpacklo_ps(*(arg1 + 0x54), *(arg1 + 0x58))
        *arg3 = &sealengine::CSphereVolume::`vftable'
        float xmm0_7 = (xmm0_3 + arg2) f* *(esi_4 + 0x30)
        arg3[3] = xmm0_4
        arg3[4] = xmm0_7 * xmm0_2
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    esi_1 = arg4

int32_t i = 0
void* ebx_1 = nullptr
void* var_28 = nullptr
int32_t i_1 = 0
int32_t var_20 = 0
int32_t var_8_1 = 0
int32_t eax_9 = (esi_1[1] - *esi_1) s>> 6

if (eax_9 != 0)
    if (eax_9 u> 0x15555555)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_574eb0(&var_28, eax_9)
    i = i_1
    ebx_1 = var_28

int32_t edi_3 = esi_1[1]
void* esi_5 = *esi_1
int128_t var_40

if (esi_5 != edi_3)
    do
        var_40:0xc.d = *(esi_5 + 0x30)
        int32_t var_30_1 = *(esi_5 + 0x34)
        int32_t var_2c_2 = *(esi_5 + 0x38)
        sub_574d90(&var_28, &var_40:0xc)
        esi_5 += 0x40
    while (esi_5 != edi_3)
    
    i = i_1
    ebx_1 = var_28

float xmm5 = -3.40282347e+38f
var_40 = data_79aae0
float xmm4 = var_40:0xc.d
float xmm2_2 = var_40:8.d
float xmm3 = var_40:4.d
float xmm7 = var_40.d
arg4 = 3.40282347e+38f

if (ebx_1 != i)
    int32_t* edx_1 = ebx_1 + 8
    
    do
        float xmm1_2 = edx_1[-2]
        float xmm1_4 = _mm_max_ss(xmm1_2 + arg2, xmm3)
        float xmm0_15 = _mm_min_ss(xmm1_2 - arg2, xmm7)
        xmm3 = xmm1_4
        float xmm1_5 = edx_1[-1]
        xmm7 = xmm0_15
        float xmm1_7 = _mm_max_ss(xmm1_5 + arg2, xmm4)
        float xmm0_18 = _mm_min_ss(xmm1_5 - arg2, xmm2_2)
        xmm4 = xmm1_7
        float xmm1_8 = *edx_1
        xmm2_2 = xmm0_18
        edx_1 = &edx_1[3]
        xmm5 = _mm_max_ss(xmm1_8 + arg2, xmm5)
        arg4 = __minss_xmmss_memss(xmm1_8 - arg2, arg4)
    while (&edx_1[-2] != i)

int32_t xmm7_1 = (zx.o(0)).d
void* eax_11 = ebx_1
float xmm5_1 = xmm5 + arg4
arg4 = 0f
float xmm3_2 = (xmm3 + xmm7) * 0.5f
float xmm4_2 = (xmm4 + xmm2_2) * 0.5f
float xmm5_2 = xmm5_1 * 0.5f

if (ebx_1 != i)
    do
        float xmm0_23 = xmm4_2 f- *(eax_11 + 4)
        float xmm1_12 = xmm3_2 f- *eax_11
        float xmm2_4 = xmm5_2 f- *(eax_11 + 8)
        eax_11 += 0xc
        xmm7_1 = _mm_max_ss(
            sub_484cc0(xmm0_23 * xmm0_23 + xmm1_12 * xmm1_12 + xmm2_4 * xmm2_4) + arg2, xmm7_1)
    while (eax_11 != i)
    
    arg4 = xmm7_1

float xmm1_18 =
    *(arg1 + 0x34) * xmm4_2 + xmm3_2 f* *(arg1 + 0x24) + *(arg1 + 0x44) * xmm5_2 f+ *(arg1 + 0x54)
var_40:0xc.d = xmm1_18
float xmm2_10 =
    *(arg1 + 0x38) * xmm4_2 + *(arg1 + 0x28) * xmm3_2 + *(arg1 + 0x48) * xmm5_2 f+ *(arg1 + 0x58)
float var_30_2 = xmm2_10
float xmm6_5 =
    *(arg1 + 0x3c) * xmm4_2 + *(arg1 + 0x2c) * xmm3_2 + *(arg1 + 0x4c) * xmm5_2 f+ *(arg1 + 0x5c)
float var_2c_3 = xmm6_5
float xmm7_6 =
    *(arg1 + 0x40) * xmm4_2 + *(arg1 + 0x30) * xmm3_2 + *(arg1 + 0x50) * xmm5_2 f+ *(arg1 + 0x60)
xmm7_6 - 1f
eax_11:1.b =
    (xmm7_6 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_6, 1f) ? 1 : 0) << 2 | (xmm7_6 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm7_6 f- 0
    eax_11:1.b = (xmm7_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_6, 0f) ? 1 : 0) << 2
        | (xmm7_6 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm0_46 = 1f / xmm7_6
        var_40:0xc.d = xmm1_18 * xmm0_46
        float var_30_3 = xmm2_10 * xmm0_46
        var_2c_3 = xmm6_5 * xmm0_46

__Smtx_lock_shared(arg1 + 0xc)
void* edi_5 = *(arg1 + 8)
__Smtx_unlock_shared(arg1 + 0xc)
*(arg3 + 4) = var_40:0xc.q
float xmm0_49 = *(edi_5 + 0x30) * arg4
*arg3 = &sealengine::CSphereVolume::`vftable'
arg3[3] = var_2c_3
arg3[4] = xmm0_49 * xmm0_2

if (ebx_1 != 0)
    sub_403160(ebx_1, (var_20 - ebx_1) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
