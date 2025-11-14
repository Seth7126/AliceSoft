// 函数: sub_58c330
// 地址: 0x58c330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 4)

if (ecx == 0)
    int32_t result
    result.b = 0
    return result

int32_t eax_2

if (((*(ecx + 0x1a4) - *(ecx + 0x1a0)) & 0xfffffffc) s> 0)
    eax_2 = **(ecx + 0x1a0)
else
    eax_2 = 0

eax_2.b = eax_2 != 0
return sub_547380(arg1 + 0x130, ecx + 4, eax_2.b)
