// 函数: __check_overflow_exit
// 地址: 0x10017475
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

bool c1 = unimplemented  {fst qword [esp], st0}
int32_t eax_2
int32_t eax_1

if ((fconvert.d(arg3):4.d & 0x7ff00000) == 0x7ff00000)
    long double x87_r7_2 = arg3
    arg3 = fconvert.t(-1536.0)
    __fscale(x87_r7_2, arg3)
    long double x87_r7_5 = fabs(arg3)
    long double temp1_1 = fconvert.t(1.7976931348623157e+308)
    x87_r7_5 - temp1_1
    eax_1.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe
    eax_2 = 3
    
    if (not(test_bit(eax_1:1.b, 6)) && not(test_bit(eax_1:1.b, 0)))
        arg3 = arg3 * fconvert.t(inf.0)
else
    eax_1.w = __return_addr.w
    
    if (eax_1.w == 0x27f)
        return 
    
    eax_1.w &= 0x20
    int16_t x87control_1
    int16_t x87status_1
    
    if (eax_1.w != 0)
        x87control_1, x87status_1 = __fldcw_memmem16(__return_addr.w)
        return 
    
    bool c0
    bool c2
    bool c3
    eax_1.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
    eax_1.w &= 0x20
    
    if (eax_1.w == 0)
        x87control_1, x87status_1 = __fldcw_memmem16(__return_addr.w)
        return 
    
    eax_2 = 8

if (arg2 == 0x1d)
    __startTwoArgErrorHandling(eax_2, arg2, arg3)
    return 

__startOneArgErrorHandling(eax_2, arg2, arg3, arg1, __return_addr)
