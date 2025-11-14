// 函数: sub_1000c210
// 地址: 0x1000c210
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

while (*(arg1 + 0xb4) != 0)
    MSG msg
    PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE)
    Sleep(1)

uint8_t result = (GetQueueStatus(QS_POSTMESSAGE) u>> 0x10).b

if ((result & 8) == 0)
    return result

return PostThreadMessageA(GetCurrentThreadId(), 0, 0, 0)
