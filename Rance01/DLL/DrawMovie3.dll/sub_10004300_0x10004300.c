// 函数: sub_10004300
// 地址: 0x10004300
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

HMODULE hModule = GetModuleHandleW(u"mscoree.dll")

if (hModule != 0)
    hModule = GetProcAddress(hModule, "CorExitProcess")
    
    if (hModule != 0)
        return hModule(arg1)

return hModule
