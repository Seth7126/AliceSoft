// 函数: sub_58d890
// 地址: 0x58d890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c2eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_114 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 8)
int32_t eax_6

if ((ecx[9] - ecx[8]) s/ 0x3c s> 0)
    eax_6 = *ecx
    
    if (eax_6 != 0)
        if (ecx[0x15] != 0)
            eax_6.b = *(eax_6 + 0x6d)
        
        if ((ecx[0x15] == 0 || eax_6.b == 0) && sub_58d2b0(arg1, arg2).b != 0)
            void var_104
            sub_577df0(&var_104)
            int32_t var_8_1 = 0
            void* ecx_4 = sub_58d670(arg1, arg2, &var_104, arg4)
            void* var_118_3 = ecx_4
            int32_t var_11c_1 = arg3
            int32_t* ebx
            
            if (sub_56dc30(*(arg1 + 8), ecx_4, &var_104).b != 0)
                if (*(*(arg1 + 4) + 0x22) != 0 && arg2 != 3)
                    (*(*arg4 + 0xc4))(0, 0)
                
                ebx.b = 1
            else
                ebx.b = 0
            
            void* var_1c
            int32_t var_14
            
            if (var_1c != 0)
                sub_403160(var_1c, (var_14 - var_1c) s>> 6, 0x40)
            void* eax_7
            eax_7.b = ebx.b
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7

eax_6.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
