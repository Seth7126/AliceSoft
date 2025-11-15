// 函数: sub_631580
// 地址: 0x631580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e8ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t var_18 = 0
*(arg1 + 0x40) = var_18.d
*(arg1 + 0x44) = var_18:4.d
*(arg1 + 4) = arg2
int32_t* result = sub_632600(&var_18, arg1 + 8, arg2)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != result[1])
    int32_t* eax_7 = (*(*ecx_1 + 8))(eax_2)
    
    if (eax_7 != 0)
        (**eax_7)(1)
    
    int32_t* ecx_3 = result[1]
    *(arg1 + 0xc) = ecx_3
    result = (*(*ecx_3 + 4))()

int32_t var_8_2 = 1
int32_t* ecx_4 = var_18:4.d

if (ecx_4 != 0)
    result = (*(*ecx_4 + 8))(eax_2)
    
    if (result != 0)
        result = (**result)(1)

*(arg1 + 0x4c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
