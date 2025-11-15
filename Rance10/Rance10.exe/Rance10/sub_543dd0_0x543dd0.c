// 函数: sub_543dd0
// 地址: 0x543dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    void* edi_1 = result[0x11]
    result = sub_555e00(edi_1, 0x16, arg4)
    void* ecx_3 = *(edi_1 + (arg4 << 2) + 0x7c)
    
    if (*(ecx_3 + 0x28) != arg2 && arg2 u<= 2)
        *(ecx_3 + 0x28) = arg2
        return sub_553710(ecx_3) __tailcall

return result
