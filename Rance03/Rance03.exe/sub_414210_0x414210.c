// 函数: sub_414210
// 地址: 0x414210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1[1]
*arg1 = &dpanalysis::CBrowseFolderDlg::`vftable'

if (esi != 0)
    if (esi[5] u>= 0x10)
        j__free(*esi)
    
    esi[5] = 0xf
    esi[4] = 0
    *esi = 0
    j__free(esi)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
