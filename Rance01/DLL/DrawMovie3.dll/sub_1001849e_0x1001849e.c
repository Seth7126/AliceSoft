// 函数: sub_1001849e
// 地址: 0x1001849e
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_1 = arg5 ^ 0x700
int16_t arg_28
long double result
long double result_3
bool c0
bool c1
bool c2_3
bool c3

if ((eax_1 & 0x700) != 0 || *((eax_1 u>> 0xb & 0xf) + 0x1002178c) == 0
    || (arg5 & 0x7fff0000) == 0x7fff0000)
label_10018638:
    result_3 = arg4
    long double result_1
    uint8_t temp0_7
    result_1, c2_3, temp0_7 = __fprem1(arg7, result_3)
    result = result_1
    
    if (not(c2_3))
        c0 = (temp0_7 & 4) != 0
        c1 = (temp0_7 & 1) != 0
        c3 = (temp0_7 & 2) != 0
else
    int32_t eax_7 = arg7:6.d & 0x7fff0000
    
    if (eax_7 == 0 || eax_7 == 0x7fff0000)
        goto label_10018638
    
    int32_t eax_8 = arg7:4.d
    
    if (eax_8 != neg.d(eax_8))
        goto label_10018638
    
    int32_t eax_10 = arg4:4.d
    
    if (eax_10 != neg.d(eax_10))
        goto label_10018638
    
    int32_t ebx_2 = arg7:8.d & 0x7fff
    
    if (ebx_2 u<= (arg5 & 0x7fff) + 0x3f)
        while ((arg7:8.d & 0x7fff) - ((arg5 & 0x7fff) + 0xa) s>= 0)
            int32_t eax_18 = arg5
            int32_t ebx_8 = arg7:8.d & 0x7fff
            arg5 = (ebx_8 - (((ebx_8 - eax_18) & 7) | 4)) | (eax_18 & 0x8000)
            arg5 = eax_18
            long double st0_1
            uint8_t temp0_2
            bool c2_1
            st0_1, c2_1, temp0_2 = __fprem(arg7, arg4)
            
            if (not(c2_1))
                c0 = (temp0_2 & 4) != 0
                c1 = (temp0_2 & 1) != 0
                c3 = (temp0_2 & 2) != 0
            
            arg7 = st0_1
        
        goto label_10018638
    
    if (((ebx_2 - ((arg5 & 0x7fff) + 0x3f)) & 2) == 0)
        arg6 = arg4
    
    int16_t x87status_1
    char temp0_3
    temp0_3, x87status_1 = __fnstcw_memmem16(arg3)
    arg_28 = temp0_3
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(arg_28 | 0x33f)
    int32_t i_1 = ((((arg7:8.d & 0x7fff) - (arg5 & 0x7fff)) & 0x3f) | 0x20) + 1
    arg5 = (arg7:8.d & 0x7fff) | (arg5 & 0x8000)
    long double x87_r7_5 = fabs(arg4)
    long double result_2 = fabs(arg7)
    int32_t i
    
    do
        result_2 - x87_r7_5
        c0 = result_2 < x87_r7_5
        c1 = false
        c3 = result_2 == x87_r7_5
        int32_t eax_24
        eax_24.w = (c0 ? 1 : 0) << 8 | (is_unordered.t(result_2, x87_r7_5) ? 1 : 0) << 0xa
            | (c3 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_24 & 0x100) == 0)
            result_2 = result_2 - x87_r7_5
        
        x87_r7_5 = x87_r7_5 * fconvert.t(data_100217bc)
        i = i_1
        i_1 -= 1
    while (i != 1)
    long double result_4
    uint8_t temp0_6
    result_4, c2_3, temp0_6 = __fprem1(data_100217c4, arg6)
    
    if (not(c2_3))
        c0 = (temp0_6 & 4) != 0
        c1 = (temp0_6 & 1) != 0
        c3 = (temp0_6 & 2) != 0
    
    result_3 = result_4
    result = result_2
    int16_t x87status_3
    arg3, x87status_3 = __fldcw_memmem16(arg_28)
    
    if ((arg7:8.d & 0x8000) != 0)
        result = fneg(result)
        c1 = false

if ((arg2 & 3) != 0)
    if ((arg2 & 1) != 0)
        int16_t x87status_4
        char temp0_8
        temp0_8, x87status_4 = __fnstcw_memmem16(arg3)
        arg_28 = temp0_8
        int16_t x87control_1
        int16_t x87status_5
        x87control_1, x87status_5 = __fldcw_memmem16(arg_28 | 0x300)
        data_100217ac
        int16_t x87control_2
        int16_t x87status_6
        x87control_2, x87status_6 = __fldcw_memmem16(arg_28)
    
    result = result_3
    int16_t x87status_7
    char temp0_11
    temp0_11, x87status_7 = __fnstenv_memmem28()
    uint224_t var_28_1
    var_28_1:4.d = temp0_11:4.d & 0xbcff
    var_28_1:4.d |= ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2_3 ? 1 : 0) << 0xa
        | (c3 ? 1 : 0) << 0xe | 0x3000).d & 0x4300
    __fldenv_memmem28(var_28_1)

return result
