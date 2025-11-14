// 函数: sub_64b3d0
// 地址: 0x64b3d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = zx.d(arg3)

if (eax == 0x9cd2)
    uint32_t eax_4
    eax_4.b = IsDlgButtonChecked(*(arg1 + 0x40), 0x9cdb) == 1
    *(arg1 + 0x44) = eax_4.b
    EndDialog(arg2, 1)
    return 1

if (eax == 2 || eax == 0x9cd0)
    EndDialog(arg2, 0)
    return 1

if (eax == 0x9cd4)
    sub_64b450(arg1)
    return 1

return 0
