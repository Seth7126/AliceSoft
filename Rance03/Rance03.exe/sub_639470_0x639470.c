// 函数: sub_639470
// 地址: 0x639470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx_8 = rol.d(arg1, 0x10)
int32_t edx_4 = ((ecx_8 u>> 8 ^ ecx_8 << 8) & 0xff00ff) ^ ecx_8 << 8
int32_t ecx_5 = ((edx_4 u>> 4 ^ edx_4 << 4) & 0xf0f0f0f) ^ edx_4 << 4
int32_t edx_10 = ((ecx_5 u>> 2 ^ ecx_5 << 2) & 0x33333333) ^ ecx_5 << 2
return ((edx_10 u>> 1 ^ (edx_10 * 2)) & 0x55555555) ^ (edx_10 * 2)
