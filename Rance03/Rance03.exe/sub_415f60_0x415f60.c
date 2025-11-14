// 函数: sub_415f60
// 地址: 0x415f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct dpanalysis::CCommentArea::VTable** result = arg4

if (arg3 != arg2)
    int32_t* esi_1 = arg3 + 8
    
    do
        if (result != 0)
            *result = &dpanalysis::CCommentArea::`vftable'
            result[1] = esi_1[-1]
            result[2] = *esi_1
        
        esi_1 = &esi_1[3]
        result = &result[3]
    while (&esi_1[-2] != arg2)

return result
