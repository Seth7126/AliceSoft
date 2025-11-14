// 函数: sub_4ced80
// 地址: 0x4ced80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CIntentData::`vftable'
int32_t* eax = arg1[1]

if (eax != 0)
    sub_4107c0(eax, arg1[2])
    j__free(arg1[1])
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
