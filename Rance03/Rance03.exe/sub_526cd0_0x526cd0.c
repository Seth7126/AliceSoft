// 函数: sub_526cd0
// 地址: 0x526cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d508
int32_t* ecx = *(esi + 0xc)

if (ecx != 0)
    if (*(esi + 0x10) != 0)
    label_526d2f:
        
        if (sub_526ac0(esi) != 0)
            HANDLE hHandle = *(esi + 0x40)
            enum WAIT_EVENT eax_8
            
            if (hHandle != 0)
                eax_8 = WaitForSingleObject(hHandle, 0)
            
            char eax_9
            
            if (hHandle == 0 || eax_8 != WAIT_TIMEOUT)
                eax_9 = sub_5f48f0(esi + 0x18)
            
            if ((hHandle != 0 && eax_8 == WAIT_TIMEOUT) || eax_9 != 0)
                if (*(esi + 0x4c) == 0)
                    int32_t* eax_11 = (*(**(esi + 0xc) + 0xc))(0x6e33f4)
                    
                    if (eax_11 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                    
                    *(esi + 0x4c) = eax_11
                    
                    if (eax_11 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                    
                    if ((**eax_11)(esi + 4) == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                
                if (*(esi + 0x5c) == 0)
                    int32_t* ecx_8 = *(esi + 0xc)
                    
                    if (ecx_8 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                    
                    int32_t eax_17 = (*(*ecx_8 + 0xc))(0x6e33c4)
                    *(esi + 0x5c) = eax_17
                    
                    if (eax_17 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                
                int32_t edi_1 = sub_69adc6(0x250)
                var_10 = edi_1
                int32_t var_4 = 0
                
                if (edi_1 == 0)
                    edi_1 = 0
                else
                    *edi_1 = &sealengine::CPlugin::`vftable'{for `IDrawD3DPlugin'}
                    *(edi_1 + 4) = 1
                    *(edi_1 + 8) = 0xffffffff
                    *(edi_1 + 0xc) = esi + 0x18
                    sub_586c40(edi_1 + 0x10, esi + 0x18)
                
                int32_t var_4_1 = 0xffffffff
                void* var_20_3 = *(esi + 0x14)
                var_10 = edi_1
                
                if (sub_586dc0(edi_1 + 0x10, *(esi + 0xc), *(esi + 0x10), var_20_3) != 0)
                    int32_t ecx_14 = *(esi + 0x54)
                    void** eax_23 = *(esi + 0x50)
                    
                    if (eax_23 != ecx_14)
                        while (*eax_23 != 0)
                            eax_23 = &eax_23[1]
                            
                            if (eax_23 == ecx_14)
                                break
                        
                        if (eax_23 != ecx_14)
                            *eax_23 = edi_1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return (eax_23 - *(esi + 0x50)) s>> 2
                    
                    sub_412de0(esi + 0x50, &var_10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return ((*(esi + 0x54) - *(esi + 0x50)) s>> 2) - 1
                
                (*(*edi_1 + 4))(eax_2)
    else
        int32_t* eax_4 = (*(*ecx + 8))(eax_2)
        
        if (eax_4 != 0)
            int32_t eax_6 = (**eax_4)(0x6e3404)
            *(esi + 0x10) = eax_6
            
            if (eax_6 != 0)
                goto label_526d2f

fsbase->NtTib.ExceptionList = ExceptionList
return 0xffffffff
