// 函数: sub_453e90
// 地址: 0x453e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &debugfile::CFunction::`vftable'{for `IDebugFileFunction'}

if (arg1[0x1b] u>= 0x10)
    j__free(arg1[0x16])

arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0
int32_t result = sub_454640(&arg1[0x13])
arg1[9] = &debugfile::CObjectType::`vftable'

if (arg1[0x11] u>= 0x10)
    result = j__free(arg1[0xc])

arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
return result
