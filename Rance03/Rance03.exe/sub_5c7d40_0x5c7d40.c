// 函数: sub_5c7d40
// 地址: 0x5c7d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9d80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
*(esi + 0x234) -= 4
uint32_t eax_7 = **(esi + 0x234) - 2
char result
int32_t edx

if (eax_7 u> 0x2e)
label_5c7fef:
    int32_t var_70_12 = 0x6e7e14
    result = sub_5c2400(eax_7, edx, arg1, esi, "S_MOD")
else
    eax_7 = zx.d(lookup_table_5c8048[eax_7])
    char var_58
    int32_t eax_10
    int32_t ecx_1
    int32_t edx_2
    
    switch (eax_7)
        case 0
            *(esi + 0x234) -= 4
            **(esi + 0x234)
            int32_t var_44_1 = 0xf
            int32_t var_48_1 = 0
            var_58 = 0
            var_4.b = 1
            
            if (sub_5cea10(esi, &var_58, "S_MOD") == 0)
                result = sub_401fb0(&var_58)
            else
                eax_10, ecx_1, edx_2 = sub_5d1970(&var_40, eax_4, arg2)
                
                if (eax_10.b != 0)
                    goto label_5c7fb3
                
                int32_t var_70_2 = 0x6e7d44
                sub_5c2400(eax_10, edx_2, ecx_1, esi, "S_MOD")
                result = sub_401fb0(&var_58)
        case 1
            *(esi + 0x234) -= 4
            var_5c = **(esi + 0x234)
            int32_t var_44_3 = 0xf
            int32_t var_48_3 = 0
            var_58 = 0
            var_4.b = 3
            
            if (sub_5cea10(esi, &var_58, "S_MOD") == 0)
                result = sub_401fb0(&var_58)
            else
                eax_10, ecx_1, edx_2 = sub_5d2110(var_5c, eax_4, arg2)
                
                if (eax_10.b != 0)
                    goto label_5c7fb3
                
                char const* const var_70_5 = "float"
                sub_5c2400(eax_10, edx_2, ecx_1, esi, "S_MOD")
                result = sub_401fb0(&var_58)
        case 2
            int32_t var_44_4 = 0xf
            int32_t var_48_4 = 0
            var_58 = 0
            var_4.b = 4
            result = sub_5cea10(esi, &var_58, "S_MOD")
            
            if (result == 0)
                goto label_5c7f91
            
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            char var_28 = 0
            var_4.b = 5
            
            if (sub_5cea10(esi, &var_28, "S_MOD") == 0)
                goto label_5c7f8c
            
            int32_t* eax_16
            int32_t ecx_7
            int32_t edx_4
            eax_16, ecx_7, edx_4 = sub_5d2730(&var_40)
            
            if (eax_16.b != 0)
                sub_401fb0(&var_28)
            label_5c7fb3:
                var_4.b = 0
                sub_401fb0(&var_58)
                eax_7, arg1, edx = sub_5d62c0(esi + 0x16c, &var_40, &var_5c)
                
                if (eax_7.b != 0)
                    result = sub_5ddf10(esi + 0x220, var_5c)
                else
                    int32_t var_70_10 = 0x6e7e34
                    result = sub_5c2400(eax_7, edx, arg1, esi, "S_MOD")
            else
                int32_t var_70_7 = 0x6e7de8
                sub_5c2400(eax_16, edx_4, ecx_7, esi, "S_MOD")
            label_5c7f8c:
                result = sub_401fb0(&var_28)
            label_5c7f91:
                
                if (var_44_4 u>= 0x10)
                    result = j__free(var_58.d)
        case 3
            *(esi + 0x234) -= 4
            **(esi + 0x234)
            int32_t var_44_2 = 0xf
            int32_t var_48_2 = 0
            var_58 = 0
            var_4.b = 2
            
            if (sub_5cea10(esi, &var_58, "S_MOD") == 0)
                result = sub_401fb0(&var_58)
            else
                eax_10, ecx_1, edx_2 = sub_5d1970(&var_40, eax_4, arg2)
                
                if (eax_10.b != 0)
                    goto label_5c7fb3
                
                char const* const var_70_4 = "bool"
                sub_5c2400(eax_10, edx_2, ecx_1, esi, "S_MOD")
                result = sub_401fb0(&var_58)
        case 4
            goto label_5c7fef

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
