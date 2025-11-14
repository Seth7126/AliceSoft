// 函数: sub_4c9110
// 地址: 0x4c9110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = sub_47eac0(arg1 + 0x34, arg2)
void* ecx_1 = *(arg1 + 0x94)

if (ecx_1 != 0 && *(ecx_1 + 0x8c) != 0 && *(ecx_1 + 0x90) != 0)
    result = (*(**(ecx_1 + 0x5c) + 0x4c))(arg2)

void* ecx_3 = *(arg1 + 0x98)

if (ecx_3 != 0 && *(ecx_3 + 0x8c) != 0 && *(ecx_3 + 0x90) != 0)
    return (*(**(ecx_3 + 0x5c) + 0x4c))(arg2)

return result
