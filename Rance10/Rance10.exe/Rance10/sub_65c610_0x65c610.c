// 函数: sub_65c610
// 地址: 0x65c610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx_1 = arg5 + arg4

if (arg4 u>= 0xe && *arg2 == 0x4a && arg2[1] == 0x46 && arg2[2] == 0x49 && arg2[3] == 0x46
        && arg2[4] == 0)
    arg3[0x40].b = 1
    *(arg3 + 0x101) = arg2[5]
    *(arg3 + 0x102) = arg2[6]
    *(arg3 + 0x103) = arg2[7]
    arg3[0x41].w = zx.w(arg2[8]) * 0x100 + zx.w(arg2[9])
    uint16_t eax_4
    eax_4.b = *(arg3 + 0x101)
    *(arg3 + 0x106) = zx.w(arg2[0xa]) * 0x100 + zx.w(arg2[0xb])
    
    if (eax_4.b != 1 && eax_4.b != 2)
        *(*arg3 + 0x14) = 0x7a
        *(*arg3 + 0x18) = zx.d(*(arg3 + 0x101))
        *(*arg3 + 0x1c) = zx.d(*(arg3 + 0x102))
        (*(*arg3 + 4))(arg3, 0xffffffff)
    
    void* ecx_7 = *arg3
    *(ecx_7 + 0x18) = zx.d(*(arg3 + 0x101))
    *(ecx_7 + 0x1c) = zx.d(*(arg3 + 0x102))
    *(ecx_7 + 0x20) = zx.d(arg3[0x41].w)
    *(ecx_7 + 0x24) = zx.d(*(arg3 + 0x106))
    *(ecx_7 + 0x28) = zx.d(*(arg3 + 0x103))
    *(*arg3 + 0x14) = 0x59
    (*(*arg3 + 4))(arg3, 1)
    
    if ((arg2[0xc] | arg2[0xd]) != 0)
        *(*arg3 + 0x14) = 0x5c
        *(*arg3 + 0x18) = zx.d(arg2[0xc])
        *(*arg3 + 0x1c) = zx.d(arg2[0xd])
        (*(*arg3 + 4))(arg3, 1)
    
    ebx_1 -= 0xe
    int32_t result = zx.d(arg2[0xc]) * zx.d(arg2[0xd]) * 3
    
    if (ebx_1 == result)
        return result
    
    *(*arg3 + 0x14) = 0x5a
else if (arg4 u< 6 || *arg2 != 0x4a || arg2[1] != 0x46 || arg2[2] != 0x58 || arg2[3] != 0x58
        || arg2[4] != 0)
    *(*arg3 + 0x14) = 0x4f
else
    uint32_t eax_26 = zx.d(arg2[5])
    
    if (eax_26 != 0x10)
        if (eax_26 == 0x11)
            *(*arg3 + 0x14) = 0x6f
            *(*arg3 + 0x18) = ebx_1
            return (*(*arg3 + 4))(arg3, 1)
        
        void* eax_29 = *arg3
        
        if (eax_26 == 0x13)
            *(eax_29 + 0x14) = 0x70
            *(*arg3 + 0x18) = ebx_1
            return (*(*arg3 + 4))(arg3, 1)
        
        *(eax_29 + 0x14) = 0x5b
        *(*arg3 + 0x18) = zx.d(arg2[5])
        *(*arg3 + 0x1c) = ebx_1
        return (*(*arg3 + 4))(arg3, 1)
    
    *(*arg3 + 0x14) = 0x6e

*(*arg3 + 0x18) = ebx_1
return (*(*arg3 + 4))(arg3, 1)
