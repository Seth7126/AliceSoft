// 函数: sub_5ea820
// 地址: 0x5ea820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x5d) = 1
sub_5e9a10(arg1 + 4)

if (*(arg1 + 0x48) != 0 && (*(**(arg1 + 0x48) + 0x10))() != 0 && *(arg1 + 0x48) != 0)
    char eax_1 = (*(**(arg1 + 0x48) + 0x1c))()
    
    if (eax_1 == 0)
        return eax_1
    
    if (*(arg1 + 0x48) != 0 && (*(**(arg1 + 0x48) + 0x20))() == 0)
        sub_64b530("Direct3D")
        enum MESSAGEBOX_RESULT eax_8
        eax_8.b = 0
        *(arg1 + 0x5d) = 0
        return eax_8

*(arg1 + 0x5d) = 0
return 1
