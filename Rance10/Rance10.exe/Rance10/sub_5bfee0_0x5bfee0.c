// 函数: sub_5bfee0
// 地址: 0x5bfee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg3
int32_t ebx = arg2
int32_t esi = arg3

if (arg3 != ebx)
    do
        arg2 -= 0x78
        
        if (esi == arg2)
            break
        
        sub_5c05f0(esi, arg2)
        esi += 0x78
    while (esi != arg2)

int32_t esi_1 = ebx
int32_t edx = arg4

if (ebx != arg4)
    do
        edx -= 0x78
        
        if (esi_1 == edx)
            break
        
        sub_5c05f0(esi_1, edx)
        esi_1 += 0x78
    while (esi_1 != edx)

int32_t edx_1 = arg4
int32_t esi_2 = arg3

if (arg3 != arg4)
    do
        edx_1 -= 0x78
        
        if (esi_2 == edx_1)
            break
        
        sub_5c05f0(esi_2, edx_1)
        esi_2 += 0x78
    while (esi_2 != edx_1)

return (arg4 - ebx) s/ 0x78 * 0x78 + arg3
