// 函数: ___acrt_stdio_free_buffer_nolock
// 地址: 0x717152
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
uint8_t result = (arg1[3] u>> 0xd).b

if ((result & 1) != 0)
    result = (arg1[3] u>> 6).b
    
    if ((result & 1) != 0)
        __free_base(arg1[1])
        arg1[3] &= 0xfffffebf
        result = 0
        arg1[1] = 0
        *arg1 = 0
        arg1[2] = 0

return result
