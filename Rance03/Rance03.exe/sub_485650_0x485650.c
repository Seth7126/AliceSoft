// 函数: sub_485650
// 地址: 0x485650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CEventSubject::`vftable'
arg1[2] = arg1[1]
int32_t eax_1 = arg1[5]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
