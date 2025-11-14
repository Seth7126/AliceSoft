// 函数: sub_5a94f0
// 地址: 0x5a94f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8a40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s>= 0)
    void* edx = data_75d508
    
    if (arg3 s< (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
        void* ecx = (*(edx + 0x50))[arg3]
        
        if (ecx != 0)
            void* var_24 = nullptr
            int32_t var_20 = 0
            int32_t var_1c = 0
            int32_t var_4 = 0
            var_4.b = 1
            int32_t var_18
            sub_48d5d0(&var_24, sub_524b50(ecx + 0x1d8, &var_18))
            var_4.b = 0
            int32_t eax_7 = var_18
            
            if (eax_7 != 0)
                j__free(eax_7)
            
            void* edi = var_24
            int32_t* ebx
            
            if (edi != var_20)
                int32_t var_2c = (var_20 - edi) s/ 0xc
                
                if ((*(*arg2 + 0x30))(&var_2c, 1) != 0)
                    if ((*(*arg4 + 0x30))(&var_2c, 1) != 0)
                        if ((*(*arg5 + 0x30))(&var_2c, 1) != 0)
                            int32_t esi_1 = 0
                            
                            if (var_2c s<= 0)
                            label_5a9698:
                                ebx.b = 1
                            else
                                void* edi_1 = edi + 8
                                
                                while (true)
                                    int32_t* var_44_3 = arg2
                                    char eax_26
                                    int32_t ecx_12
                                    eax_26, ecx_12 = (*(*arg2 + 0x28))(esi_1, *(edi_1 - 8))
                                    
                                    if (eax_26 == 0)
                                        break
                                    
                                    int32_t var_44_5 = ecx_12
                                    char eax_29
                                    int32_t ecx_14
                                    eax_29, ecx_14 = (*(*arg4 + 0x28))(esi_1, *(edi_1 - 4))
                                    
                                    if (eax_29 == 0)
                                        break
                                    
                                    int32_t var_44_7 = ecx_14
                                    
                                    if ((*(*arg5 + 0x28))(esi_1, *edi_1) == 0)
                                        break
                                    
                                    esi_1 += 1
                                    edi_1 += 0xc
                                    
                                    if (esi_1 s>= var_2c)
                                        goto label_5a9698_1
                                
                                ebx.b = 0
                        else
                            ebx.b = 0
                    else
                        ebx.b = 0
                else
                    ebx.b = 0
            else
                (*(*arg2 + 0x38))(eax_2)
                (*(*arg4 + 0x38))()
                (*(*arg5 + 0x38))()
            label_5a9698_1:
                ebx.b = 1
            
            void* eax_33 = var_24
            
            if (eax_33 != 0)
                j__free(eax_33)
            
            eax_33.b = ebx.b
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_33

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
