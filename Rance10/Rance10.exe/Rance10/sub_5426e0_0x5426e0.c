// 函数: sub_5426e0
// 地址: 0x5426e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = result[0x11]
    result = sub_555e00(edi_1, 0x13, arg4)
    void* esi_2 = *(edi_1 + (arg4 << 2) + 0x7c)
    
    if (*(esi_2 + 0xc4) != ebx.b)
        *(esi_2 + 0xc4) = ebx.b
        result = sub_55d550(esi_2)
        *(esi_2 + 0xd4) = 1

return result
