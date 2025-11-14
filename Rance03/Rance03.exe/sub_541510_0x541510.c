// 函数: sub_541510
// 地址: 0x541510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bae40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = *(arg1 + 0x10) - 1
int32_t ebx

if (result u> 0xa)
    result.b = 0
else
    switch (result)
        case 0, 1, 9, 0xa
            if (*(arg1 + 0x200) == 0)
                result.b = 0
            else
                int32_t var_44
                char* eax_6 = sub_58f410(&var_44, arg2)
                int32_t var_4 = 0
                void* esi_1 = *(arg1 + 0x200)
                
                if (sub_590700(esi_1, eax_6).b == 0)
                    ebx.b = sub_525610(esi_1 + 0x30, eax_6).b != 0
                else
                    ebx.b = 1
                
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    j__free(var_44)
                
                result.b = ebx.b
        case 2, 4, 5, 6, 8
            result.b = 0
        case 3
            void* ecx_2 = *(arg1 + 0x200)
            
            if (ecx_2 == 0)
                result.b = 0
            else
                result = sub_5906d0(ecx_2, arg2)
        case 7
            if (*(arg1 + 0x200) == 0)
                result.b = 0
            else
                void var_2c
                char* eax_7 = sub_590240(&var_2c, arg2)
                int32_t var_4_1 = 1
                ebx.b = sub_5906d0(*(arg1 + 0x200), eax_7)
                sub_401fb0(&var_2c)
                result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
