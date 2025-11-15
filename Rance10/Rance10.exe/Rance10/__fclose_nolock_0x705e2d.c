// 函数: __fclose_nolock
// 地址: 0x705e2d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

int32_t edi
int32_t var_c_1 = edi
int32_t result = 0xffffffff

if (((arg1[3] u>> 0xd).b & 1) != 0)
    result = ___acrt_stdio_flush_nolock(arg1)
    ___acrt_stdio_free_buffer_nolock(arg1)
    int32_t eax_5
    int32_t* ecx_1
    eax_5, ecx_1 = __fileno(arg1)
    int32_t var_1c_1 = eax_5
    
    if (sub_713154(ecx_1) s< 0)
        result = 0xffffffff
    else if (arg1[7] != 0)
        __free_base(arg1[7])
        arg1[7] = 0

__acrt_stdio_free_stream(arg1)
return result
