// 函数: sub_5d55f0
// 地址: 0x5d55f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x5c) == 0)
    struct IString::sys43vm::CStringWrapper::VTable** eax_1 = sub_69adc6(8)
    
    if (eax_1 != 0)
        *eax_1 = &sys43vm::CStringWrapper::`vftable'{for `IString'}
        eax_1[1] = 0
        *(arg1 + 0x5c) = eax_1
        eax_1[1] = arg1
        return *(arg1 + 0x5c)
    
    *(arg1 + 0x5c) = 0
    *4 = arg1

return *(arg1 + 0x5c)
