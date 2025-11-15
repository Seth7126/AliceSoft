// 函数: sub_402f50
// 地址: 0x402f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg2
int32_t esi = 0xff

if (edx != zx.d(edx.b))
    int32_t eax_1 = 0xff
    
    if (edx s< 0)
        eax_1 = 0
    
    edx = eax_1

*arg1 = edx
int32_t edx_1 = arg3

if (edx_1 != zx.d(edx_1.b))
    int32_t eax_3 = 0xff
    
    if (edx_1 s< 0)
        eax_3 = 0
    
    edx_1 = eax_3

arg1[1] = edx_1
int32_t edx_2 = arg4

if (edx_2 != zx.d(edx_2.b))
    int32_t eax_5 = 0xff
    
    if (edx_2 s< 0)
        eax_5 = 0
    
    edx_2 = eax_5

arg1[2] = edx_2

if (arg5 == zx.d(arg5.b))
    arg1[3] = arg5
    return arg1

if (arg5 s< 0)
    esi = 0

arg1[3] = esi
return arg1
