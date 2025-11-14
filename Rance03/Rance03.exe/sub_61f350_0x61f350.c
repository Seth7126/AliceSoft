// 函数: sub_61f350
// 地址: 0x61f350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
HANDLE hHandle = *(arg1 + 0x38)

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(*(arg1 + 0x38))
    *(arg1 + 0x38) = 0

HANDLE result = __beginthreadex(nullptr, 0, sub_61f3c0, arg1, THREAD_CREATE_RUN_IMMEDIATELY, &var_4)

if (result == 0)
    result.b = 0
    return result

*(arg1 + 0x38) = result
result.b = 1
return result
