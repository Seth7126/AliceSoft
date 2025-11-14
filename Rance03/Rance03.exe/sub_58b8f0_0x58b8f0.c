// 函数: sub_58b8f0
// 地址: 0x58b8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi_1 = *(arg1 + 4) + 0x158
enum MESSAGEBOX_RESULT eax

if (*esi_1 s>= 0 && esi_1[1] s>= 0)
    if (*(arg1 + 0x2e8) == 0)
        eax = (*(**(arg1 + 8) + 0x58))()
        *(arg1 + 0x2e8) = eax
    
    if (*(arg1 + 0x2e8) != 0 || eax != 0)
        (*(**(arg1 + 0x2e8) + 0x28))(*esi_1, esi_1[1], esi_1[2], esi_1[3], 0, 0x3f800000)
        int32_t eax_5
        int32_t ecx_3
        int32_t edx_1
        eax_5, edx_1, ecx_3 = (*(**(arg1 + 0x2e8) + 8))()
        
        if (eax_5.b != 0)
            eax_5.b = 1
            return eax_5
        
        sub_59f4e0(eax_5, edx_1, ecx_3, 0x6e58e8, arg2)

eax.b = 0
return eax
