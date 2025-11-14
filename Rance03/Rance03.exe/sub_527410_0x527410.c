// 函数: sub_527410
// 地址: 0x527410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0 && arg2 s< (*(arg1 + 8) - *(arg1 + 4)) s/ 0x38)
    int32_t edx_6 = arg2 * 0x38
    *(*(arg1 + 4) + edx_6 + 0x18) = arg3
    void** eax_6 = *(arg1 + 4) + edx_6
    eax_6[4] = 0
    
    if (eax_6[5] u>= 0x10)
        eax_6 = *eax_6
    
    *eax_6 = nullptr
    eax_6.b = 1
    return eax_6

int32_t eax
eax.b = 0
return eax
