// 函数: sub_50ff50
// 地址: 0x50ff50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = sub_4c2a70(arg1 + 0x40, arg2, arg3)
void* ecx_1 = *(arg1 + 0xac)

if (ecx_1 != 0 && *(ecx_1 + 0xaa) != 0 && *(ecx_1 + 0xab) != 0 && *(ecx_1 + 0xb0) != 0)
    result = (*(**(ecx_1 + 0x74) + 0x40))(arg2, arg3)

void* ecx_3 = *(arg1 + 0xb0)

if (ecx_3 != 0 && *(ecx_3 + 0xaa) != 0 && *(ecx_3 + 0xab) != 0 && *(ecx_3 + 0xb0) != 0)
    return (*(**(ecx_3 + 0x74) + 0x40))(arg2, arg3)

return result
