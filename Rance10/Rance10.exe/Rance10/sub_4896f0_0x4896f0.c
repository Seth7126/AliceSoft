// 函数: sub_4896f0
// 地址: 0x4896f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
uint32_t esi = arg1
HANDLE hHandle = *(esi + 0x44)
int32_t edx

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    arg1, edx = CloseHandle(*(esi + 0x44))
    *(esi + 0x44) = 0

HANDLE result = __beginthreadex(&var_4, edx, arg1, nullptr, 0, sub_489600, esi, 
    THREAD_CREATE_RUN_IMMEDIATELY, &var_4)

if (result == 0)
    result.b = 0
    return result

*(esi + 0x44) = result
result.b = 1
return result
