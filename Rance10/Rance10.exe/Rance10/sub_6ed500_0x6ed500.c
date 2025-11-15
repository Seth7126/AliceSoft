// 函数: sub_6ed500
// 地址: 0x6ed500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

enum PAGE_PROTECTION_FLAGS lpflOldProtect = arg1

if (data_7fc2d8 s>= 3)
    return ___crtFlushProcessWriteBuffers()

char* lpAddress = *(arg1 + 0x8c)

if (*lpAddress != 1)
    return lpAddress

return VirtualProtect(lpAddress, 1, PAGE_READONLY, &lpflOldProtect)
