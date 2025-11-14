// 函数: sub_686310
// 地址: 0x686310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax
eax.b = IsDlgButtonChecked(*(arg1 + 0x28), *(arg1 + 0x2c)) == 1
*(arg2 + 4) = eax.b
uint32_t eax_1
eax_1.b = IsDlgButtonChecked(*(arg1 + 0x40), *(arg1 + 0x44)) == 1
*(arg2 + 5) = eax_1.b
uint32_t eax_2
eax_2.b = IsDlgButtonChecked(*(arg1 + 0x58), *(arg1 + 0x5c)) == 1
*(arg2 + 6) = eax_2.b
uint32_t eax_3
eax_3.b = IsDlgButtonChecked(*(arg1 + 0x70), *(arg1 + 0x74)) == 1
*(arg2 + 7) = eax_3.b
uint32_t eax_4
eax_4.b = IsDlgButtonChecked(*(arg1 + 0x88), *(arg1 + 0x8c)) == 1
*(arg2 + 8) = eax_4.b
uint32_t result
result.b = IsDlgButtonChecked(*(arg1 + 0xa0), *(arg1 + 0xa4)) == 1
*(arg2 + 9) = result.b
return result
