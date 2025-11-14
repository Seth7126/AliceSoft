// 函数: sub_488500
// 地址: 0x488500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CFlatEmitterData::`vftable'{for `IInterface'}
void** result = sub_488570(arg1)

if (arg1[0x53] u>= 0x10)
    result = j__free(arg1[0x4e])

arg1[0x53] = 0xf
arg1[0x52] = 0
arg1[0x4e].b = 0

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
return result
