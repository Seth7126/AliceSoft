// 函数: sub_4e35d0
// 地址: 0x4e35d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CKey::`vftable'
arg1[3] = arg1[2]
int32_t eax_1 = arg1[5]
arg1[6] = eax_1

if (eax_1 != 0)
    j__free(eax_1)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t result = arg1[2]

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

arg1[1] = &partsengine::CIbisInputWrapper::`vftable'
return result
