// 函数: sub_49e170
// 地址: 0x49e170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x244)

if (*(esi + 8) != 0)
    int32_t eax_1 = *(esi + 0xc)
    
    if (eax_1 == 0)
        if (sub_6cd7a0(esi + 0x10) == 0)
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
