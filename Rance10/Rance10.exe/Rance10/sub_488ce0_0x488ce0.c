// 函数: sub_488ce0
// 地址: 0x488ce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** edi =
    sub_4836c0(arg1 + 0x24, arg2)

if (edi == 0)
    int32_t* ecx_1 = *(arg1 + 4)
    
    if (ecx_1 != 0)
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        edi = (*(*ecx_1 + 0xc))(edx_1)
    
    if (ecx_1 == 0 || edi == 0)
        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** eax_3 =
            sub_4836c0(arg1 + 0x10, arg2)
        edi = eax_3
        
        if (edi == 0)
            return eax_3

int32_t var_24 = 1
struct common::SuicideRefCounter<class IWaveFormat>::kiwi::CWaveFormat::VTable* const var_28 =
    &kiwi::CWaveFormat::`vftable'{for `common::SuicideRefCounter<class IWaveFormat>'}
int32_t var_20
__builtin_memset(&var_20, 0, 0x18)
int32_t eax_5 = (*edi)->vFunc_5(&var_28)
char* eax_6 = (*edi)->vFunc_6()
struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** eax_7 =
    sub_487b90(eax_6, eax_5, eax_6)

if (eax_7 == 0)
    (*edi)->vFunc_1()
    return 0

int32_t eax_11 = (*eax_7)->vFunc_10()
int32_t eax_12 = var_28->vFunc_5()
uint32_t eax_13

if (eax_12 != 0)
    int32_t eax_15
    uint32_t edx_6
    edx_6:eax_15 = mulu.dp.d(eax_11, 0x3e8)
    eax_13 = __aulldiv(eax_15, edx_6, eax_12, 0)
else
    eax_13 = sub_484f40(&var_28, eax_11)

(*eax_7)->vFunc_1()
(*edi)->vFunc_1()
return eax_13
