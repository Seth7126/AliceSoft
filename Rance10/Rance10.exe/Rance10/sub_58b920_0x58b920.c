// 函数: sub_58b920
// 地址: 0x58b920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c2eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0)
    if (*(arg1 + 0x10) != 0 || *(arg1 + 0x11) != 0)
    label_58b987:
        
        if (*(arg1 + 0xc) s> 0)
            __Smtx_lock_shared(arg1 + 8)
            int32_t esi_2 = *(arg1 + 4)
            __Smtx_unlock_shared(arg1 + 8)
            
            if (esi_2 != 0)
                __Smtx_lock_shared(arg1 + 8)
                int32_t* esi_3 = *(arg1 + 4)
                __Smtx_unlock_shared(arg1 + 8)
                
                if ((*(*esi_3 + 0x14))(eax_2).b != 0)
                    __Smtx_lock_shared(arg1 + 8)
                    int32_t* esi_4 = *(arg1 + 4)
                    __Smtx_unlock_shared(arg1 + 8)
                    
                    if ((*(*esi_4 + 0x3c))().b != 0)
                        void var_104
                        sub_577df0(&var_104)
                        int32_t var_8_1 = 0
                        sub_577f70(&var_104, arg1 + 0x14)
                        (*(*arg4 + 0xc8))(zx.d(*(arg1 + 0x10)))
                        (*(*arg4 + 0xcc))(zx.d(*(arg1 + 0x11)))
                        (*(*arg4 + 0xc0))(0)
                        int32_t var_8c = 0x3f800000
                        int128_t var_ac = data_7e7128
                        char var_b7 = 0
                        int128_t var_9c = data_7fd4f4
                        void* ebx_1
                        
                        if ((*(*sub_431af0(arg1 + 4) + 0x24))() == 0)
                            ebx_1.b = 0
                        else if (sub_5c9f70(arg3, &var_104) == 0)
                            ebx_1.b = 0
                        else if ((*(*sub_431af0(arg1 + 4) + 0x34))() == 0)
                            ebx_1.b = 0
                        else
                            ebx_1.b = 1
                        
                        sub_569970(&var_104)
                        int32_t eax_19
                        eax_19.b = ebx_1.b
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_19
else if (arg2 == 6 && *(arg1 + 0x10) == 0 && *(arg1 + 0x11) == 0)
    goto label_58b987

void* eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
