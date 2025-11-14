// 函数: sub_688ef0
// 地址: 0x688ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d12f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x108) == 0)
    sub_4107c0(*(arg1 + 0xfc), *(arg1 + 0x100))
    int32_t esi_1 = 0
    *(arg1 + 0x100) = *(arg1 + 0xfc)
    *(arg1 + 0xf8) = 0
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x78787879, arg2[1] - *arg2)
    int32_t edx_2 = edx_1 s>> 5
    int32_t eax_9 = (edx_2 u>> 0x1f) + edx_2
    
    if (eax_9 s> 0)
        do
            if (esi_1 == arg3)
                int32_t var_2c_1 = 0xf
                int32_t var_30_1 = 0
                var_40 = 0
                sub_402110(&var_40, 0x703830, 0x10)
                int32_t var_4 = 0
                sub_412d60(arg1 + 0xfc, &var_40)
                int32_t var_4_1 = 0xffffffff
                
                if (var_2c_1 u>= 0x10)
                    j__free(var_40.d)
                
                int32_t var_2c_2 = 0xf
                int32_t var_30_2 = 0
                var_40 = 0
                sub_402110(&var_40, 0x70382c, 1)
                int32_t var_4_2 = 1
                sub_412d60(arg1 + 0xfc, &var_40)
                int32_t var_4_3 = 0xffffffff
                
                if (var_2c_2 u>= 0x10)
                    j__free(var_40.d)
                
                char var_28
                sub_689750(*arg2 + esi_1 * 0x44, &var_28)
                int32_t var_4_4 = 2
                sub_421cd0(arg1 + 0xfc, &var_28)
                int32_t var_18
                *(arg1 + 0xf8) += var_18
                int32_t var_4_5 = 0xffffffff
                int32_t var_14
                
                if (var_14 u>= 0x10)
                    j__free(var_28.d)
                
                int32_t var_14_1 = 0xf
                int32_t var_18_1 = 0
                var_28 = 0
                break
            
            esi_1 += 1
        while (esi_1 s< eax_9)
    
    sub_688e10(arg1)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
