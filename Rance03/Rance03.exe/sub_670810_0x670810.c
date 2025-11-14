// 函数: sub_670810
// 地址: 0x670810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg1[5]
*arg1 = &dpparts::CGuiToolbar::`vftable'
j__free(var_8)
arg1[5] = 0
int32_t eax = arg1[2]

if (eax != 0)
    j__free(eax)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
