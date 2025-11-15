// 函数: sub_489260
// 地址: 0x489260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_489590(arg1)
(*(**(arg1 + 4) + 0x14))()
(*(**(arg1 + 4) + 0xc))()
struct common::SuicideRefCounter<class IWaveFormat>::kiwi::CWaveFormat::VTable** eax_2 =
    sub_6e810c(0x20)
struct common::SuicideRefCounter<class IWaveFormat>::kiwi::CWaveFormat::VTable** var_4 = eax_2
eax_2[1] = 1
*eax_2 = &kiwi::CWaveFormat::`vftable'{for `common::SuicideRefCounter<class IWaveFormat>'}
__builtin_memset(&eax_2[2], 0, 0x18)
struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** eax_3 =
    sub_487b90(eax_2, arg3, arg2, eax_2)

if (eax_3 != 0)
    struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataFiltered::VTable** eax_4 =
        sub_489360(eax_3, eax_2, arg4)
    bool cond:0_1 = (*(**(arg1 + 4) + 8))(eax_4, eax_2) != 0
    struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataFiltered::VTable* eax_6 =
        *eax_4
    
    if (cond:0_1)
        eax_6->vFunc_1()
        (*eax_2)->vFunc_1()
        int32_t ebx
        ebx.b = *(arg1 + 0xc)
        int32_t* ecx_7 = *(arg1 + 4)
        int32_t eax_10
        eax_10.b = ebx.b == 0
        *(arg1 + 0x10) = eax_10 + 1
        int32_t eax_12
        eax_12.b = ebx.b == 0
        (*(*ecx_7 + 0x2c))(eax_12)
        bool cond:1 = *(arg1 + 0x2c) u< 0x10
        void* eax_13 = arg1 + 0x18
        *(eax_13 + 0x10) = 0
        
        if (not(cond:1))
            eax_13 = *eax_13
        
        *eax_13 = 0
        eax_13.b = 1
        return eax_13
    
    eax_6->vFunc_1()

(*eax_2)->vFunc_1()
int32_t eax_8
eax_8.b = 0
return eax_8
