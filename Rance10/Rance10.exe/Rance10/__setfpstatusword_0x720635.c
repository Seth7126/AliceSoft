// 函数: __setfpstatusword
// 地址: 0x720635
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_30 = edi
int32_t var_24 = 0
int32_t var_1c
__builtin_memset(&var_1c, 0, 0x14)
int16_t x87status
uint224_t temp0
temp0, x87status = __fnstenv_memmem28()
var_24.28 = temp0
int32_t result = ___get_machine_status_x87(arg2)
int32_t result_1 = result
__fldenv_memmem28(var_24.28)

if (data_7fc25c s>= 1)
    int32_t var_8_1 = 0
    int32_t esi_6 = not.d(___get_machine_status_sse2(0x1f1f001f)) & arg1
    result = ___get_machine_status_sse2(arg2)
    int32_t var_8_3 = esi_6 | result

return result
