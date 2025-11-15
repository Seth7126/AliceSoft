// 函数: sub_542cc0
// 地址: 0x542cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (eax == 0)
    eax.b = 0
    return eax

void* edi = *(eax + 0x44)
sub_555e00(edi, 0x13, arg4)
void* esi_1 = *(edi + (arg4 << 2) + 0x7c)

if (*(esi_1 + 0x40) != arg2)
    *(esi_1 + 0x40) = arg2
    sub_55d550(esi_1)
    *(esi_1 + 0xd4) = 1

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    eax_1
eax_1.b = 1
return eax_1
