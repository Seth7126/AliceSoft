// 函数: sub_653a20
// 地址: 0x653a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg1[4]
*arg1 = &dpparts::CColorDialog::`vftable'
j__free(var_8)
int32_t eax = arg1[1]

if (eax != 0)
    j__free(eax)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
