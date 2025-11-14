// 函数: sub_100179e0
// 地址: 0x100179e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

long double x87_r7 = arg3
long double x87_r6 = arg2

while (true)
    int32_t eax_1 = arg2:4.d
    
    if (eax_1 * 2 u< eax_1)
        int32_t eax_3 = (eax_1 * 2) ^ 0xe000000
        
        if ((eax_3 & 0xe000000) != 0)
            return x87_r7 / x87_r6
        
        if (*((eax_3 u>> 0x1c) + 0x10021770) == 0)
            return x87_r7 / x87_r6
        
        int32_t eax_6 = arg2:8.d & 0x7fff
        
        if (eax_6 == 0 || eax_6 == 0x7fff)
            return x87_r7 / x87_r6
        
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16((temp0_1 | 0x33f) & 0xf3ff)
        
        if ((arg3:8.d & 0x7fff) == 1)
            long double x87_r7_6 = x87_r6 * fconvert.t(data_10021784)
            long double x87_r7_7 = x87_r7 * fconvert.t(data_10021784)
            int16_t x87control_2
            int16_t x87status_4
            x87control_2, x87status_4 = __fldcw_memmem16(temp0_1)
            return x87_r7_7 / x87_r7_6
        
        long double x87_r7_3 = x87_r6 * fconvert.t(data_10021780)
        long double x87_r7_4 = x87_r7 * fconvert.t(data_10021780)
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(temp0_1)
        return x87_r7_4 / x87_r7_3
    
    if ((arg2.d | arg2:4.d) == 0 || (arg2:8.d & 0x7fff) != 0)
        return x87_r7 / x87_r6
    
    int16_t x87status_5
    int16_t temp0_6
    temp0_6, x87status_5 = __fnstcw_memmem16(arg1)
    int16_t x87control_3
    int16_t x87status_6
    x87control_3, x87status_6 = __fldcw_memmem16((temp0_6 | 0x33f) & 0xf3ff)
    int32_t eax_20 = arg3:8.d & 0x7fff
    int16_t x87control_4
    int16_t x87status_8
    
    if (eax_20 == 0)
        int32_t eax_23 = arg3:4.d
        
        if (eax_23 * 2 u< eax_23)
            x87control_4, x87status_8 = __fldcw_memmem16(temp0_6)
            return x87_r7 / x87_r6
    else
        if (eax_20 == 0x7fff)
            x87control_4, x87status_8 = __fldcw_memmem16(temp0_6)
            return x87_r7 / x87_r6
        
        int32_t eax_21 = arg3:4.d
        
        if (eax_21 * 2 u>= eax_21)
            x87control_4, x87status_8 = __fldcw_memmem16(temp0_6)
            return x87_r7 / x87_r6
    arg2 = x87_r7 * fconvert.t(data_10021788)
    x87_r6 = x87_r7
    x87_r7 = arg3
    int16_t x87status_7
    arg1, x87status_7 = __fldcw_memmem16(temp0_6)
