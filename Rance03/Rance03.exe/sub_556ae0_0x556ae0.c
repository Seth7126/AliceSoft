// 函数: sub_556ae0
// 地址: 0x556ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)

if (&edx[4] u<= *(arg2 + 8))
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    *(arg1 + 4) = ecx_6
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u<= *(arg2 + 8))
        uint32_t ecx_13 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        *(arg1 + 8) = ecx_13
        
        if (sub_468bc0(arg2, arg1 + 0xc).b != 0 && sub_468bc0(arg2, arg1 + 0x10).b != 0
                && sub_468bc0(arg2, arg1 + 0x14).b != 0)
            return sub_468bc0(arg2, arg1 + 0x18) != 0

uint32_t result
result.b = 0
return result
