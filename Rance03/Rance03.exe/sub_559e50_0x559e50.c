// 函数: sub_559e50
// 地址: 0x559e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi_1 = ((*(arg1 + 8) - *(arg1 + 4)) s>> 2) * 6
int32_t arg_4
int32_t result

if (*(arg1 + 0x10) == 0)
    result = (*(*arg_4 + 0x54))(eax_2)
    *(arg1 + 0x10) = result

if (*(arg1 + 0x10) != 0 || result != 0)
    if ((*(**(arg1 + 0x10) + 0x20))(eax_2) s>= edi_1)
    label_559ffb:
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t var_18 = 0
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    arg_4 = 1
    sub_412de0(&var_18, &arg_4)
    arg_4 = 2
    sub_412de0(&var_18, &arg_4)
    arg_4 = 3
    sub_412de0(&var_18, &arg_4)
    arg_4 = 4
    sub_412de0(&var_18, &arg_4)
    arg_4 = 5
    sub_412de0(&var_18, &arg_4)
    arg_4 = 6
    sub_412de0(&var_18, &arg_4)
    arg_4 = 7
    sub_412de0(&var_18, &arg_4)
    arg_4 = 8
    sub_412de0(&var_18, &arg_4)
    arg_4 = 9
    sub_412de0(&var_18, &arg_4)
    arg_4 = 0xa
    sub_412de0(&var_18, &arg_4)
    int32_t esi_1 = var_18
    
    if ((*(**(arg1 + 0x10) + 8))(edi_1, esi_1, (var_14_1 - esi_1) s>> 2, 1).b != 0)
        if (esi_1 != 0)
            j__free(esi_1)
        
        goto label_559ffb
    
    if (esi_1 != 0)
        j__free(esi_1)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
