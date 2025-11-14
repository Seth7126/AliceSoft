// 函数: sub_53d700
// 地址: 0x53d700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[3]

if (eax != 0)
    j__free(eax)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

int32_t result = *arg1

if (result != 0)
    result = j__free(result)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
