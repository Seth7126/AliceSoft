// 函数: sub_697860
// 地址: 0x697860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *(arg1 + 4)

if (esi[4].b != 0)
    int32_t* ecx = *esi
    
    if (ecx != 0 && (*(*ecx + 0x4c))(ecx) s< 0)
        sub_64b530("DirectDraw")
        enum MESSAGEBOX_RESULT eax_2
        eax_2.b = 0
        return eax_2
    
    esi[4].b = 0

int32_t eax
eax.b = 1
return eax
