// 函数: sub_517e10
// 地址: 0x517e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    esi = arg2
void* edi = *(arg1 + 0x44)
sub_555e00(edi, 0x16, esi)
void* ecx_1 = *(edi + (esi << 2) + 0x7c)
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    arg_4
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    edx = arg_4
arg2 = edx

if (*(ecx_1 + 0x2bc) != edx)
    arg_4 = nullptr
    int32_t* eax = &arg2
    
    if (edx s<= 0)
        eax = &arg_4
    
    *(ecx_1 + 0x2bc) = *eax
    sub_553710(ecx_1)

struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    result
result.b = 1
return result
