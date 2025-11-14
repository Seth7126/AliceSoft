// 函数: sub_5e86f0
// 地址: 0x5e86f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

uint32_t lpdwProcessId = 0
uint32_t lpdwProcessId_1 = 0
GetWindowThreadProcessId(arg1, &lpdwProcessId)
GetWindowThreadProcessId(arg2, &lpdwProcessId_1)
int32_t eax_1
eax_1.b = lpdwProcessId == lpdwProcessId_1
return eax_1
