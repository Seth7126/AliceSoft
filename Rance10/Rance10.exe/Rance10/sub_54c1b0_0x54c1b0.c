// 函数: sub_54c1b0
// 地址: 0x54c1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class ISurface>::partsengine::CConstructionThreadSurface::VTable** 
    eax

if (*(arg1 + 0x7c) == *(arg1 + 0x80))
    eax.b = 1
    return eax

int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    int32_t esi_1 = ecx[1]
    ecx[1] -= 1
    (**ecx)(esi_1 - 1)
    *(arg1 + 0xc) = 0
    *(arg1 + 0x20) = 1

void* ecx_1 = *(arg1 + 8)
*(arg1 + 0xa4) = 1

if (ecx_1 != 0)
    eax = sub_4c6110(ecx_1, arg1 + 0x78)
    
    if (eax != 0)
        if (*(arg1 + 0xc) == 0)
            sub_54d770(arg1 + 0xc)
        
        sub_450940(*(arg1 + 0xc), eax)
        *(arg1 + 0x22) = 0
        (*eax)->vFunc_1()
        int32_t eax_5
        eax_5.b = 1
        return eax_5

eax.b = 0
return eax
