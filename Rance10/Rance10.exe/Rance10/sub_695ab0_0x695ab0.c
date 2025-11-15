// 函数: sub_695ab0
// 地址: 0x695ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
uint32_t esi = arg1
HANDLE hHandle = *(esi + 0x60)
int32_t edx

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    arg1, edx = CloseHandle(*(esi + 0x60))
    *(esi + 0x60) = 0

HANDLE result = __beginthreadex(&var_4, edx, arg1, nullptr, 0, sub_695b20, esi, 
    THREAD_CREATE_RUN_IMMEDIATELY, &var_4)

if (result == 0)
    result.b = 0
    return result

*(esi + 0x60) = result
result.b = 1
return result
