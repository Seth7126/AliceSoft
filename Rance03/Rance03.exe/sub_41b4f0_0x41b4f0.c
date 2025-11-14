// 函数: sub_41b4f0
// 地址: 0x41b4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CTextMemory::`vftable'
int32_t eax = arg1[0xe]

if (eax != 0)
    j__free(eax)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

int32_t eax_1 = arg1[0xb]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

if (arg1[0xa] u>= 0x10)
    j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
