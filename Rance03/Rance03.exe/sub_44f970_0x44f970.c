// 函数: sub_44f970
// 地址: 0x44f970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct commonsystemdata::CCommonSystemData::VTable** var_4 = arg1
*arg1 = &commonsystemdata::CCommonSystemData::`vftable'
int32_t** eax = arg1[7]
sub_450b70(&arg1[7], &var_4, *eax, eax)
j__free(arg1[7])

if (arg1[6] u>= 0x10)
    j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
