// 函数: ___acrt_allocate_buffer_for_argv
// 地址: 0x710ae1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 u>= 0x3fffffff)
    return 0

int32_t edi
int32_t var_c_1 = edi
int32_t ecx_2
int32_t esi_1

if (arg2 u< divu.dp.d(0:0xffffffff, arg3))
    ecx_2 = arg2 * arg3
    esi_1 = arg1 << 2

int32_t result

if (arg2 u< divu.dp.d(0:0xffffffff, arg3) && 0xffffffff - esi_1 u> ecx_2)
    int32_t result_1 = __calloc_base(ecx_2 + esi_1, 1)
    __free_base(0)
    result = result_1
else
    result = 0

return result
