// 函数: sub_44de20
// 地址: 0x44de20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x2b8) == 1)
    bool eax
    
    if (*(arg1 + 0x2b4) != 0)
        int32_t eax_1 = sub_44e1e0(arg1)
        int32_t ebx_1 = *(*(arg1 + 0x2c0) + 0xc)
        int32_t* ecx_1 = *(arg1 + 0xc)
        int32_t eax_4 = (*(*ecx_1 + 0x18))((*(*ecx_1 + 0x1c))())
        eax = sub_524220(*(arg1 + 0x2b4), ebx_1, arg2, eax_1, eax_4)
    
    if (*(arg1 + 0x2b4) == 0 || eax == 0)
        return false

return true
