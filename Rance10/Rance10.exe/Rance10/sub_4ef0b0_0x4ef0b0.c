// 函数: sub_4ef0b0
// 地址: 0x4ef0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x74)

if (ecx == 0)
    return 

int32_t eax = (*(*ecx + 8))(1)

if (eax != 0xc && eax != 0xd)
    return 

int32_t eax_3 = (*(**(arg1 + 0x74) + 0x24))(1)
int32_t* ecx_2 = *(arg1 + 0x74)
*(arg1 + 0x320) = eax_3
*(arg1 + 0x324) = (*(*ecx_2 + 0x28))(1)
