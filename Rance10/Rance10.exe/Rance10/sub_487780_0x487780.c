// 函数: sub_487780
// 地址: 0x487780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb6c
int32_t eax

if (*(esi + 5) == 0)
    if (*(esi + 4) != 0)
        eax.b = 1
        return eax
    
    if (*(esi + 6) == 0)
        int32_t* edi = data_7fcb88
        *(esi + 6) = 1
        
        if (edi == 0)
            sub_487840(esi)
            void* eax_1
            eax_1.b = 0
            return eax_1
        
        void* eax_3 = (**edi)(0x7602a4)
        
        if (eax_3 != 0)
            void* ecx_3
            
            if (sub_4878e0(esi, edi) == 0)
                ecx_3 = esi
            else
                struct common::SuicideRefCounter<class kiwi::ISoundBufferFactory>::kiwi::CDirectSound::VTable
                    ** eax_5 = sub_69d600()
                *(esi + 0x92c) = eax_5
                ecx_3 = esi
                
                if (eax_5 != 0)
                    char eax_6
                    eax_6, esi = sub_487970(ecx_3, edi, eax_3)
                    
                    if (eax_6 != 0)
                        int32_t* eax_8 = (**edi)(0x7602b4)
                        
                        if (eax_8 != 0)
                            (**eax_8)(esi + 0x938)
                            *(esi + 4) = 1
                            int32_t eax_10
                            eax_10.b = 1
                            *(esi + 6) = 0
                            return eax_10
                    
                    ecx_3 = esi
            
            sub_487840(ecx_3)
        
        eax_3.b = 0
        return eax_3

eax.b = 0
return eax
