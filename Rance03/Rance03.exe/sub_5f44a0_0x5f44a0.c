// 函数: sub_5f44a0
// 地址: 0x5f44a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
HANDLE hHandle = *(arg1 + 4)

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(*(arg1 + 4))
    *(arg1 + 4) = 0

HANDLE result = __beginthreadex(nullptr, 0, arg2, arg3, THREAD_CREATE_RUN_IMMEDIATELY, &var_4)

if (result == 0)
    result.b = 0
    return result

*(arg1 + 4) = result
result.b = 1
return result
