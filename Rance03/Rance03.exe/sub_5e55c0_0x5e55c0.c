// 函数: sub_5e55c0
// 地址: 0x5e55c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x21c)

if (*(esi + 8) != 0)
    int32_t eax_1 = *(esi + 0xc)
    
    if (eax_1 == 0)
        if (sub_697860(esi + 0x10) == 0)
            return 0
    else
        if (eax_1 == 1)
            ChangeDisplaySettingsA(nullptr, 0)
            *(esi + 8) = 0
            enum DISP_CHANGE result
            result.b = 1
            return result
        
        if (eax_1 != 2)
            return 0
    
    *(esi + 8) = 0

return 1
