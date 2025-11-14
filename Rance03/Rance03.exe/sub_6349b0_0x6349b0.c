// 函数: sub_6349b0
// 地址: 0x6349b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == 0 || arg2 == 0)
    return 

void* edi_1 = arg5

if (arg4 != 0)
    sub_6275c0(arg1, arg2, arg3, 0x2000, 0)
    arg1 = sub_62ac60(arg3, 0x100)
    *(arg2 + 0x9c) = arg1
    *(arg3 + 0x1b4) = arg1
    
    if (edi_1 - 1 u<= 0xff)
        sub_69d850(arg1, arg4, edi_1)

if (arg6 != 0)
    int32_t edx = 1 << *(arg2 + 0x18)
    char ecx_2 = *(arg2 + 0x19)
    
    if (ecx_2 == 0 && zx.d(arg6[1].w) s> edx)
        sub_62a550(arg3, "tRNS chunk has out-of-range samples for bit_depth")
    else if (ecx_2 == 2
            && (zx.d(*(arg6 + 2)) s> edx || zx.d(*(arg6 + 4)) s> edx || zx.d(*(arg6 + 6)) s> edx))
        sub_62a550(arg3, "tRNS chunk has out-of-range samples for bit_depth")
    
    arg1.w = arg6[1].w
    *(arg2 + 0xa0) = *arg6
    *(arg2 + 0xa8) = arg1.w
    
    if (edi_1 == 0)
        edi_1 = 1

*(arg2 + 0x16) = edi_1.w

if (edi_1 != 0)
    *(arg2 + 8) |= 0x10
    *(arg2 + 0xe8) |= 0x2000
