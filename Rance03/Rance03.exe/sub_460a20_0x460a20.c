// 函数: sub_460a20
// 地址: 0x460a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x5c) == 0)
    struct exfile::CDefineDataTree::VTable** result = sub_69adc6(0x30)
    
    if (result != 0)
        *result = &exfile::CDefineDataTree::`vftable'
        result[6] = 0xf
        result[5] = 0
        result[1].b = 0
        __builtin_memset(&result[7], 0, 0x14)
        *(arg1 + 0x5c) = result
        return result
    
    *(arg1 + 0x5c) = 0

return *(arg1 + 0x5c)
