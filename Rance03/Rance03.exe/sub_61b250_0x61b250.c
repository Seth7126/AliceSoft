// 函数: sub_61b250
// 地址: 0x61b250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &graphengined3d11::CViewport::`vftable'{for `IViewport'}
arg1[1] = 1
arg1[2] = arg2
struct graphengined3d11::CViewport::CImpl::VTable** eax = sub_69adc6(0x3c)

if (eax == 0)
    arg1[3] = 0
    return arg1

eax[1] = arg2
*eax = &graphengined3d11::CViewport::CImpl::`vftable'
eax[0xe].b = 0
arg1[3] = eax
return arg1
