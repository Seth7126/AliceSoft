// 函数: sub_5d7670
// 地址: 0x5d7670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (sub_5d7510(arg1, arg2, arg3).b != 0)
    void* const ecx
    
    if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
        ecx = *(*(arg1 + 8) + (arg2 << 2))
    else
        ecx = nullptr
    
    if (arg3 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
        result = *(*(arg1 + 8) + (arg3 << 2))
    else
        result = 0
    
    if (ecx != 0 && result != 0)
        return sub_5d4ed0(ecx, result) != 0

result.b = 0
return result
