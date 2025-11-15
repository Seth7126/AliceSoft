// 函数: sub_597ea0
// 地址: 0x597ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c5ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *(arg1 + 0x7c)

if (ecx s>= 0 && ecx s< (*(arg1 + 0x74) - *(arg1 + 0x70)) s>> 3)
    int32_t* edi_1 = *(arg1 + 0x70) + (ecx << 3)
    __Smtx_lock_shared(&edi_1[1])
    int32_t* edi_2 = *edi_1
    __Smtx_unlock_shared(&edi_1[1])
    
    if (edi_2 != 0)
        void var_10c
        sub_577df0(&var_10c)
        int32_t var_8_1 = 0
        char var_30 = *(arg1 + 0x1c)
        char var_bf = 0
        int32_t* var_8c = edi_2
        char var_70 = 1
        int128_t var_a4 = *(arg1 + 0xc)
        
        if (sub_597df0(arg1, &var_10c, (*(*edi_2 + 0x18))(arg3, eax_2)) != 0
                && sub_5c9f70(arg2, &var_10c) != 0 && (*(*arg4 + 0x28))(arg5, arg6) != 0)
            sub_569970(&var_10c)
            int32_t eax_17
            eax_17.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_17
        
        sub_569970(&var_10c)
        int32_t eax_18
        eax_18.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_18

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
