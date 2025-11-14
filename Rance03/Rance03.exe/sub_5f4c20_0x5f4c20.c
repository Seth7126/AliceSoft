// 函数: sub_5f4c20
// 地址: 0x5f4c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &viewtrans::CDXTransition::`vftable'{for `IViewTransitionD3D9'}
sub_5f5320(arg1)
int32_t* ecx = arg1[5]

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[5] = 0

int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[4] = 0

int32_t* ecx_2 = arg1[0xb]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    arg1[0xb] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
