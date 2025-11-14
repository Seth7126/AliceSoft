// 函数: sub_5f4ad0
// 地址: 0x5f4ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t result

while (true)
    EnterCriticalSection(*(arg1 + 8) + 4)
    
    if (*(arg1 + 0x10) != 0 || *(arg1 + 0x2c) != 0)
        ebx.b = 1
    else
        ebx.b = 0
    
    result = LeaveCriticalSection(*(arg1 + 8) + 4)
    
    if (ebx.b == 0)
        break
    
    Sleep(1)

return result
