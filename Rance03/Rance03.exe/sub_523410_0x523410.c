// 函数: sub_523410
// 地址: 0x523410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0xc) != *(arg1 + 0x10))
    int32_t edi_2 = ((*(arg1 + 0x10) - *(arg1 + 0xc)) s>> 2) * 6
    int32_t __saved_edi
    
    if ((*(**(arg1 + 0x24) + 0x20))(__security_cookie ^ &__saved_edi) s< edi_2)
        int32_t var_18 = 0
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_4 = 0
        int32_t var_1c = 1
        sub_412de0(&var_18, &var_1c)
        var_1c = 6
        sub_412de0(&var_18, &var_1c)
        var_1c = 7
        sub_412de0(&var_18, &var_1c)
        int32_t esi_1 = var_18
        
        if ((*(**(arg1 + 0x24) + 8))(edi_2, esi_1, (var_14_1 - esi_1) s>> 2, 1).b == 0)
            if (esi_1 != 0)
                j__free(esi_1)
            
            result.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        if (esi_1 != 0)
            j__free(esi_1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
