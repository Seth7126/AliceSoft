// 函数: sub_100186a4
// 地址: 0x100186a4
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

long double var_1c = arg2
int32_t eax = arg3:6.d

if ((eax & 0x7fff0000) != 0)
    return sub_1001849e(eax, 0, arg1, arg3)

if ((arg3.d | arg3:4.d) == 0)
    long double result
    int80_t temp0_4
    bool c2
    result, c2, temp0_4 = __fprem(var_1c, arg3)
    return result

int32_t edx = 2
int16_t x87status
int16_t temp0_2
temp0_2, x87status = __fnstcw_memmem16(arg1)
int16_t var_10 = temp0_2
int32_t var_c = var_10.d | 0x33f
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(var_c.w)
int32_t eax_6 = var_1c:8.d & 0x7fff
long double var_34_1

if (eax_6 u> 0x7fbe)
    int16_t x87status_2
    int16_t temp0_3
    temp0_3, x87status_2 = __fnstcw_memmem16(x87control)
    var_10 = temp0_3
    eax_6 = var_10.d | 0x300
    var_c = eax_6
    int16_t x87control_1
    int16_t x87status_3
    x87control_1, x87status_3 = __fldcw_memmem16(var_c.w)
    var_34_1 = var_1c * fconvert.t(data_100217a4)
else
    edx = 3
    var_1c = var_1c * fconvert.t(data_100217a4)
    var_34_1 = arg3 * fconvert.t(data_100217a4)

int16_t x87control_2
int16_t x87status_4
x87control_2, x87status_4 = __fldcw_memmem16(var_10)
return sub_1001849e(eax_6, edx, x87control_2, var_34_1, arg3, var_1c, var_10, var_c)
