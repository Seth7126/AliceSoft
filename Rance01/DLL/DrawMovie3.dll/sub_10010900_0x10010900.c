// 函数: sub_10010900
// 地址: 0x10010900
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

arg1[2] = arg2
*arg1 = &CEnumMediaTypes::`vftable'{for `IEnumMediaTypes'}
arg1[1] = 0
arg1[4] = 1
(*(*(arg2 + 0xc) + 4))(arg2 + 0xc)

if (arg3 == 0)
    arg1[3] = (*(arg1[2]->vFunc_0 + 0x10))()
    return arg1

arg1[1] = *(arg3 + 4)
arg1[3] = *(arg3 + 0xc)
return arg1
