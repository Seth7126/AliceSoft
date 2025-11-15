// 函数: ?_Locinfo_dtor@_Locinfo@std@@SAXPAV12@@Z
// 地址: 0x6d46d7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg1

if (*(result + 0x24) != 0)
    void* ecx_1 = *(result + 0x24)
    
    if (ecx_1 == 0)
        ecx_1 = &result[0x28]
    
    result = _setlocale(0, ecx_1)

return result
