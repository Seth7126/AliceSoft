// 函数: sub_4741f0
// 地址: 0x4741f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x10)

if (eax == 0)
    eax = 0xac44

int32_t eax_1
uint32_t edx
eax_1, edx = __allmul(arg2, 0, eax, 0)
uint32_t eax_2 = __aulldiv(eax_1, edx, 0x3e8, 0)
uint32_t eax_3 = *(arg1 + 0x18)

if (eax_3 == 0)
    eax_3 = 4
    uint32_t ecx_2 = (*(arg1 + 0x1c) * *(arg1 + 0xc)) u>> 3
    
    if (ecx_2 != 0)
        eax_3 = ecx_2

return eax_3 * eax_2
