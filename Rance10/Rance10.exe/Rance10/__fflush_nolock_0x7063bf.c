// 函数: __fflush_nolock
// 地址: 0x7063bf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return _common_flush_all(arg1)

if (___acrt_stdio_flush_nolock(arg1) == 0)
    if (((arg1[3] u>> 0xb).b & 1) == 0)
        return 0
    
    int32_t eax_4
    int32_t* ecx_2
    eax_4, ecx_2 = __fileno(arg1)
    int32_t var_10_1 = eax_4
    
    if (__commit(ecx_2) == 0)
        return 0

return 0xffffffff
