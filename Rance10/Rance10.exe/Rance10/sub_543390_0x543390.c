// 函数: sub_543390
// 地址: 0x543390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_4f4e40(data_7fcba4 + 0x124, arg1)

if (eax == 0)
    eax.b = 0
    return eax

void* esi = *(eax + 0x44)
sub_555e00(esi, 0x15, arg2)
void* ecx_3 = *(esi + (arg2 << 2) + 0x7c)
float xmm0 = *(ecx_3 + 0x20)
xmm0 - arg3
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    eax_1
eax_1:1.b =
    (xmm0 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0, arg3) ? 1 : 0) << 2 | (xmm0 < arg3 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_1 = *(ecx_3 + 0x24)
    xmm0_1 - arg4
    eax_1:1.b = (xmm0_1 == arg4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg4) ? 1 : 0) << 2
        | (xmm0_1 < arg4 ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    *(ecx_3 + 0x20) = arg3
    *(ecx_3 + 0x24) = arg4
    *(ecx_3 + 0xb4) = 1

eax_1.b = 1
return eax_1
