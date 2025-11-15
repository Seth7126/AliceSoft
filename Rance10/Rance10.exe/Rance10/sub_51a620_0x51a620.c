// 函数: sub_51a620
// 地址: 0x51a620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
void* var_18 = edi

if (*(edi + 0x5c) == 0)
    return 

*(edi + 0x5c) = 0
int32_t ecx_1 = neg.d(arg2)
void* ecx_3 = sbb.d(ecx_1, ecx_1, arg2 != 0) & (arg2 - 0xc)

if (*(ecx_3 + 0xf1) == 0)
    sub_4e84a0(ecx_3, 1)
    *(edi + 0x5c) = 1
    return 

struct partsengine::IEventArgs::partsengine::SChangedEventArgs::VTable* const var_14 =
    &partsengine::SChangedEventArgs::`vftable'{for `partsengine::IEventArgs'}
sub_4cbd50(edi + 0xc, &var_14, 0)
int32_t ebx_1 = 0
int32_t eax = (*(edi + 0x48) - *(edi + 0x44)) s>> 2
int32_t var_c_1 = eax

if (eax s> 0)
    do
        int32_t esi_1
        
        if (ebx_1 s< 0 || (*(edi + 0x48) - *(edi + 0x44)) s>> 2 s<= ebx_1)
            esi_1 = 0
        else
            esi_1 = *(*(edi + 0x44) + (ebx_1 << 2))
        
        void** eax_9 = *(edi + 0x58)
        int32_t var_2c_1 = esi_1
        eax = sub_4f15e0(eax_9)
        
        if (eax != 0)
            int32_t edx_1 = *(eax + 8)
            
            if (esi_1 s>= edx_1 && *(eax + 4) + edx_1 s> esi_1)
                eax.b = *(*(eax + 0xc) + ((esi_1 - *(eax + 8)) << 2)) != 0
                
                if (eax.b != 0)
                    int32_t var_2c_2 = esi_1
                    struct partsengine::CPartsList::VTable** eax_10 = sub_4f14d0(eax_9)
                    int32_t edi_1
                    
                    if (eax_10 != 0)
                        edi_1 = eax_10[2]
                    
                    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                        ** vFunc_0
                    
                    if (eax_10 == 0 || esi_1 s< edi_1 || eax_10[1] + edi_1 s<= esi_1)
                        vFunc_0 = nullptr
                    else
                        vFunc_0 = eax_10[3][esi_1 - edi_1].vFunc_0
                        
                        if (vFunc_0 == 0)
                            int32_t var_2c_3 = esi_1
                            vFunc_0 = sub_526580(eax_10)
                    
                    sub_4eec50(vFunc_0, 1, 1)
                    void* ecx_13 = vFunc_0[0x1d]
                    
                    if (ecx_3 != ecx_13)
                        sub_4e84a0(ecx_13, 0)
                    
                    edi = var_18
        
        ebx_1 += 1
    while (ebx_1 s< var_c_1)

*(edi + 0x5c) = 1
