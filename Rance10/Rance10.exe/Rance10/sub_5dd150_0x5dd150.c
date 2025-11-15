// 函数: sub_5dd150
// 地址: 0x5dd150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7415f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg2 + 0xc8))(0)
(*(*arg2 + 0xcc))(0)
__Smtx_lock_shared(&arg1[0x1f])
int32_t* ebx_1 = arg1[0x1e]
__Smtx_unlock_shared(&arg1[0x1f])

if (ebx_1 != 0 && (*(*ebx_1 + 0x2c))(0, 0, 0, 1) != 0)
    int32_t ecx_6 = arg3 | 0xff000000
    
    if (arg4 != 0)
        ecx_6 = 0xffffffff
    
    if ((*(*arg2 + 0xbc))(1, 0, 0, 1, 0, ecx_6) != 0)
        void var_28
        int32_t* eax_12 = sub_432270(&var_28, (*(*arg2 + 0x5c))(eax_2))
        int32_t* var_20 = nullptr
        SRWLOCK var_1c
        __builtin_memset(&var_1c, 0, 4)
        sub_4323a0(&var_20, eax_12)
        int32_t var_8_1 = 0
        sub_431b10(&var_28)
        __Smtx_lock_shared(&var_1c)
        ebx_1.b = var_20 != 0
        __Smtx_unlock_shared(&var_1c)
        
        if (ebx_1.b == 0)
            ebx_1.b = 0
        else
            __Smtx_lock_shared(&var_1c)
            int32_t* edi_1 = var_20
            int32_t ecx_12 = __Smtx_unlock_shared(&var_1c)
            int32_t esi_1 = *edi_1
            int32_t var_40_1 = ecx_12
            int32_t eax_16 = (*(*arg2 + 0x28))((*(*arg2 + 0x2c))(0, 0x3f800000))
            (*(esi_1 + 0x28))(*arg1, arg1[1], eax_16)
            __Smtx_lock_shared(&var_1c)
            int32_t* esi_2 = var_20
            __Smtx_unlock_shared(&var_1c)
            
            if ((*(*esi_2 + 8))() == 0)
                ebx_1.b = 0
            else
                int32_t var_3c_12
                
                var_3c_12 = arg4 == 0 ? 1 : 6
                
                (*(*arg2 + 0xc0))(var_3c_12)
                
                if (sub_5dcb50(&arg1[4]) == 0)
                    ebx_1.b = 0
                else
                    (*(*sub_431af0(&var_20) + 0xc))()
                    ebx_1.b = 1
        
        sub_431b10(&var_20)
        int32_t result
        result.b = ebx_1.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
