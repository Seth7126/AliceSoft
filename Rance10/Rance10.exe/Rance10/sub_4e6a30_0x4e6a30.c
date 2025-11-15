// 函数: sub_4e6a30
// 地址: 0x4e6a30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7353e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2

if (result != 0)
    int32_t edi_1 = *(arg1 + 0xe8)
    int32_t esi_1 = *(arg1 + 0xec)
    
    if (edi_1 s> 0 && esi_1 s> 0)
        void var_30
        sub_4e7af0(arg1, &var_30)
        int32_t var_8_1 = 0
        int32_t var_4c = 0
        int32_t var_50 = 0
        var_8_1.b = 1
        void var_48
        sub_4e7d90(arg1, edi_1, esi_1, sub_4e7af0(arg1, &var_48), arg1 + 0x100, &var_4c, &var_50)
        var_8_1.b = 0
        sub_403320(&var_48)
        
        if (arg3 != 3)
            var_4c = var_4c
            var_50 = var_50
        else
            var_4c += 1
            var_50 += 1
        
        void* eax_6 = sub_4efcc0(*(arg1 + 0xd8))
        void* esi_2 = *(eax_6 + 0x44)
        sub_555e00(esi_2, 0x18, arg3)
        sub_54b7a0(*(esi_2 + (arg3 << 2) + 0x7c))
        void* esi_3 = *(eax_6 + 0x44)
        sub_555e00(esi_3, 0x18, arg3)
        sub_54b880(*(esi_3 + (arg3 << 2) + 0x7c), edi_1, esi_1)
        (**result)(*(eax_6 + 0x44), edi_1, esi_1, arg3)
        sub_518280(eax_6, var_4c, var_50, &var_30, arg1 + 0x100, *(arg1 + 0x1e4), *(arg1 + 0x1e8), 
            arg3)
        void* esi_5 = *(eax_6 + 0x44)
        sub_555e00(esi_5, 0x18, arg3)
        sub_54c110(*(esi_5 + (arg3 << 2) + 0x7c))
        result = sub_403320(&var_30)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
