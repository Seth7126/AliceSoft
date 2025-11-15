// 函数: sub_403090
// 地址: 0x403090
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
uint32_t result = zx.d(arg4.b)

if (arg4 == result)
    arg1[3] = 0xff
    arg1[2] = arg4
    return result

arg1[3] = 0xff

if (arg4 s< 0)
    esi = 0

arg1[2] = esi
return 0
