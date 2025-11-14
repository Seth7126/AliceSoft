// 函数: sub_10012340
// 地址: 0x10012340
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_1c
int32_t edi

if (arg2 s< 0 || (arg2 s<= 0 && arg1 u< 0))
    edi = neg.d(arg1)
    var_1c = neg.d(adc.d(arg2, 0, arg1 != 0))
else
    edi = arg1
    var_1c = arg2

int32_t var_28
int32_t var_24

if (arg4 s< 0 || (arg4 s<= 0 && arg3 u< 0))
    var_28 = neg.d(arg3)
    var_24 = neg.d(adc.d(arg4, 0, arg3 != 0))
else
    var_28 = arg3
    var_24 = arg4

int32_t eax_10 = arg6
int32_t ecx

if (eax_10 s< 0 || (eax_10 s<= 0 && arg5 u< 0))
    ecx = neg.d(arg5)
    eax_10 = neg.d(adc.d(eax_10, 0, arg5 != 0))
else
    ecx = arg5

int32_t ecx_2

if (arg2 s> 0 || (arg2 s>= 0 && arg1 u>= 0))
    ecx_2 = 0
else
    ecx_2 = 1

int32_t eax_11

if (arg4 s> 0 || (arg4 s>= 0 && arg3 u>= 0))
    eax_11 = 0
else
    eax_11 = 1

arg1 = eax_11 ^ ecx_2
int32_t eax_13
int32_t edx_2
eax_13, edx_2 = __allmul(edi, 0, var_28, 0)
int32_t ebp_1 = eax_13
int32_t eax_15
int32_t edx_3
eax_15, edx_3 = __allmul(var_24, 0, edi, 0)
int32_t eax_16
int32_t edx_5
eax_16, edx_5 = __allmul(var_1c, 0, var_28, 0)
int32_t esi_2 = eax_15 + eax_16
int32_t esi_3 = esi_2 + edx_2
int32_t edi_4 = adc.d(adc.d(edx_3, edx_5, eax_15 + eax_16 u< eax_15), 0, esi_2 + edx_2 u< esi_2)
int32_t eax_17
int32_t edx_7
eax_17, edx_7 = __allmul(var_24, 0, var_1c, 0)
uint32_t eax_18 = eax_17 + edi_4
int32_t edx_8 = adc.d(edx_7, 0, eax_17 + edi_4 u< eax_17)

if ((arg7 | arg8) != 0)
    int32_t var_20_1
    int32_t ecx_11
    int32_t edi_6
    
    if (arg1 == 0)
        var_20_1 = arg7
        ecx_11 = arg8
        
        if (arg8 s> 0 || (arg8 s>= 0 && arg7 u>= 0))
            edi_6 = 0
        else
            edi_6 = 0xffffffff
    else
        var_20_1 = neg.d(arg7)
        ecx_11 = neg.d(adc.d(arg8, 0, arg7 != 0))
        
        if (arg8 s< 0 || (arg8 s<= 0 && arg7 u<= 0))
            edi_6 = 0
        else
            edi_6 = 0xffffffff
    
    int32_t temp17_1 = ebp_1
    ebp_1 += var_20_1
    arg8 = 0
    int32_t edi_7 = adc.d(0, 0, temp17_1 + var_20_1 u< temp17_1)
    int32_t ecx_12 = ecx_11 + esi_3
    int32_t edi_8 = adc.d(0, 0, ecx_11 + esi_3 u< ecx_11)
    esi_3 = edi_7 + ecx_12
    int32_t ecx_13 = adc.d(0, edi_8, edi_7 + ecx_12 u< edi_7)
    int32_t ecx_14 = ecx_13 + edi_6
    uint32_t temp23_1 = eax_18
    eax_18 += ecx_14
    edx_8 = adc.d(edx_8, adc.d(0, edi_6, ecx_13 + edi_6 u< ecx_13), temp23_1 + ecx_14 u< temp23_1)
    
    if (edx_8 s< 0)
        int32_t ebp_2 = not.d(ebp_1)
        int32_t ecx_15
        ecx_15.b = arg1 == 0
        ebp_1 = ebp_2 + 1
        esi_3 = adc.d(not.d(esi_3), 0, ebp_2 u>= 0xffffffff)
        int32_t eax_19 = not.d(eax_18)
        arg1 = ecx_15
        int32_t ecx_18
        
        if ((ebp_1 | esi_3) != 0)
            ecx_18 = 0
        else
            ecx_18 = 1
        
        eax_18 = eax_19 + ecx_18
        edx_8 = adc.d(not.d(edx_8), 0, eax_19 + ecx_18 u< eax_19)

if (arg6 s<= 0 && (arg6 s< 0 || arg5 u< 0))
    int32_t ecx_19
    ecx_19.b = arg1 == 0
    arg1 = ecx_19

int32_t ecx_20

if (eax_10 u> edx_8)
    ecx_20 = ecx
else
    if (eax_10 u>= edx_8)
        ecx_20 = ecx
    
    if (eax_10 u< edx_8 || ecx_20 u<= eax_18)
        if (arg1 == 0)
            return 0xffffffff
        
        return 0

int32_t ebx_3 = eax_18 | edx_8
uint32_t eax_22

if (ebx_3 != 0)
    if (eax_10 == 0)
        uint32_t eax_24
        uint32_t ecx_21
        int32_t edx_15
        eax_24, ecx_21, edx_15 = __aulldvrm(esi_3, eax_18, ecx_20, eax_10)
        arg6 = ebx_3
        arg6 = edx_15
        uint32_t eax_25
        int32_t edx_17
        eax_25, edx_17 = __aulldiv(ebp_1, ecx_21, ecx, eax_10)
        int32_t ebx_4 = eax_25
        
        if (arg1 != eax_10)
            ebx_4 = neg.d(ebx_4)
        
        return ebx_4
    
    int32_t ecx_22 = 0
    arg5 = 0x40
    uint32_t edi_11 = 0
    int32_t i
    
    do
        ecx_22 = ecx_22 << 1 | edi_11 u>> 0xffffffe1
        edx_8 = edx_8 << 1 | eax_18 u>> 0xffffffe1
        edi_11 *= 2
        eax_18 *= 2
        
        if (esi_3 s< 0)
            eax_18 += 1
        
        esi_3 = esi_3 << 1 | ebp_1 u>> 0xffffffe1
        ebp_1 *= 2
        
        if (eax_10 u<= edx_8 && (eax_10 u< edx_8 || ecx u<= eax_18))
            uint32_t temp31_1 = eax_18
            eax_18 -= ecx
            edx_8 = sbb.d(edx_8, eax_10, temp31_1 u< ecx)
            uint32_t temp33_1 = edi_11
            edi_11 += 1
            ecx_22 = adc.d(ecx_22, 0, temp33_1 u>= 0xffffffff)
        
        i = arg5
        arg5 -= 1
    while (i != 1)
    
    if (arg1 != 0)
        edi_11 = neg.d(edi_11)
    
    eax_22 = edi_11
else
    int32_t edx_12
    eax_22, edx_12 = __aulldiv(ebp_1, esi_3, ecx_20, eax_10)
    
    if (arg1 != ebx_3)
        return neg.d(eax_22)

return eax_22
