// 函数: sub_59e3a0
// 地址: 0x59e3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CWriteVertexList::VTable** var_4 = arg1
*arg1 = &sealengine::CWriteVertexList::`vftable'
sub_59e430(arg1)
int32_t** eax = arg1[4]
sub_59eaf0(&arg1[4], &var_4, *eax, eax)
j__free(arg1[4])
sub_52e850(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
