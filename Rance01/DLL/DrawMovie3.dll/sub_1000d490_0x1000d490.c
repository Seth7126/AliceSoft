// 函数: sub_1000d490
// 地址: 0x1000d490
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* ebx = arg4
int32_t eax = arg3[1]
int32_t ecx = *arg3

if (eax s>= 0 && (eax s> 0 || ecx u>= 0x13880))
    *arg3 = ecx - 0x13880
    arg3[1] = sbb.d(eax, 0, ecx u< 0x13880)
    int32_t temp7_1 = *ebx
    *ebx -= 0x13880
    ebx[1] = adc.d(ebx[1], 0xffffffff, temp7_1 u>= 0x13880)

arg1[0x46] = *arg3
int32_t* eax_3 = arg1[6]
arg1[0x47] = arg3[1]
int32_t var_10
(*(*eax_3 + 0xc))(eax_3, &var_10)
int32_t eax_4 = arg1[8]
int32_t edx_2 = var_10
int32_t edx_3 = edx_2 - eax_4
int32_t var_c
int32_t ebp_1 = sbb.d(var_c, arg1[9], edx_2 u< eax_4)
int32_t* ecx_5 = edx_3 - *arg3
int32_t eax_6 = sbb.d(ebp_1, arg3[1], edx_3 u< *arg3)
var_10 = edx_3

if (eax_6 s<= 0xffffffff && (eax_6 s< 0xffffffff || ecx_5 u< 0xe2329b00))
    arg4 = 0xe2329b00
else if (eax_6 s< 0 || (eax_6 s<= 0 && ecx_5 u<= 0x1dcd6500))
    arg4 = ecx_5
else
    arg4 = 0x1dcd6500

int32_t eax_8
int32_t edx_4
edx_4:eax_8 = sx.q(arg4)
int32_t eax_10 = (*(*arg1 + 0xc0))(eax_8, edx_4, edx_3, ebp_1)
int32_t ecx_8 = neg.d(eax_10)
arg1[0x3b] = sbb.d(ecx_8, ecx_8, eax_10 != 0) + 1
int32_t* eax_12 = *ebx - *arg3
int32_t ebx_1 = arg1[0x44]
int32_t eax_14
int32_t edx_6
edx_6:eax_14 = sx.q(ebx_1)
int32_t eax_16 = (eax_14 + (edx_6 & 0x1f)) s>> 5

if (eax_12 s> ebx_1 + eax_16)
    arg1[0x43] = eax_12
    arg1[0x44] = eax_12
else if (eax_12 s< ebx_1 - eax_16)
    arg1[0x43] = eax_12
    arg1[0x44] = eax_12

int32_t eax_20

if (sbb.d(ecx_8, ecx_8, eax_10 != 0) != 0xffffffff)
    if ((*(*arg2 + 0x3c))(arg2) == 0 || arg1[0x3a] == 0xffffffff)
        eax_20 = 1
    else
        eax_20 = 0
else if (arg1[0x3a] == 0xffffffff)
    eax_20 = 1
else
    eax_20 = 0

if (arg4 s<= 0)
    int32_t ebx_3 = arg1[0x40]
    
    if (arg4 s>= ebx_3 || eax_20 != 0)
        arg1[0x40] = arg4
    else
        int32_t eax_22
        int32_t edx_10
        edx_10:eax_22 = sx.q(ebx_3)
        arg1[0x40] = ebx_3 - ((eax_22 + (edx_10 & 7)) s>> 3)
else
    arg1[0x40] = 0

int32_t ecx_13

if (arg4 s>= 0)
    ecx_13 = 0
else
    ecx_13 = neg.d(arg4)

int32_t eax_26 = arg1[0x42] * 3
int32_t ecx_14 = var_10
int32_t eax_28
int32_t edx_12
edx_12:eax_28 = sx.q(eax_26 + ecx_13)
int32_t ebx_6 = (eax_28 + (edx_12 & 3)) s>> 2
int32_t* ecx_15 = ecx_14 - arg1[0x4e]
int32_t eax_31 = sbb.d(ebp_1, arg1[0x4f], ecx_14 u< arg1[0x4e])
int32_t* edx_14 = ecx_15
int32_t* var_8 = edx_14

if (eax_31 s>= 0 && (eax_31 s> 0 || edx_14 u> 0x989680))
    edx_14 = 0x989680
    var_8 = 0x989680
    int32_t var_4_1 = 0

arg2 = edx_14
int32_t* ebp_3 = arg4

if (arg1[0x3d] * 3 s> arg1[0x43])
    int32_t ebx_7
    
    if (arg1[0x3b] == 0)
        ebx_7.b = arg4 * 2 s< eax_12
    else
        ebx_7.b = ebp_3 s<= eax_12 * 4
    
    if (ebx_7 == 0 && arg1[0x42] s<= 0x13880 && eax_31 s<= 0
            && (eax_31 s< 0 || ecx_15 u<= 0x989680))
        arg1[0x42] = ebx_6
        arg1[0x3a] = 0xffffffff
        return 0x80004005

int32_t ecx_16 = 0

if (eax_20 != 0)
    ecx_16 = 1
else
    int32_t eax_35
    int32_t edx_23
    edx_23:eax_35 = sx.q(eax_12)
    
    if (arg1[0x43] s> ((eax_35 + (edx_23 & 0xf)) s>> 4) + eax_12
            && ebp_3 s> (neg.d(eax_12) * 4 - eax_12) * 2)
        ecx_16 = 1

if (ebp_3 s>= 0xff76abc0 && ecx_16 != 0)
    int32_t ecx_17 = arg1[0x43]
    int32_t eax_41
    int32_t edx_31
    edx_31:eax_41 = sx.q(eax_26)
    arg1[0x42] = (eax_41 + (edx_31 & 3)) s>> 2
    int32_t eax_46
    int32_t edx_33
    edx_33:eax_46 = sx.q(ecx_17 * 3 + var_8)
    bool cond:8 = arg1[0x40] s<= ebp_3
    arg1[0x43] = (eax_46 + (edx_33 & 3)) s>> 2
    int32_t eax_49 = var_10
    arg1[0x3a] = 0
    arg1[0x54] = ebp_3
    arg1[0x55] = var_8
    arg1[0x4e] = eax_49
    arg1[0x4f] = ebp_1
    
    if (not(cond:8))
        arg1[0x40] = ebp_3
    
    return 0

int32_t eax_51 = arg1[0x40]
arg1[0x3a] += 1
arg1[0x43] = eax_12
int32_t ecx_20 = neg.d(eax_12)

if (eax_51 s< ecx_20)
    eax_51 = ecx_20

int32_t eax_52
int32_t edx_35
edx_35:eax_52 = sx.q(eax_51)
int32_t temp11 = *arg3
*arg3 += eax_52
arg3[1] = adc.d(arg3[1], edx_35, temp11 + eax_52 u< temp11)
int32_t eax_54 = neg.d(ebp_3)
int32_t* result
result.b = eax_54 s> 0
arg1[0x42] = ebx_6

if (result != 1)
    arg1[0x4e] = var_10
    arg1[0x4f] = ebp_1
else
    int32_t ebx_8 = *arg3
    int32_t ebp_4 = arg3[1]
    int32_t* edx_37 = ebx_8 - arg1[0x4e]
    int32_t ecx_22 = sbb.d(ebp_4, arg1[0x4f], ebx_8 u< arg1[0x4e])
    
    if (ecx_22 s<= 0xffffffff && (ecx_22 s< 0xffffffff || edx_37 u< 0xe2329b00))
        arg1[0x4f] = ebp_4
        ebp_3 = arg4
        arg2 = 0xe2329b00
        arg1[0x4e] = ebx_8
    else if (ecx_22 s< 0 || (ecx_22 s<= 0 && edx_37 u<= 0x1dcd6500))
        arg1[0x4f] = ebp_4
        ebp_3 = arg4
        arg2 = edx_37
        arg1[0x4e] = ebx_8
    else
        arg1[0x4f] = ebp_4
        ebp_3 = arg4
        arg2 = 0x1dcd6500
        arg1[0x4e] = ebx_8

int32_t* eax_56

if (eax_54 s<= 0)
    eax_56 = ebp_3
else
    int32_t eax_55 = *arg3
    eax_56 = eax_55 - arg1[0x46]
    int32_t edi_3 = sbb.d(arg3[1], arg1[0x47], eax_55 u< arg1[0x46])
    
    if (edi_3 s<= 0xffffffff && (edi_3 s< 0xffffffff || eax_56 u< 0xe2329b00))
        eax_56 = 0xe2329b00
    else if (edi_3 s>= 0 && (edi_3 s> 0 || eax_56 u> 0x1dcd6500))
        eax_56 = 0x1dcd6500

arg1[0x54] = eax_56
arg1[0x55] = arg2
return result
