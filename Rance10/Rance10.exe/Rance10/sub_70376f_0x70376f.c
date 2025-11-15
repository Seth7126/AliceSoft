// 函数: sub_70376f
// 地址: 0x70376f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_8 = arg1.b
int32_t* var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t* ebx = **arg1
char eax_1 = ___acrt_stdio_begin_temporary_buffering_nolock(ebx)
int32_t result = 0xffffffff

if (__fwrite_nolock(*arg1[1], 1, *arg1[2], **arg1) == *arg1[2]
        && __fputc_nolock(0xa, **arg1) != 0xffffffff)
    result = 0

___acrt_stdio_end_temporary_buffering_nolock(eax_1, ebx)
return result
