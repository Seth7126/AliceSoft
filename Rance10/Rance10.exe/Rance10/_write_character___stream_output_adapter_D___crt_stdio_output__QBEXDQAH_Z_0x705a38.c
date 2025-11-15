// 函数: ?write_character@?$stream_output_adapter@D@__crt_stdio_output@@QBEXDQAH@Z
// 地址: 0x705a38
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax_5

if (((*(*arg1 + 0xc) u>> 0xc).b & 1) == 0 || *(*arg1 + 4) != 0)
    eax_5 = __fputc_nolock(sx.d(arg2), *arg1)

int32_t* result

if ((((*(*arg1 + 0xc) u>> 0xc).b & 1) != 0 && *(*arg1 + 4) == 0) || eax_5 != 0xffffffff)
    result = arg3
    *result += 1
else
    result = arg3
    *result = 0xffffffff

return result
