// 函数: sub_5d55b0
// 地址: 0x5d55b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x54) == 0)
    struct IVMStruct::sys43vm::CVMStructWrapper::VTable** eax_1 = sub_69adc6(8)
    
    if (eax_1 != 0)
        *eax_1 = &sys43vm::CVMStructWrapper::`vftable'{for `IVMStruct'}
        eax_1[1] = 0
        *(arg1 + 0x54) = eax_1
        eax_1[1] = arg1
        return *(arg1 + 0x54)
    
    *(arg1 + 0x54) = 0
    *4 = arg1

return *(arg1 + 0x54)
