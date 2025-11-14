// 函数: sub_47f000
// 地址: 0x47f000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = 0

if (arg2 s> 0)
    edx = arg2

arg1[3] = 0xff

if (edx s> 0xff)
    edx = 0xff

int32_t ecx = 0
*arg1 = edx

if (arg3 s> 0)
    ecx = arg3

if (ecx s> 0xff)
    ecx = 0xff

arg1[1] = ecx
int32_t ecx_1 = 0

if (arg4 s> 0)
    ecx_1 = arg4

if (ecx_1 s> 0xff)
    ecx_1 = 0xff

arg1[2] = ecx_1
return arg1
