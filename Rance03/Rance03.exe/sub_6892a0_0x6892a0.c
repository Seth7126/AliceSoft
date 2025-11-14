// 函数: sub_6892a0
// 地址: 0x6892a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpsound::CSoundData::`vftable'
int32_t result = arg1[0xa]
arg1[0xb] = result

if (result != 0)
    result = j__free(result)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

if (arg1[8] u>= 0x10)
    result = j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
return result
