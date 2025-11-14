// 函数: sub_5d5630
// 地址: 0x5d5630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x60) == 0)
    struct IVMArray::sys43vm::CVMArrayWrapper::VTable** eax_1 = sub_69adc6(8)
    
    if (eax_1 != 0)
        *eax_1 = &sys43vm::CVMArrayWrapper::`vftable'{for `IVMArray'}
        eax_1[1] = 0
        *(arg1 + 0x60) = eax_1
        eax_1[1] = arg1
        return *(arg1 + 0x60)
    
    *(arg1 + 0x60) = 0
    *4 = arg1

return *(arg1 + 0x60)
