// 函数: sub_566230
// 地址: 0x566230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731a90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result
int32_t ebx

if (arg3 - 1 u> 0xa)
    result.b = 0
else
    switch (arg3 + &jump_table_5662fc[3]:3)
        case &lookup_table_56630c, &lookup_table_56630c[1], &lookup_table_56630c[9], 
                &lookup_table_56630c[0xa]
            if (*(arg1 + 0x18) == 0)
                result.b = 0
            else
                void var_2c
                char* eax_4 = sub_5ce890(&var_2c, arg2)
                int32_t var_8_1 = 0
                ebx.b = sub_5d0440(*(arg1 + 0x18), eax_4)
                sub_403320(&var_2c)
                result.b = ebx.b
        case &lookup_table_56630c[2], &lookup_table_56630c[4], &lookup_table_56630c[5], 
                &lookup_table_56630c[6], &lookup_table_56630c[8]
            result.b = 0
        case &lookup_table_56630c[3]
            void* ecx_3 = *(arg1 + 0x18)
            
            if (ecx_3 == 0)
                result.b = 0
            else
                result = sub_5d0440(ecx_3, arg2)
        case &lookup_table_56630c[7]
            if (*(arg1 + 0x18) == 0)
                result.b = 0
            else
                void var_44
                char* eax_6 = sub_5cfe00(&var_44, arg2)
                int32_t var_8_2 = 1
                ebx.b = sub_5d0440(*(arg1 + 0x18), eax_6)
                sub_403320(&var_44)
                result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
