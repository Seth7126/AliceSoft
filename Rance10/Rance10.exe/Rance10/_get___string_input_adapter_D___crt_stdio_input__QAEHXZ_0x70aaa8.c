// 函数: ?get@?$string_input_adapter@D@__crt_stdio_input@@QAEHXZ
// 地址: 0x70aaa8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx = *(arg1 + 8)

if (ecx == *(arg1 + 4))
    return 0xffffffff

int32_t result = sx.d(*ecx)
*(arg1 + 8) = &ecx[1]
return result
