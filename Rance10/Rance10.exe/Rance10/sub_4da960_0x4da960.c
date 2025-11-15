// 函数: sub_4da960
// 地址: 0x4da960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x10)
int32_t* i = *(edi + 8)

for (int32_t edi_1 = *(edi + 0xc); i != edi_1; i = &i[1])
    int32_t* ebp_1 = *i
    int32_t eax = ebp_1[2]
    void* var_c
    void* var_4
    
    if (eax == 3)
        void* eax_1 = sub_6e810c(0x34)
        var_4 = eax_1
        int32_t edx_1 = *(arg1 + 0x14)
        int32_t ecx = *(arg1 + 8)
        *(eax_1 + 4) = 1
        *eax_1 = &partsengine::CFlatLayerGraphicView::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
        *(eax_1 + 8) = ecx
        *(eax_1 + 0xc) = 0
        *(eax_1 + 0x10) = 0
        *(eax_1 + 0x14) = edx_1
        *(eax_1 + 0x18) = arg1
        *(eax_1 + 0x1c) = 0
        *(eax_1 + 0x20) = 0
        *(eax_1 + 0x24) = 0
        *(eax_1 + 0x28) = 0
        *(eax_1 + 0x2a) = 0
        *(eax_1 + 0x2c) = 0xffffffff
        *(eax_1 + 0x30) = 1
        bool cond:0_1 = *(arg1 + 0x54) == 0
        var_c = eax_1
        
        if (not(cond:0_1))
            *(eax_1 + 0x31) = 1
        
        sub_4d6860(eax_1, *(arg1 + 0xc), ebp_1)
        sub_428f00(arg1 + 0x20, &var_c)
    else if (eax == 5)
        struct 
            common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerScriptView::VTable**
             eax_2 = sub_6e810c(0x18)
        var_4 = eax_2
        var_4 = eax_2
        eax_2[1] = 1
        *eax_2 = &partsengine::CFlatLayerScriptView::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
        eax_2[2] = 0
        eax_2[3] = 0
        eax_2[4] = 0
        eax_2[5].b = 1
        void* eax_3 = *(arg1 + 0xc)
        var_c = eax_3
        
        if (eax_3 != 0)
            sub_4dcb40(eax_2)
            void* ecx_4 = var_c
            eax_2[2] = ecx_4
            (**ecx_4)()
            eax_2[3] = ebp_1
            (**ebp_1)()
        
        sub_428f00(arg1 + 0x2c, &var_4)
    else if (eax == 4)
        void* eax_6 = sub_6e810c(0x24)
        var_4 = eax_6
        int32_t ecx_7 = *(arg1 + 0x14)
        int32_t edx_2 = *(arg1 + 8)
        *(eax_6 + 4) = 1
        *(eax_6 + 0x10) = ecx_7
        *eax_6 = &partsengine::CFlatLayerSoundView::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
        *(eax_6 + 8) = 0
        *(eax_6 + 0xc) = 0
        *(eax_6 + 0x14) = edx_2
        *(eax_6 + 0x18) = 0
        *(eax_6 + 0x1c) = 0
        *(eax_6 + 0x20) = 1
        int32_t* var_24_2 = *(arg1 + 0xc)
        var_4 = eax_6
        sub_4da370(eax_6, var_24_2, ebp_1)
        sub_428f00(arg1 + 0x38, &var_4)
