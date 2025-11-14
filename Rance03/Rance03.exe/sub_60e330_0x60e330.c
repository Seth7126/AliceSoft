// 函数: sub_60e330
// 地址: 0x60e330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0xc)
int32_t result

if (esi == 0)
    result.b = 0
    return result

void* ebx = *(arg1 + 8)

if (*(ebx + 0x140) != esi)
    int32_t* ecx = *(ebx + 0x38)
    int32_t eax = 0x39
    
    if (*(arg1 + 0x20) != 0)
        eax = 0x2a
    
    (*(*ecx + 0x4c))(ecx, esi, eax, 0)
    *(ebx + 0x140) = esi

result.b = 1
return result
