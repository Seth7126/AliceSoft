// 函数: sub_446100
// 地址: 0x446100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg5
int32_t ebx = arg2
arg5 = 8
int32_t ebp = eax * 2
int32_t i

do
    int16_t* edx_1 = *(arg1 + 0x24) + (ebx << 1)
    *edx_1 += *((ebx << 1) + ebp + *(arg4 + 0x24))
    void* edx_2 = *(arg1 + 0x24) + (ebx << 1)
    *(edx_2 + 2) += *((ebx << 1) + ebp + *(arg4 + 0x24) + 2)
    void* edx_3 = *(arg1 + 0x24) + (ebx << 1)
    *(edx_3 + 4) += *((eax << 1) + 4 + (ebx << 1) + *(arg4 + 0x24))
    void* edx_4 = *(arg1 + 0x24) + (ebx << 1)
    *(edx_4 + 6) += *((eax << 1) + 6 + (ebx << 1) + *(arg4 + 0x24))
    void* edx_5 = *(arg1 + 0x24) + (ebx << 1)
    *(edx_5 + 8) += *((eax << 1) + 8 + (ebx << 1) + *(arg4 + 0x24))
    void* edx_6 = *(arg1 + 0x24) + (ebx << 1)
    *(edx_6 + 0xa) += *((eax << 1) + 0xa + (ebx << 1) + *(arg4 + 0x24))
    void* edx_7 = *(arg1 + 0x24) + (ebx << 1)
    *(edx_7 + 0xc) += *((eax << 1) + 0xc + (ebx << 1) + *(arg4 + 0x24))
    void* edx_8 = *(arg1 + 0x24) + (ebx << 1)
    *(edx_8 + 0xe) += *((eax << 1) + 0xe + (ebx << 1) + *(arg4 + 0x24))
    ebx = ebx + 8 + arg3 - 8
    i = arg5
    arg5 -= 1
while (i != 1)
return arg3 - 8
