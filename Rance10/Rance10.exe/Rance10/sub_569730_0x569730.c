// 函数: sub_569730
// 地址: 0x569730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c2eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2 == 4)
    eax_3 = *(arg1 + 0x6c)
    
    if (eax_3 s>= 0 && eax_3 s< *(arg1 + 0x68))
        __Smtx_lock_shared(arg1 + 0x34)
        int32_t esi_1 = *(arg1 + 0x30)
        __Smtx_unlock_shared(arg1 + 0x34)
        
        if (esi_1 != 0)
            __Smtx_lock_shared(arg1 + 0x34)
            int32_t* esi_2 = *(arg1 + 0x30)
            __Smtx_unlock_shared(arg1 + 0x34)
            
            if ((*(*esi_2 + 0x14))(eax_2).b != 0)
                if (sub_569700(arg1).b != 0)
                    int32_t ecx_4 = *(arg1 + 0x6c)
                    
                    if (ecx_4 s>= 0 && ecx_4 s< (*(arg1 + 0x48) - *(arg1 + 0x44)) s>> 3)
                        int32_t esi_3 = sub_431af0(*(arg1 + 0x44) + (ecx_4 << 3))
                        
                        if (esi_3 != 0 && (*(*sub_431af0(arg1 + 0x30) + 0x24))().b != 0)
                            void var_104
                            sub_577df0(&var_104)
                            int32_t var_8_1 = 0
                            int32_t var_84 = esi_3
                            int32_t var_8c = *(arg1 + 0x70)
                            char var_68 = 1
                            char var_26 = 1
                            int32_t var_24 = *(arg1 + 0x74)
                            (*(*arg4 + 0xc8))(1)
                            (*(*arg4 + 0xcc))(1)
                            bool cond:0 = (*(*esi_3 + 0x18))() == 0
                            int32_t eax_17 = *(arg1 + 0x2c)
                            
                            if (not(cond:0))
                                int32_t var_118_3
                                
                                if (eax_17 == 0)
                                    var_118_3 = 1
                                label_569894:
                                    (*(*arg4 + 0xc0))(var_118_3)
                                    (*(*arg4 + 0xc4))(1, 1)
                                    goto label_5698ce
                                
                                if (eax_17 == 1)
                                    var_118_3 = 3
                                    goto label_569894
                            else
                                int32_t var_118_4
                                
                                if (eax_17 == 0)
                                    var_118_4 = 0
                                label_5698be:
                                    (*(*arg4 + 0xc0))(var_118_4)
                                label_5698ce:
                                    
                                    if (sub_5c9f70(arg3, &var_104) != 0
                                            && (*(*sub_431af0(arg1 + 0x30) + 0x30))() != 0)
                                        if ((*(*esi_3 + 0x18))() != 0)
                                            (*(*arg4 + 0xc4))(0, 0)
                                        
                                        sub_569970(&var_104)
                                        int32_t eax_33
                                        eax_33.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_33
                                else if (eax_17 == 1)
                                    var_118_4 = 2
                                    goto label_5698be
                            
                            sub_569970(&var_104)
                            int32_t eax_34
                            eax_34.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_34
                
                int32_t eax_6
                eax_6.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_6

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
