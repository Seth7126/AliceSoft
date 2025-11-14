// 函数: sub_4411e0
// 地址: 0x4411e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *arg2
*arg2 = ecx + 1
int32_t ebx = *(*arg1 + (ecx << 2))
sub_42f470(arg3, ebx)
int32_t esi = 0

if (ebx s> 0)
    do
        int32_t edx_1 = *arg2
        *arg2 = edx_1 + 1
        *(*arg3 + (esi << 2)) = *(*arg1 + (edx_1 << 2))
        esi += 1
    while (esi s< ebx)

int32_t result
result.b = 1
return result
