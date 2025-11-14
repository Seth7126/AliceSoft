// 函数: sub_596cf0
// 地址: 0x596cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CSkeleton::`vftable'
sub_596fd0(arg1)

if (arg1[0x12] u>= 0x10)
    j__free(arg1[0xd])

arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
arg1[9] = &sealengine::CBoneCollisionShapeList::`vftable'
sub_52c1c0(&arg1[0xa])
sub_52c580(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
