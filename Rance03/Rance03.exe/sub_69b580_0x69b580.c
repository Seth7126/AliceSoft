// 函数: sub_69b580
// 地址: 0x69b580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c

if (data_75dea4 != 0)
    int32_t eax_1 = arg4 & 0x7f80
    bool cond:0_1 = eax_1 != 0x1f80
    
    if (eax_1 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg5)
        eax_1.w = temp0_1
        eax_1.w &= 0x7f
        cond:0_1 = eax_1.w != 0x7f
    
    if (not(cond:0_1))
        uint128_t xmm0 = zx.o(arg6)
        int32_t xmm2[0x4] = data_6d5440
        uint64_t xmm0_2[0x2] = _mm_srli_epi64(_mm_slli_epi64(xmm0, 1), 0x35)
        int32_t xmm3_1 = _mm_srli_epi64(xmm0, 0x34)
        uint64_t xmm4_1[0x2] = __andpd_xmmxuq_memxuq(xmm0, data_6d5450)
        int32_t eax_2 = xmm0_2
        int32_t xmm2_1[0x4] = _mm_sub_epi32(xmm2, xmm0_2)
        uint64_t (* ecx)[0x2] = arg8
        double xmm1_2 = _mm_sll_epi64(_mm_srl_epi64(xmm0, xmm2_1), xmm2_1)
        
        if (eax_2 s< 0x3ff)
            *ecx = xmm4_1
            return fconvert.t(arg6)
        
        if (eax_2 s<= 0x432)
            *ecx = xmm1_2
            arg6 = _mm_or_pd(xmm0.q - xmm1_2, xmm4_1)
            return fconvert.t(arg6)
        
        uint64_t xmm0_3[0x2] = zx.o(arg6)
        
        if (eax_2 != 0x7ff)
            *ecx = xmm0_3
            long double result = float.t(0)
            
            if (xmm3_1 s< 0x800)
                return result
            
            return fneg(result)
        
        uint64_t xmm0_4[0x2] = xmm0_3 f+ xmm0_3
        *ecx = xmm0_4
        uint64_t xmm0_6[0x2] =
            __cmppd_xmmpd_mempd_immb(__andpd_xmmxuq_memxuq(xmm0_4, data_6d5430), data_6d5460, 4)
        uint32_t eax_3 = _mm_extract_epi16(xmm0_6, 0)
        double xmm0_8 = _mm_or_pd(_mm_and_pd(xmm0_6, xmm0_3), xmm4_1)
        
        if (eax_3 == 0)
            arg6 = xmm0_8
            return fconvert.t(arg6)
        
        var_c.q = xmm0_8
        int32_t __saved_ebx = 0x3ef
        sub_6a2dbd(&arg6, &arg8, &var_c, 0x3ef)
        return fconvert.t(var_c.q)

int32_t __saved_ebp_3
int32_t __saved_ebp_2 = __saved_ebp_3
int32_t var_8_1 = arg3
var_c = arg3
int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_esi_2
int32_t __saved_esi_1 = __saved_esi_2
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t var_1c_1 = 0
int32_t var_20 = 0
int32_t eax_4
int16_t x87control
eax_4, x87control = sub_69f534(arg5, 0, 0)
int32_t var_24 = 0xffff
int32_t var_28 = data_74a570
int16_t x87control_1 = sub_69f534(x87control)
__saved_edi_2.w = arg7
int32_t ecx_2 = zx.d(__saved_edi_2.w) & 0x7ff0
int32_t var_20_1 = ecx_2

if (ecx_2.w != 0x7ff0)
    var_20_1.q = fconvert.d(fconvert.t(arg6))
    long double st0_3 = sub_6aa435(var_20_1)
    *arg8 = fconvert.d(st0_3)
    long double x87_r7_14 = fconvert.t(arg6) - st0_3
    var_c.q = fconvert.d(x87_r7_14)
    arg6 = fconvert.d(x87_r7_14)
    long double x87_r6_3 = float.t(0)
    x87_r6_3 - x87_r7_14
    double* eax_6
    eax_6.w = (x87_r6_3 < x87_r7_14 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_3, x87_r7_14) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_14 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        arg7 |= __saved_edi_2.w & 0x8000
        var_c.q = fconvert.d(fconvert.t(arg6))
    
    int32_t var_1c_5 = 0xffff
    sub_69f534(x87control_1, eax_4.w, 0xffff)
    return fconvert.t(var_c.q)

double* edi = arg8
*edi = fconvert.d(fconvert.t(data_74a430))
var_20_1.q = fconvert.d(fconvert.t(arg6))
int32_t eax_5 = __sptype(var_20_1, ecx_2)

if (eax_5 s> 0)
    if (eax_5 s<= 2)
        long double x87_r7_8 = fconvert.t(arg6)
        *edi = fconvert.d(x87_r7_8)
        var_20_1.q = fconvert.d(x87_r7_8)
        var_28.q = fconvert.d(float.t(0))
        int64_t var_2c
        var_2c.d = 0xffff
        arg6 = fconvert.d(__copysign())
        sub_69f534(x87control_1, eax_4.w, 0xffff)
        return fconvert.t(arg6)
    
    if (eax_5 == 3)
        long double x87_r7_6 = fconvert.t(arg6)
        int32_t var_1c_3 = eax_4
        int32_t var_20_2 = ecx_2
        int32_t var_24_1 = ecx_2
        *edi = fconvert.d(x87_r7_6)
        var_24_1.q = fconvert.d(x87_r7_6)
        int32_t var_28_1 = 0x1c
        return sub_69f02a()

long double x87_r7_11 = fconvert.t(arg6)
long double x87_r6_2 = fconvert.t(1.0) + x87_r7_11
int32_t var_1c_4 = eax_4
*edi = fconvert.d(x87_r6_2)
var_24.q = fconvert.d(x87_r6_2)
int32_t var_30_2 = 0x1c
int32_t var_34_1 = 8
return __except1(8, 0x1c, (fconvert.d(x87_r7_11)).d)
