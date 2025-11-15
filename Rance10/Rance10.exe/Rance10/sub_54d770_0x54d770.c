// 函数: sub_54d770
// 地址: 0x54d770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* ecx = *arg1

if (ecx != 0)
    int32_t esi_1 = ecx[1]
    ecx[1] -= 1
    (**ecx)(esi_1 - 1)
    *arg1 = 0
    arg1[5].b = 1

struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
    eax_3 = sub_6e810c(0x130)
struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
    var_4 = eax_3
struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
    result = sub_450430(eax_3)
bool cond:0 = arg1[0xd].b == 0
*arg1 = result

if (cond:0)
    return result

return sub_451b40(result) __tailcall
