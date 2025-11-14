// 函数: sub_492d20
// 地址: 0x492d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = arg1[4]
*arg1 = &partsengine::CFlatLayerScriptView::`vftable'{for `IInterface'}

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[4] = 0

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[3] = 0

int32_t* ecx_2 = arg1[2]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    arg1[2] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
