// 函数: sub_46b650
// 地址: 0x46b650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d0a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c
sub_462db0(&var_2c, arg2)
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 4)
int32_t var_18
int32_t result

if (esi == *(arg1 + 8))
label_46b714:
    result = 0xffffffff
else
    while (true)
        int32_t* edi_1 = &var_2c
        void* var_44
        char* ecx_2 = sub_470a30(*esi, &var_44)
        
        if (var_18 u>= 0x10)
            edi_1 = var_2c
        
        if (*(ecx_2 + 0x14) u>= 0x10)
            ecx_2 = *ecx_2
        
        int32_t ebx_2 = ecx_2[0x10].d
        int32_t var_1c
        int32_t eax_4 = var_1c
        
        if (ebx_2 u< eax_4)
            eax_4 = ebx_2
        
        int32_t edi_2 = sub_406ac0(eax_4, edi_1, ecx_2, eax_4)
        
        if (edi_2 == 0)
            bool c_1 = var_1c u< ebx_2
            
            if (var_1c == ebx_2 || c_1)
                edi_2 = neg.d(sbb.d(edi_2, edi_2, c_1))
            else
                edi_2 = 0xffffffff
        
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        if (edi_2 == 0)
            result = (esi - *(arg1 + 4)) s>> 2
            break
        
        esi = &esi[1]
        
        if (esi == *(arg1 + 8))
            goto label_46b714

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
