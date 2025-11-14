// 函数: sub_5d5570
// 地址: 0x5d5570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x50) == 0)
    struct IMemory::sys43vm::CRecycleMemoryWrapper::VTable** result = sub_69adc6(0xc)
    
    if (result != 0)
        *result = &sys43vm::CRecycleMemoryWrapper::`vftable'{for `IMemory'}
        result[1] = arg1 + 4
        result[2] = 1
        *(arg1 + 0x50) = result
        return result
    
    *(arg1 + 0x50) = 0

return *(arg1 + 0x50)
