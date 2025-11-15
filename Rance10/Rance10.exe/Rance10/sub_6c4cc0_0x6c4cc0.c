// 函数: sub_6c4cc0
// 地址: 0x6c4cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax_8 = zx.d(arg3)

if (eax_8 == 1)
    uint32_t eax_6
    eax_6.b = IsDlgButtonChecked(*(arg1 + 0x40), 0x3ec) == 1
    *(arg1 + 0x44) = eax_6.b
    EndDialog(arg2, 1)
    return 1

if (eax_8 == 2)
    EndDialog(arg2, 0)
    return 1

if (eax_8 != 0x3eb)
    return 0

sub_6c4d30(arg1)
return 1
