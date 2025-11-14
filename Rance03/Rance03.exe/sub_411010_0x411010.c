// 函数: sub_411010
// 地址: 0x411010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg2 + 0x10) == 0)
    return 0

if (IsDlgButtonChecked(arg1, 0x9cdb) != 1)
    return 0

uint32_t result = IsDlgButtonChecked(arg1, 0x3ea)

if (result == 1)
    return result

int32_t eax_4 = IsDlgButtonChecked(arg1, 0x3eb) - 1
int32_t eax_5 = neg.d(eax_4)
return (sbb.d(eax_5, eax_5, eax_4 != 0) & 0xfffffffe) + 2
