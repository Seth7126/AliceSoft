// 函数: sub_582e30
// 地址: 0x582e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CPolyMesh::`vftable'
int32_t eax = arg1[0xd]

if (eax != 0)
    j__free(eax)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t result = sub_580580(&arg1[0xa])

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
return result
