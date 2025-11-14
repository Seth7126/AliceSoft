// 函数: sub_4568a0
// 地址: 0x4568a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x20)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x20) = 0

*(arg1 + 4) = 0
HMODULE hModule = GetModuleHandleA(arg2)
*(arg1 + 4) = hModule

if (hModule != 0)
    int32_t eax_2 = GetProcAddress(hModule, "CreateInterface")
    
    if (eax_2 != 0)
        hModule = eax_2(0x6db940)
        *(arg1 + 0x20) = hModule
        
        if (hModule != 0)
            sub_402670(arg1 + 8, arg2)
            int32_t* eax_3
            eax_3.b = 1
            return eax_3
    else
        char* var_c_1 = arg2
        sub_64b530("DrawPluginDLL")

hModule.b = 0
return hModule
