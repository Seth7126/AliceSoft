// 函数: sub_510a00
// 地址: 0x510a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg4

if (ebx == 0)
    int32_t eax
    eax.b = 0
    return eax

void* __saved_ebp_1 = arg3
void* __saved_ebp = __saved_ebp_1
void* eax_1 = sub_4f15e0(ebx + 0x34)

if (eax_1 != 0)
    int32_t edi_1 = *(eax_1 + 8)
    
    if (__saved_ebp_1 s>= edi_1 && *(eax_1 + 4) + edi_1 s> __saved_ebp_1)
        eax_1.b = *(*(eax_1 + 0xc) + ((__saved_ebp_1 - edi_1) << 2)) != 0
        
        if (eax_1.b != 0)
            struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable**
                 eax_2 = sub_51b320(ebx, __saved_ebp_1)
            int32_t ebx_1 = 0
            struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable**
                 var_4 = eax_2
            arg2[1] = *arg2
            void* ecx_5 = eax_2[0x1c]
            int32_t ebp_2 = (*(ecx_5 + 0xc4) - *(ecx_5 + 0xc0)) s>> 2
            
            if (ebp_2 s> 0)
                do
                    void* edi_2
                    
                    if (ebx_1 s>= 0)
                        void* edi_3 = eax_2[0x1c]
                        
                        if ((*(edi_3 + 0xc4) - *(edi_3 + 0xc0)) s>> 2 s> ebx_1)
                            edi_2 = *(*(edi_3 + 0xc0) + (ebx_1 << 2))
                        else
                            edi_2 = nullptr
                    else
                        edi_2 = nullptr
                    
                    arg3 = edi_2
                    void** esi = *arg1
                    void* i = *esi
                    arg4 = i
                    
                    for (; i != esi; i = arg4)
                        if (edi_2 == *(i + 0x28))
                            sub_404370(arg2, &arg3)
                            break
                        
                        sub_429080(&arg4)
                    
                    eax_2 = var_4
                    ebx_1 += 1
                while (ebx_1 s< ebp_2)
            
            eax_2.b = 1
            return eax_2

eax_1.b = 0
return eax_1
