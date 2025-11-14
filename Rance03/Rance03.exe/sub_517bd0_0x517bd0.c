// 函数: sub_517bd0
// 地址: 0x517bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CTextHighlightModel::VTable** result = arg4

if (arg3 != arg2)
    int32_t* esi_1 = arg3 + 8
    
    do
        if (result != 0)
            *result = &partsengine::CTextHighlightModel::`vftable'
            result[1] = esi_1[-1]
            result[2] = *esi_1
            result[3] = esi_1[1]
            result[4] = esi_1[2]
            result[5] = esi_1[3]
            result[6] = esi_1[4]
        
        esi_1 = &esi_1[7]
        result = &result[7]
    while (&esi_1[-2] != arg2)

return result
