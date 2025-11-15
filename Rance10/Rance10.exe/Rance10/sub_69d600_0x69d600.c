// 函数: sub_69d600
// 地址: 0x69d600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class kiwi::ISoundBufferFactory>::kiwi::CDirectSound::VTable** ecx
struct common::SuicideRefCounter<class kiwi::ISoundBufferFactory>::kiwi::CDirectSound::VTable** 
    var_4 = ecx
int32_t* esi = data_7fcb88

if (esi == 0)
    return 0

int32_t eax_2 = (**esi)(0x76fa94)

if (eax_2 == 0)
    return eax_2

int32_t* eax_4 = (**esi)(0x76fcb0)

if (eax_4 != 0)
    struct common::SuicideRefCounter<class kiwi::ISoundBufferFactory>::kiwi::CDirectSound::VTable** 
        eax_5 = sub_6e810c(0x20)
    var_4 = eax_5
    struct common::SuicideRefCounter<class kiwi::ISoundBufferFactory>::kiwi::CDirectSound::VTable** 
        eax_6 = sub_69d080(eax_5)
    
    if (sub_69d170(eax_6, (*(*eax_4 + 0x38))(eax_2)) != 0)
        return eax_6
    
    if (eax_6 != 0)
        (*eax_6)->vFunc_4(1)

return 0
