// 函数: sub_543c30
// 地址: 0x543c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* edi = *(eax + 0x44)
sub_555e00(edi, 0x16, arg4)
void* ecx_3 = *(edi + (arg4 << 2) + 0x7c)

if (*(ecx_3 + 0x2b8) != arg2)
    *(ecx_3 + 0x2b8) = arg2
    sub_553710(ecx_3)

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    eax_1
eax_1.b = 1
return eax_1
