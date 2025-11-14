// 函数: sub_54bac0
// 地址: 0x54bac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CSQT::VTable** result = arg4

if (arg3 != arg2)
    int64_t* esi_1 = arg3 + 0x14
    
    do
        if (result != 0)
            *result = &sealengine::CSQT::`vftable'
            *(result + 4) = *(esi_1 - 0x10)
            *(result + 0x14) = *esi_1
            result[7] = esi_1[1].d
        
        esi_1 = &esi_1[4]
        result = &result[8]
    while (esi_1 - 0x14 != arg2)

return result
