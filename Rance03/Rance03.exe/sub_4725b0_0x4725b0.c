// 函数: sub_4725b0
// 地址: 0x4725b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &kiwi::CSoundVolumeManager::`vftable'{for `IVolumeValancer'}
int32_t eax = arg1[0x242]

if (eax != 0)
    j__free(eax)
    arg1[0x242] = 0
    arg1[0x243] = 0
    arg1[0x244] = 0

`eh vector vbase constructor iterator'(&arg1[1], 0x24, 0x40, sub_4240a0)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
