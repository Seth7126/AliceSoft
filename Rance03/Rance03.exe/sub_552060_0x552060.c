// 函数: sub_552060
// 地址: 0x552060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg4

if (arg3 != arg2)
    int128_t* esi_1 = arg3 + 0xc
    
    do
        if (result != 0)
            *result = *(esi_1 - 0xc)
            result[1] = *(esi_1 - 8)
            result[2] = &sealengine::CFrameMulColor::`vftable'
            *(result + 0xc) = *esi_1
            result[7] = esi_1[1].d
        
        esi_1 = &esi_1[2]
        result = &result[8]
    while (esi_1 - 0xc != arg2)

return result
