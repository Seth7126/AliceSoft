// 函数: sub_10012a50
// 地址: 0x10012a50
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 != arg1)
    if (*(arg1 + 0x40) != 0)
        CoTaskMemFree(*(arg1 + 0x44))
        *(arg1 + 0x40) = 0
        *(arg1 + 0x44) = 0
    
    int32_t* eax_2 = *(arg1 + 0x3c)
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)
        *(arg1 + 0x3c) = 0
    
    if (sub_10012980(arg1, arg2) s< 0)
        return 0x8007000e

return 0
