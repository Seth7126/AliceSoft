// 函数: sub_5d5920
// 地址: 0x5d5920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 8) == *(arg1 + 0xc))
    struct sys43vm::CPage::VTable** eax_1 = sub_69adc6(0x64)
    
    if (eax_1 == 0)
        return 0
    
    return sub_5d3190(eax_1, 2, *(arg1 + 4))

int32_t* result = *(*(arg1 + 0xc) - 4)
*(arg1 + 0xc) -= 4

if (sub_5d33c0(result, 2) != 0)
    return result

if (result != 0)
    (**result)(1)

return 0
