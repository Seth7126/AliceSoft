// 函数: sub_442e10
// 地址: 0x442e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result

if (*(arg1 + 0xcc) == *(arg1 + 0xd0))
    int32_t* ecx_1 = *(arg1 + 0x430)
    
    if (ecx_1 == 0)
        result.b = 0
        return result
    
    *(arg1 + 0x434) = (**ecx_1)()
else
    int32_t* ecx = *(data_75d4e4 + 0x93c)
    
    if (ecx == 0)
        result.b = 0
        return result
    
    int32_t var_8_1 = *(arg1 + 0x42c)
    
    if (sub_476380(ecx).b == 0)
        result.b = 0
        return result
HANDLE hEvent = *(arg1 + 0x10)

if (hEvent != 0)
    SetEvent(hEvent)

return sub_5f44a0(arg1 + 4, sub_442e80, arg1)
