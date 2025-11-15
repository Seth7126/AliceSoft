// 函数: __setfpcontrolword
// 地址: 0x7205b5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_30 = edi
int32_t var_24
__builtin_memset(&var_24, 0, 0x1c)
int16_t x87status
uint224_t temp0
temp0, x87status = __fnstenv_memmem28()
var_24.28 = temp0
int32_t esi_2 = not.d(___get_machine_control(0x31f)) & var_24
int32_t result = ___get_machine_control(arg2)
__fldenv_memmem28((esi_2 | result).28)

if (data_7fc25c s>= 1)
    int32_t var_8_1 = 0
    int32_t esi_6 = not.d(___get_machine_control_sse2(0x31f)) & arg1
    result = ___get_machine_control_sse2(arg2)
    int32_t var_8_3 = esi_6 | result

return result
