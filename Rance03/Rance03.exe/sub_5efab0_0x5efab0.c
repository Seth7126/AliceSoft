// 函数: sub_5efab0
// 地址: 0x5efab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct chipmunk::CExternalCompressedFont::VTable** result = arg4

if (arg3 != arg2)
    int32_t* esi_1 = arg3 + 8
    
    do
        if (result != 0)
            *result = &chipmunk::CExternalCompressedFont::`vftable'
            result[1] = esi_1[-1]
            result[2] = *esi_1
            result[3] = esi_1[1]
        
        esi_1 = &esi_1[4]
        result = &result[4]
    while (&esi_1[-2] != arg2)

return result
