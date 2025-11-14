// 函数: sub_1001389c
// 地址: 0x1001389c
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

HMODULE hModule = GetModuleHandleA("KERNEL32")

if (hModule != 0)
    int32_t eax = GetProcAddress(hModule, "IsProcessorFeaturePresent")
    
    if (eax != 0)
        return eax(0)

return sub_1001385e() __tailcall
