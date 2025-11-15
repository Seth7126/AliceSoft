// 函数: ___acrt_stdio_flush_nolock
// 地址: 0x706359
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (((arg1[3]).b & 3) != 2 || ((arg1[3]).b & 0xc0) == 0)
    return 0

int16_t* eax_2 = arg1[1]
int32_t edi
int32_t var_c_1 = edi
enum CONSOLE_MODE edi_2 = *arg1 - eax_2
*arg1 = eax_2
arg1[2] = 0
int32_t result

if (edi_2 s<= 0)
    result = 0
else if (edi_2 == common_lseek<long>(__fileno(arg1), eax_2, edi_2))
    if (((arg1[3] u>> 2).b & 1) != 0)
        arg1[3] &= 0xfffffffd
    
    result = 0
else
    arg1[3] |= 0x10
    result = 0xffffffff

return result
