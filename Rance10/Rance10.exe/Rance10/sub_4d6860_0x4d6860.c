// 函数: sub_4d6860
// 地址: 0x4d6860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734320
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0 && arg3 != 0)
    sub_4d67d0(arg1)
    *(arg1 + 0xc) = arg2
    (**arg2)(eax_2)
    *(arg1 + 0x10) = arg3
    (**arg3)()
    int32_t* edi_3 = *(arg1 + 0x10) + 0x24
    
    if (sub_4cdcb0(*(arg1 + 0xc), edi_3) != 0)
        *(arg1 + 0x28) = 1
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable** 
            eax_7 = sub_6e810c(0x40)
        arg2 = eax_7
        int32_t var_8_1 = 0
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable** 
            eax_8 = sub_4d7e20(eax_7, *(arg1 + 0x14))
        int32_t var_8_2 = 0xffffffff
        bool cond:0 = *(arg1 + 0x31) == 0
        *(arg1 + 0x1c) = eax_8
        
        if (not(cond:0))
            sub_4d8c20(eax_8)
        
        struct _EXCEPTION_REGISTRATION_RECORD** eax_9 =
            sub_4d80b0(*(arg1 + 0x1c), *(arg1 + 0xc), edi_3, nullptr, 3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    char eax_10 = sub_4cde40(*(arg1 + 0xc), edi_3)
    void* ecx_9 = *(arg1 + 0xc)
    
    if (eax_10 == 0)
        if (sub_4cddc0(ecx_9, edi_3) != 0)
            *(arg1 + 0x29) = 1
            int32_t* eax_16 = sub_6e810c(0x58)
            arg2 = eax_16
            struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerView::VTable*
                * eax_17 = sub_4da560(eax_16, 0, arg1, *(arg1 + 8), *(arg1 + 0x14))
            bool cond:1 = *(arg1 + 0x31) == 0
            *(arg1 + 0x20) = eax_17
            
            if (not(cond:1))
                sub_4db280(eax_17)
            
            int32_t* eax_18 = sub_4ce200(*(arg1 + 0xc), edi_3)
            int32_t eax_19 = sub_4da910(*(arg1 + 0x20), *(arg1 + 0xc), eax_18)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_19
        
        eax_3 = sub_4cdec0(*(arg1 + 0xc), edi_3)
        
        if (eax_3.b != 0)
            *(arg1 + 0x2a) = 1
            int32_t* eax_20 = sub_6e810c(0x138)
            arg2 = eax_20
            int32_t var_8_5 = 2
            struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatEmitterView::VTable
                ** eax_21 = sub_4d19a0(eax_20, arg1, *(arg1 + 0x14))
            int32_t var_8_6 = 0xffffffff
            bool cond:3_1 = *(arg1 + 0x31) == 0
            *(arg1 + 0x24) = eax_21
            
            if (not(cond:3_1))
                sub_4d49c0(eax_21)
            
            int32_t* eax_22 = sub_4ce360(*(arg1 + 0xc), edi_3)
            eax_3 = sub_4d1db0(*(arg1 + 0x24), *(arg1 + 0xc), eax_22)
    else
        *(arg1 + 0x28) = 1
        eax_3 = sub_4ce2b0(ecx_9, edi_3)
        
        if (eax_3 != 0)
            int32_t* eax_11 = sub_6e810c(0x40)
            arg2 = eax_11
            int32_t var_8_3 = 1
            struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable
                ** eax_12 = sub_4d7e20(eax_11, *(arg1 + 0x14))
            int32_t var_8_4 = 0xffffffff
            bool cond:2 = *(arg1 + 0x31) == 0
            *(arg1 + 0x1c) = eax_12
            
            if (not(cond:2))
                sub_4d8c20(eax_12)
            
            struct _EXCEPTION_REGISTRATION_RECORD** eax_14 =
                sub_4d80b0(*(arg1 + 0x1c), *(arg1 + 0xc), &eax_3[2], eax_3[8], eax_3[9])
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
