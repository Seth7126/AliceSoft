// 函数: sub_627660
// 地址: 0x627660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0)
    result.b = 0
else if (arg2 s>= (*(*arg1 + 8))(eax_2))
    result.b = 0
else if ((*(*arg1 + 8))() != 1)
    if (sub_627950(&arg1[-8], arg2) != 0)
        int32_t ebx_1 = arg1[7]
        int32_t eax_9
        
        if (arg1[-3] != 0)
            eax_9 = arg1[-4]
        else
            eax_9 = 0
        
        int32_t edi_2 = (arg2 + 1) * ebx_1
        
        if (edi_2 s< (*(*arg1 + 8))() * ebx_1)
            int32_t ecx_7 = eax_9
            void* ebx_2 = ecx_7 + ((edi_2 - ebx_1) << 2)
            int32_t eax_18
            
            do
                ebx_2 += 4
                *(ebx_2 - 4) = *(ecx_7 + (edi_2 << 2))
                edi_2 += 1
                eax_18 = (*(*arg1 + 8))() * ebx_1
                ecx_7 = eax_9
            while (edi_2 s< eax_18)
        
        if (sub_405df0(&arg1[-5], (((*(*arg1 + 8))() - 1) * ebx_1) << 2).b != 0)
            result.b = 1
        else
            void var_44
            sub_403360(&var_44, "array.Erase")
            int32_t var_8_2 = 1
            ebx_1.b = sub_6c52e0(&var_44)
            sub_403320(&var_44)
            result.b = ebx_1.b
    else
        void var_2c
        sub_403360(&var_2c, "array.Erase")
        int32_t var_8_1 = 0
        int32_t ebx
        ebx.b = sub_6c52e0(&var_2c)
        sub_403320(&var_2c)
        result.b = ebx.b
else
    (*(*arg1 + 0x48))()
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
