// 函数: sub_672960
// 地址: 0x672960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax_1 = *(*(arg1 + 0x5c) + 0xe0)

if (eax_1 != 0)
    eax_1 = *(eax_1 + 0x74)
    
    if (eax_1 != 0)
        eax_1 = *(eax_1 + 0x30)

uint32_t result = sub_672c90(arg1, eax_1)
void* ecx_1 = *(*(arg1 + 0x5c) + 0xe0)

if (ecx_1 != 0)
    void* ecx_2 = *(ecx_1 + 0x74)
    
    if (ecx_2 != 0)
        int32_t* __saved_esi_1 = *(ecx_2 + 0x2c)
        *(ecx_2 + 0x30) = result
        return sub_6827a0(ecx_2, __saved_esi_1)

return result
