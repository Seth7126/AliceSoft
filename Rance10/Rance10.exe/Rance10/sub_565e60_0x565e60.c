// 函数: sub_565e60
// 地址: 0x565e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73beca
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    int32_t __saved_ebp
    int32_t* eax_5 = (*(*ecx + 8))(__security_cookie ^ &__saved_ebp)
    
    if (eax_5 != 0)
        __Smtx_lock_shared(arg1 + 0x14)
        int32_t esi_2 = *(arg1 + 0x10)
        __Smtx_unlock_shared(arg1 + 0x14)
        int32_t esi_3
        
        if (esi_2 == 0)
            sub_44cdb0(arg1 + 0x10, (**eax_5)(0x767d1c))
            __Smtx_lock_shared(arg1 + 0x14)
            esi_3 = *(arg1 + 0x10)
            __Smtx_unlock_shared(arg1 + 0x14)
        
        if ((esi_2 != 0 || esi_3 != 0) && sub_565bb0(arg1) != 0)
            HANDLE hHandle = *(arg1 + 0x48)
            enum WAIT_EVENT eax_9
            
            if (hHandle != 0)
                eax_9 = WaitForSingleObject(hHandle, 0)
            
            char eax_10
            
            if (hHandle == 0 || eax_9 != WAIT_TIMEOUT)
                eax_10 = sub_4065e0(arg1 + 0x1c)
            
            if ((hHandle != 0 && eax_9 == WAIT_TIMEOUT) || eax_10 != 0)
                if (*(arg1 + 0x50) != 0)
                label_565f73:
                    
                    if (*(arg1 + 0x60) != 0)
                    label_565fa3:
                        int32_t eax_19 = (**eax_5)(0x767cdc)
                        
                        if (eax_19 != 0)
                            struct common::SuicideRefCounter<class IDrawD3DPlugin>::sealengine::CPlugin::VTable
                                ** eax_20 = sub_6e810c(0x1f8)
                            struct common::SuicideRefCounter<class IDrawD3DPlugin>::sealengine::CPlugin::VTable
                                ** var_20 = eax_20
                            int32_t var_8_1 = 0
                            int32_t edi_3 = *(arg1 + 0x18)
                            int32_t eax_21 = sub_431af0(arg1 + 0x10)
                            void* var_48_7 = arg1 + 0x1c
                            int32_t var_4c_2 = edi_3
                            eax_20[1] = 1
                            *eax_20 = &sealengine::CPlugin::`vftable'{for `common::SuicideRefCounter<class IDrawD3DPlugin>'}
                            eax_20[2] = 0xffffffff
                            eax_20[3] = arg1 + 0x1c
                            sub_5c47f0(&eax_20[4], eax_19, eax_21)
                            void var_30
                            int32_t* eax_22 = sub_432270(&var_30, eax_20)
                            int32_t var_28 = 0
                            int32_t var_24 = 0
                            sub_4323a0(&var_28, eax_22)
                            int32_t var_8_2 = 1
                            int32_t var_48_9 = 0
                            int32_t var_4c_3 = sub_431b10(&var_30)
                            int32_t* eax_23 = sub_5689e0(*(arg1 + 0x54), *(arg1 + 0x58))
                            int32_t* var_48_10 = &var_28
                            int32_t result
                            
                            if (eax_23 == *(arg1 + 0x58))
                                sub_5684b0(arg1 + 0x54, var_48_10)
                                result = ((*(arg1 + 0x58) - *(arg1 + 0x54)) s>> 3) - 1
                            else
                                sub_568810(eax_23, var_48_10)
                                result = (eax_23 - *(arg1 + 0x54)) s>> 3
                            
                            sub_431b10(&var_28)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                    else
                        int32_t* ecx_9 = *(arg1 + 0xc)
                        
                        if (ecx_9 != 0)
                            int32_t eax_17 = (*(*ecx_9 + 0xc))(0x767d0c)
                            *(arg1 + 0x60) = eax_17
                            
                            if (eax_17 != 0)
                                goto label_565fa3
                else
                    int32_t* eax_12 = (*(**(arg1 + 0xc) + 0xc))(0x767cfc)
                    
                    if (eax_12 != 0)
                        *(arg1 + 0x50) = eax_12
                        
                        if (eax_12 != 0 && (**eax_12)(arg1 + 4) != 0)
                            goto label_565f73

fsbase->NtTib.ExceptionList = ExceptionList
return 0xffffffff
