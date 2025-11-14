// 函数: sub_443d90
// 地址: 0x443d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &apeg::CDecodedPicture::`vftable'
int32_t eax = arg1[9]

if (eax != 0)
    j__free(eax)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

int32_t eax_1 = arg1[6]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

int32_t result = arg1[3]

if (result != 0)
    result = j__free(result)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

return result
