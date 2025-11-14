// 函数: sub_64c850
// 地址: 0x64c850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SetFocus(arg2)
SetCapture(arg2)
uint32_t eax = zx.d(arg3.w)
uint32_t edx_1 = arg3 u>> 0x10
*(arg1 + 0x114) = eax
*(arg1 + 0x11c) = eax
*(arg1 + 0x124) = 1
*(arg1 + 0x118) = edx_1
*(arg1 + 0x120) = edx_1
return 0
