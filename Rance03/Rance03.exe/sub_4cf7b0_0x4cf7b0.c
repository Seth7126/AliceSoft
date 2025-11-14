// 函数: sub_4cf7b0
// 地址: 0x4cf7b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CActivityDataList::VTable** var_4 = arg1
*arg1 = &partsengine::CActivityDataList::`vftable'
int32_t** eax = arg1[1]
sub_4d0490(&arg1[1], &var_4, *eax, eax)
j__free(arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
