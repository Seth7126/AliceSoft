// 函数: sub_5d5980
// 地址: 0x5d5980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 8) == *(arg1 + 0xc))
    struct sys43vm::CPage::VTable** eax_1 = sub_69adc6(0x64)
    
    if (eax_1 == 0)
        return 0
    
    return sub_5d3190(eax_1, 3, *(arg1 + 4))

void* result = *(*(arg1 + 0xc) - 4)
*(arg1 + 0xc) -= 4
void* esi_1 = *(result + 0x1c)
*(result + 0xc) = 0
*(result + 0x14) = 3
*(result + 0x18) = 1

if (*(esi_1 + 0x18) s>= 0x989680)
    *(esi_1 + 0x18) = 1

int32_t ecx_1 = *(esi_1 + 0x18)
*(esi_1 + 0x18) = ecx_1 + 1
*(result + 0x20) = ecx_1
*(result + 0x24) = 0xffffffff
*(result + 0x30) = 0
*(result + 0x38) = 0xffffffff
*(result + 0x3c) = 0xffffffff
*(result + 0x40) = 0xffffffff
*(result + 0x44) = 0xffffffff
*(result + 0x48) = 0
*(result + 0x4c) = 0xffffffff
return result
