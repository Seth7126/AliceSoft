// 函数: sub_473e90
// 地址: 0x473e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct IChangeVolumeCallback::kiwi::CVolumeChanger::VTable** var_4 = arg1
*arg1 = &kiwi::CVolumeChanger::`vftable'{for `IChangeVolumeCallback'}
arg1[1] = &kiwi::CGroupVolume::`vftable'
int32_t** eax = arg1[2]
sub_4200d0(&arg1[2], &var_4, *eax, eax)
j__free(arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
