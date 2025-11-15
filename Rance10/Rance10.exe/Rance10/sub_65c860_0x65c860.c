// 函数: sub_65c860
// 地址: 0x65c860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3

if (arg4 u< 0xc || *arg2 != 0x41 || arg2[1] != 0x64 || arg2[2] != 0x6f || arg2[3] != 0x62
        || arg2[4] != 0x65)
    *(*arg3 + 0x14) = 0x50
    *(*arg3 + 0x18) = arg4 + arg5
    arg5 = 1
    arg4 = arg3
    jump(*(*arg3 + 4))

void* edx_1 = *arg3
uint32_t ebx = zx.d(arg2[0xb])
uint32_t edi_2 = (zx.d(arg2[7]) << 8) + zx.d(arg2[8])
uint32_t ecx_2 = zx.d(arg2[5]) << 8
uint32_t eax_2 = zx.d(arg2[6])
*(edx_1 + 0x20) = (zx.d(arg2[9]) << 8) + zx.d(arg2[0xa])
*(edx_1 + 0x18) = ecx_2 + eax_2
*(edx_1 + 0x1c) = edi_2
*(edx_1 + 0x24) = ebx
*(*arg3 + 0x14) = 0x4e
int32_t result = (*(*arg3 + 4))(arg3, 1)
*(arg3 + 0x109) = ebx.b
arg3[0x42].b = 1
return result
