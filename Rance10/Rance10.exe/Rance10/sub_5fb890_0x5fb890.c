// 函数: sub_5fb890
// 地址: 0x5fb890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct win32only::CHighResolutionTimer::VTable** result = arg4
void* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = &win32only::CHighResolutionTimer::`vftable'
        result[2] = *(esi + 8)
        result[3] = *(esi + 0xc)
    
    esi += 0x10
    result = &result[4]

return result
