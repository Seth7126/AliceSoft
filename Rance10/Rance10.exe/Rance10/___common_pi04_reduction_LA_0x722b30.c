// 函数: ___common_pi04_reduction_LA
// 地址: 0x722b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 s>= 0x7ff00000)
    *arg4 = -nanf
    *(arg4 + 4) = 0x7fffffff
    return 0

int16_t var_2c = 0
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
uint32_t edx_2 = zx.d(temp0)

if ((edx_2 & 0xf00) != 0x300)
    var_2c = (edx_2.w & 0xf0ff) | 0x300
    int16_t x87status_1
    arg1, x87status_1 = __fldcw_memmem16(var_2c)

long double x87_r7 = fconvert.t(arg2)
long double var_38_1
int32_t eax_4
int32_t edi_2
long double x87_r7_8

if (arg3 u>= 0x40ff4000)
    int32_t ecx_3 = arg3 u>> 0x14 & 0x7ff
    double var_60_1 = arg2
    var_60_1:4.d = arg3 - 0xc800000
    int32_t esi_3 = (ecx_3 - 0x41c) s/ 0x19
    long double x87_r7_11 = fconvert.t(var_60_1) - 0
    long double var_38_2
    
    if (esi_3 * 0xffffffe7 + ecx_3 - 0x41c s< 0x11)
        var_38_2 = data_801550
    else
        long double x87_r6_8 = fconvert.t(*((esi_3 << 3) + &data_8013a0))
        long double x87_r5_5 = fconvert.t(*((esi_3 << 3) + &data_8013a8))
        esi_3 += 1
        var_60_1.t = x87_r6_8 * x87_r7_11 + x87_r5_5 * 0
        long double x87_r6_11 = var_60_1.t
        var_60_1:4.d &= 0xffffffc0
        var_60_1.d = 0
        var_38_2 = x87_r6_11 - var_60_1.t
    
    long double x87_r6_14 = fconvert.t(*((esi_3 << 3) + &data_8013a8))
    var_60_1.t = x87_r6_14 * x87_r7_11 + 0 * fconvert.t(*((esi_3 << 3) + &data_8013b0))
    long double x87_r7_15 =
        fconvert.t(*((esi_3 << 3) + &data_8013a0)) * x87_r7_11 + 0 * x87_r6_14 + var_38_2
    double var_40_1 = fconvert.d(var_60_1.t + x87_r7_15)
    char eax_12 = (neg.d(var_40_1:4.d u>> 0x14 & 0x7ff)).b + 0x33
    int32_t eax_13
    int32_t edx_7
    eax_13, edx_7 = ___common_srl(var_40_1.d, var_40_1:4.d, eax_12)
    int32_t edx_8 = adc.d(edx_7, 0, eax_13 u>= 0xffffffff)
    edi_2 = (eax_13 + 1) & 0xfffffffe
    var_40_1:4.d = edx_8
    var_40_1.d = edi_2
    int32_t edx_9
    eax_4, edx_9 = ___common_sll(edi_2, edx_8, eax_12)
    long double x87_r3_5 = fconvert.t(*((esi_3 << 3) + &data_8013b8))
    var_40_1.d = eax_4
    var_40_1:4.d = edx_9
    long double x87_r2_8 = fconvert.t(*((esi_3 << 3) + &data_8013c0))
    long double x87_r3_8 = fconvert.t(*((esi_3 << 3) + &data_8013c8))
    long double x87_r6_24 = var_60_1.t + x87_r7_15 - fconvert.t(var_40_1) + x87_r3_5 * 0
        + fconvert.t(*((esi_3 << 3) + &data_8013b0)) * x87_r7_11 + x87_r3_5 * x87_r7_11
        + 0 * x87_r2_8 + x87_r2_8 * x87_r7_11 + 0 * x87_r3_8
    long double x87_r2_13 = fconvert.t(*((esi_3 << 3) + &data_8013d0))
    long double x87_r6_26 = data_8015a0
    x87_r7_8 = x87_r6_26
    var_38_1 = (0 * fconvert.t(*((esi_3 << 3) + &data_8013d8)) + x87_r7_11 * x87_r2_13 + x87_r6_24
        + x87_r3_8 * x87_r7_11 + 0 * x87_r2_13) * x87_r6_26
else
    long double x87_r7_2 = data_8015b0 * x87_r7
    int16_t x87status_2
    int16_t temp0_2
    temp0_2, x87status_2 = __fnstcw_memmem16(arg1)
    int80_t var_70
    var_70.w = temp0_2
    var_70:8.d = zx.d(var_70.w) | 0xc00
    int16_t x87control
    int16_t x87status_3
    x87control, x87status_3 = __fldcw_memmem16(var_70:8.w)
    int16_t x87control_1
    int16_t x87status_4
    x87control_1, x87status_4 = __fldcw_memmem16(var_70.w)
    edi_2 = (int.d(x87_r7_2) + 1) & 0xfffffffe
    long double x87_r2 = float.t(edi_2)
    x87_r7_8 = data_8015a0
    var_38_1 = x87_r7 - fconvert.t(0.78539816290140152) * x87_r2
        - fconvert.t(4.9604678697967586e-10) * x87_r2 - fconvert.t(2.8605943548317875e-18) * x87_r2
        - x87_r2 * fconvert.t(8.2231284681621288e-27)

int32_t result = edi_2 s>> 1
var_38_1 - x87_r7_8
eax_4.w = (var_38_1 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(var_38_1, x87_r7_8) ? 1 : 0) << 0xa
    | (var_38_1 == x87_r7_8 ? 1 : 0) << 0xe

if (test_bit(eax_4:1.b, 2) || (not(test_bit(eax_4:1.b, 6)) && not(test_bit(eax_4:1.b, 0))))
    result -= 3
    var_38_1 = var_38_1 - data_801560

*arg4 = fconvert.d(var_38_1)
int16_t x87control_2
int16_t x87status_5

if (zx.d(var_2c) != 0)
    x87control_2, x87status_5 = __fldcw_memmem16(temp0)
return result
