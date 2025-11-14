// 函数: ___common_cos_reduction_LA
// 地址: 0x6b23e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0x7ff00000)
    *arg4 = -nanf
    *(arg4 + 4) = 0x7fffffff
    return 0

int16_t var_34 = 0
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
uint32_t edx_2 = zx.d(temp0)

if ((edx_2 & 0xf00) != 0x300)
    var_34 = (edx_2.w & 0xf0ff) | 0x300
    int16_t x87status_1
    arg1, x87status_1 = __fldcw_memmem16(var_34)

long double x87_r7 = fconvert.t(arg2)
long double var_28_1
int32_t edi_1

if (arg3 u>= 0x40ff4000)
    int32_t ecx_3 = arg3 u>> 0x14 & 0x7ff
    double var_60_1 = arg2
    var_60_1:4.d = arg3 - 0xc800000
    int32_t esi_3 = (ecx_3 - 0x41c) s/ 0x19
    long double x87_r7_10 = fconvert.t(var_60_1) - 0
    long double var_28_2
    
    if (esi_3 * 0xffffffe7 + ecx_3 - 0x41c s< 0x11)
        var_28_2 = data_75f540
    else
        long double x87_r6_7 = fconvert.t(*((esi_3 << 3) + &data_75f200))
        long double x87_r5_3 = fconvert.t(*((esi_3 << 3) + &data_75f208))
        esi_3 += 1
        var_60_1.t = x87_r6_7 * x87_r7_10 + x87_r5_3 * 0
        long double x87_r6_10 = var_60_1.t
        var_60_1:4.d &= 0xffffffc0
        var_60_1.d = 0
        var_28_2 = x87_r6_10 - var_60_1.t
    
    long double x87_r4_4 = fconvert.t(*((esi_3 << 3) + &data_75f208))
    var_60_1.t = 0 * fconvert.t(*((esi_3 << 3) + &data_75f210)) + x87_r7_10 * x87_r4_4
    long double x87_r7_14 =
        fconvert.t(*((esi_3 << 3) + &data_75f200)) * x87_r7_10 + 0 * x87_r4_4 + var_28_2
    double var_40_1 = fconvert.d(var_60_1.t + x87_r7_14)
    int32_t eax_13
    int32_t edx_7
    eax_13, edx_7 =
        ___common_srl(var_40_1.d, var_40_1:4.d, (neg.d(var_40_1:4.d u>> 0x14 & 0x7ff)).b + 0x33)
    edi_1 = eax_13 | 1
    double var_30_1
    var_30_1:4.d = edx_7
    var_30_1.d = edi_1
    int32_t eax_14
    int32_t edx_8
    eax_14, edx_8 = ___common_sll(edi_1, edx_7, (neg.d(var_40_1:4.d u>> 0x14 & 0x7ff)).b + 0x33)
    long double x87_r4_5 = fconvert.t(*((esi_3 << 3) + &data_75f218))
    long double x87_r3_6 = fconvert.t(*((esi_3 << 3) + &data_75f220))
    var_30_1.d = eax_14
    var_30_1:4.d = edx_8
    var_40_1.t = fconvert.t(*((esi_3 << 3) + &data_75f230))
    long double x87_r6_21 = fconvert.t(*((esi_3 << 3) + &data_75f228))
    long double x87_r7_22 = x87_r7_14 - fconvert.t(var_30_1) + var_60_1.t + x87_r4_5 * 0
        + fconvert.t(*((esi_3 << 3) + &data_75f210)) * x87_r7_10 + x87_r4_5 * x87_r7_10
        + x87_r3_6 * 0 + x87_r6_21 * 0 + x87_r3_6 * x87_r7_10
    long double x87_r3_9 = var_40_1.t
    var_28_1 = (x87_r7_22 + x87_r6_21 * x87_r7_10 + x87_r3_9 * 0 + x87_r3_9 * x87_r7_10
        + 0 * fconvert.t(*((esi_3 << 3) + &data_75f238))) * data_75f560
else
    long double x87_r7_2 = data_75f570 * x87_r7
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
    edi_1 = int.d(x87_r7_2) | 1
    long double x87_r2 = float.t(edi_1)
    var_28_1 = x87_r7 - fconvert.t(1.570796325802803) * x87_r2
        - fconvert.t(9.9209357395935172e-10) * x87_r2 - fconvert.t(5.7211887096635749e-18) * x87_r2
        - x87_r2 * fconvert.t(1.6446256936324258e-26)

*arg4 = fconvert.d(var_28_1)
int16_t x87control_2
int16_t x87status_5

if (zx.d(var_34) != 0)
    x87control_2, x87status_5 = __fldcw_memmem16(temp0)
return not.d(edi_1 << 0x1e) & 0x80000000
