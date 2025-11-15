// 函数: __Thrd_current
// 地址: 0x6e7c9a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE var_8 = arg1
HANDLE result = arg1
HANDLE hTargetProcessHandle = GetCurrentProcess()
HANDLE hSourceHandle = GetCurrentThread()

if (DuplicateHandle(GetCurrentProcess(), hSourceHandle, hTargetProcessHandle, &result, 2, 1, 0)
        == 0)
    result = nullptr
else
    CloseHandle(result)

GetCurrentThreadId()
return result
