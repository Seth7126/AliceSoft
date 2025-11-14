// 函数: sub_41b6e0
// 地址: 0x41b6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CToolBarWnd::`vftable'
void* ecx = arg1[3]

if (ecx != 0)
    int32_t var_8_1 = arg2.d
    void* var_c_1 = ecx
    sub_41be60(ecx, arg1[4])
    j__free(arg1[3])
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
