// 函数: sub_440980
// 地址: 0x440980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &anteater::CADVScene::`vftable'
int32_t eax = arg1[0x13]

if (eax != 0)
    j__free(eax)
    arg1[0x13] = 0
    arg1[0x14] = 0
    arg1[0x15] = 0

int32_t eax_1 = arg1[0x10]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

int32_t result = sub_4414b0(&arg1[8])

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
return result
