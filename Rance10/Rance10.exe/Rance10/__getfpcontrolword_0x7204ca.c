// 函数: __getfpcontrolword
// 地址: 0x7204ca
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t var_8 = arg1.w
int32_t var_c = arg1
int32_t var_c_1 = 0
var_8 = 0
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg3)

if (data_7fc25c s>= 1)
    var_c_1 = arg2

int32_t eax_1 = ___get_abstract_control_x87(zx.d(temp0))
return (___get_abstract_control_sse2(var_c_1) | eax_1) & 0x31f
