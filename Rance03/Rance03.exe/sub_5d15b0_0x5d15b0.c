// 函数: sub_5d15b0
// 地址: 0x5d15b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CMessageTextList::`vftable'
int32_t* ecx = arg1[1]

if (ecx != 0)
    int32_t var_8_1 = arg2.d
    int32_t* var_c_1 = ecx
    sub_48c2c0(ecx, arg1[2])
    j__free(arg1[1])
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
