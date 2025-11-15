// 函数: sub_4d6a80
// 地址: 0x4d6a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73435d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
char eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xc) != 0 && *(arg1 + 0x10) != 0)
    struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerView::VTable** 
        esi_1 = arg2
    *(arg1 + 0x2c) = esi_1
    eax_3 = sub_4d66c0(arg1, esi_1)
    
    if (eax_3 != 0 && *(arg1 + 0x30) != 0)
        void var_d8
        sub_526a90(&var_d8, arg5)
        int32_t var_8_1 = 0
        int32_t* ebx = sub_4d6670(arg1, *(arg1 + 0x2c))
        
        if (ebx != 0)
            for (void** i = *ebx; i != ebx[1]; i = &i[1])
                void* ecx_2 = *i
                
                if (ecx_2 != 0)
                    int32_t* eax_4
                    eax_4.b = *(ecx_2 + 0x58)
                    arg5.b = eax_4.b
                    eax_4.b = *(ecx_2 + 0x59)
                    void* var_14c_1 = ecx_2
                    int128_t* eax_5 = sub_5272c0(&var_d8, *(ecx_2 + 0x20), *(ecx_2 + 0x24), 
                        *(ecx_2 + 0x28), *(ecx_2 + 0x2c), *(ecx_2 + 0x30), *(ecx_2 + 0x34), 
                        *(ecx_2 + 0x38), *(ecx_2 + 0x3c), *(ecx_2 + 0x40), *(ecx_2 + 0x44), 
                        *(ecx_2 + 0x48), *(ecx_2 + 0x4c), *(ecx_2 + 0x50), *(ecx_2 + 0x54), 
                        eax_4.b, arg5.b, *(ecx_2 + 0x68), *(ecx_2 + 0x6c), *(ecx_2 + 0x70), 
                        *(ecx_2 + 0x5c), *(ecx_2 + 0x60), *(ecx_2 + 0x64), *(ecx_2 + 0x74), 
                        *(ecx_2 + 0x78), 0, *(ecx_2 + 0x7c), 1, nullptr)
                    sub_526cb0(&var_d8, eax_5)
            
            esi_1 = arg2
        
        int128_t* ecx_23 = *(arg1 + 0x1c)
        
        if (ecx_23 != 0 && *(arg1 + 0x28) != 0 && arg6.b != 0)
            sub_4d86f0(ecx_23, esi_1 - *(*(arg1 + 0x10) + 0x3c), &var_d8)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_7 = ___dyn_tls_init@12(&var_d8)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        
        if (*(arg1 + 0x29) == 0)
            if (*(arg1 + 0x2a) != 0)
                if (*(arg1 + 0x24) == 0)
                    struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatEmitterView::VTable
                        ** eax_15 = sub_6e810c(0x138)
                    arg4.d = eax_15
                    var_8_1.b = 1
                    struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CFlatEmitterView::VTable
                        ** eax_16 = sub_4d19a0(eax_15, arg1, *(arg1 + 0x14))
                    var_8_1.b = 0
                    bool cond:2_1 = *(arg1 + 0x31) == 0
                    *(arg1 + 0x24) = eax_16
                    
                    if (not(cond:2_1))
                        sub_4d49c0(eax_16)
                    
                    int32_t* eax_19 = sub_4ce360(*(arg1 + 0xc), *(arg1 + 0x10) + 0x24)
                    ecx_23 = sub_4d1db0(*(arg1 + 0x24), *(arg1 + 0xc), eax_19)
                
                int32_t var_ec_14 = arg6
                sub_4d2330(*(arg1 + 0x24), esi_1, ecx_23, &var_d8)
            
            struct _EXCEPTION_REGISTRATION_RECORD** eax_20 = ___dyn_tls_init@12(&var_d8)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_20
        
        if (*(arg1 + 0x20) == 0)
            struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerView::VTable*
                * eax_8 = sub_6e810c(0x58)
            arg2 = eax_8
            struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerView::VTable*
                * eax_9 = sub_4da560(eax_8, 0, arg1, *(arg1 + 8), *(arg1 + 0x14))
            bool cond:1_1 = *(arg1 + 0x31) == 0
            *(arg1 + 0x20) = eax_9
            
            if (not(cond:1_1))
                sub_4db280(eax_9)
            
            int32_t* eax_12 = sub_4ce200(*(arg1 + 0xc), *(arg1 + 0x10) + 0x24)
            sub_4da910(*(arg1 + 0x20), *(arg1 + 0xc), eax_12)
        
        *(arg1 + 0x20)
        
        if (arg4 == 0)
            sub_4dabb0(&var_d8)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_14 = ___dyn_tls_init@12(&var_d8)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        
        sub_4dab20(arg3, &var_d8, arg6)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_13 = ___dyn_tls_init@12(&var_d8)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_13
    
    void* ecx_28 = *(arg1 + 0x1c)
    
    if (ecx_28 != 0 && *(arg1 + 0x28) != 0)
        int32_t* eax_21 = sub_4d89f0(ecx_28, 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_21
    
    int32_t* ecx_31 = *(arg1 + 0x20)
    
    if (ecx_31 != 0 && *(arg1 + 0x29) != 0)
        int32_t eax_23 = (*(*ecx_31 + 4))(eax_2)
        *(arg1 + 0x20) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_23
    
    int32_t* ecx_34 = *(arg1 + 0x24)
    
    if (ecx_34 != 0 && *(arg1 + 0x2a) != 0)
        eax_3 = sub_451bc0(ecx_34)
        *(arg1 + 0x24) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
