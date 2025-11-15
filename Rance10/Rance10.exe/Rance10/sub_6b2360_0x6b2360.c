// 函数: sub_6b2360
// 地址: 0x6b2360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == 0 || arg2 == 0)
    return 

void* ebx_1 = arg5

if (arg4 != 0)
    sub_6a4450(arg1, arg2, arg3, 0x2000, 0)
    int32_t eax = *(arg3 + 0x274)
    char* eax_1
    
    if (eax == 0)
        eax_1 = sub_705e22()
    else
        eax_1 = eax(arg3, 0x100)
    
    if (eax_1 == 0)
        sub_6a7500(arg3, "Out of memory")
        noreturn
    
    *(arg2 + 0x9c) = eax_1
    *(arg3 + 0x1b4) = eax_1
    
    if (ebx_1 - 1 u<= 0xff)
        sub_700660(eax_1, arg4, ebx_1)

if (arg6 != 0)
    int32_t edx = 1 << *(arg2 + 0x18)
    char ecx_1 = *(arg2 + 0x19)
    
    if (ecx_1 == 0 && zx.d(arg6[1].w) s> edx)
        sub_6a7530(arg3, "tRNS chunk has out-of-range samples for bit_depth")
    else if (ecx_1 == 2
            && (zx.d(*(arg6 + 2)) s> edx || zx.d(*(arg6 + 4)) s> edx || zx.d(*(arg6 + 6)) s> edx))
        sub_6a7530(arg3, "tRNS chunk has out-of-range samples for bit_depth")
    
    arg1.w = arg6[1].w
    *(arg2 + 0xa0) = *arg6
    *(arg2 + 0xa8) = arg1.w
    
    if (ebx_1 == 0)
        ebx_1 = 1

*(arg2 + 0x16) = ebx_1.w

if (ebx_1 != 0)
    *(arg2 + 8) |= 0x10
    *(arg2 + 0xe8) |= 0x2000
