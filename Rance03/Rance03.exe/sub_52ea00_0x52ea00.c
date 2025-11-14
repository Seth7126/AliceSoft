// 函数: sub_52ea00
// 地址: 0x52ea00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CRect::VTable** result = arg4

if (arg3 != arg2)
    int32_t* esi_1 = arg3 + 8
    
    do
        if (result != 0)
            *result = &sealengine::CRect::`vftable'
            result[1] = esi_1[-1]
            result[2] = *esi_1
            result[3] = esi_1[1]
            result[4] = esi_1[2]
        
        esi_1 = &esi_1[5]
        result = &result[5]
    while (&esi_1[-2] != arg2)

return result
