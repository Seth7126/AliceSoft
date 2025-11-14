// 函数: sub_410fc0
// 地址: 0x410fc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax
eax.b = IsDlgButtonChecked(arg1, 0x9cdb) == 1
uint32_t bEnable = zx.d(eax.b)
EnableWindow(GetDlgItem(arg1, 0x9cce), bEnable)
EnableWindow(GetDlgItem(arg1, 0x3ea), bEnable)
return EnableWindow(GetDlgItem(arg1, 0x3eb), bEnable)
