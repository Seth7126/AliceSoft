// 函数: sub_621850
// 地址: 0x621850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744818
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
int32_t* var_18
sub_6224f0(&var_18, &var_14)
int32_t var_8_1 = 0
int32_t* esi = var_18

if (sub_600c70(esi, arg2) == 0)
    if (esi != 0)
        (**esi)(1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0xffffffff

int32_t result = sub_621000(arg1)
void var_30
void var_24
int32_t* eax_6 = sub_622260(sub_44a580(arg1 + 4, &var_30), &var_24, result)
int32_t* edi_1 = *eax_6

if (edi_1 != 0)
    edi_1 = *edi_1

int32_t edx_2 = eax_6[2]
int32_t edx_3 = edx_2 & 3
int32_t eax_10 = *(edi_1[1] + ((edx_2 u>> 2 & (edi_1[2] - 1)) << 2))
int32_t* ecx_11 = *(eax_10 + (edx_3 << 2))
*(eax_10 + (edx_3 << 2)) = esi

if (ecx_11 != 0)
    (**ecx_11)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
