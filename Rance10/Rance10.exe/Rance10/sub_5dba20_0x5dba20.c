// 函数: sub_5dba20
// 地址: 0x5dba20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c57b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__Smtx_lock_shared(arg1 + 0x10)
int32_t esi = *(arg1 + 0xc)
__Smtx_unlock_shared(arg1 + 0x10)

if (esi != 0)
    __Smtx_lock_shared(arg1 + 0x18)
    int32_t esi_3 = *(arg1 + 0x14)
    __Smtx_unlock_shared(arg1 + 0x18)
    
    if (esi_3 != 0 && arg2 == 4 && *(arg1 + 0x1c) != 0)
        __Smtx_lock_shared(arg1 + 0x10)
        int32_t* esi_4 = *(arg1 + 0xc)
        __Smtx_unlock_shared(arg1 + 0x10)
        
        if ((*(*esi_4 + 0x24))(eax_2) != 0 && (*(*sub_431af0(arg1 + 0x14) + 0x2c))() != 0)
            void var_10c
            sub_577df0(&var_10c)
            int32_t var_8_1 = 0
            sub_577f70(&var_10c, arg1 + 0x20)
            (*(*arg4 + 0xc0))(1)
            (*(*arg4 + 0xc8))(1)
            (*(*arg4 + 0xcc))(0)
            int32_t var_94 = 0x3f000000
            bool eax_15 = sub_5c9f70(arg3, &var_10c)
            char eax_30
            
            if (eax_15 != 0)
                int32_t* eax_16 = sub_431af0(arg1 + 0x14)
                int32_t* eax_17 = sub_431af0(arg1 + 0xc)
                int32_t* eax_20 = *sub_431af0(arg1 + 0xc) + 0x2c
                int32_t eax_22
                int32_t edx_3
                edx_3:eax_22 = muls.dp.d(0x55555556, (*(*eax_16 + 0x24))())
                eax_30 = (*eax_20)(0, 0, (*(*eax_17 + 0x20))(0, (edx_3 u>> 0x1f) + edx_3))
            
            int32_t* ebx
            
            if (eax_15 == 0 || eax_30 == 0)
                ebx.b = 0
            else
                ebx.b = 1
            
            sub_569970(&var_10c)
            int32_t eax_31
            eax_31.b = ebx.b
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_31
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0

void* eax_4
eax_4.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
