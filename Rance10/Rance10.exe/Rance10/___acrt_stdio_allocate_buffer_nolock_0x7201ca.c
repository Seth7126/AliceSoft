// 函数: ___acrt_stdio_allocate_buffer_nolock
// 地址: 0x7201ca
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

data_7fc47c += 1
arg1[1] = __malloc_base(0x1000)
__free_base(0)

if (arg1[1] == 0)
    arg1[3] |= 0x400
    arg1[6] = 2
    arg1[1] = &arg1[5]
else
    arg1[3] |= 0x40
    arg1[6] = 0x1000

int32_t result = arg1[1]
arg1[2] = 0
*arg1 = result
return result
