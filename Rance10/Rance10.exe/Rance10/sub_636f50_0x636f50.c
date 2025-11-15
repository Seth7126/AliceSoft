// 函数: sub_636f50
// 地址: 0x636f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745a70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1
void* result_1
sub_4275f0(&result_1, &arg1[1])
int32_t eax_4 = arg1[4]
int32_t var_8_1 = 0
void* var_24
sub_60ebd0(&var_24, &arg1[5])
int32_t esi = arg2
int32_t var_8_2 = 1
void* ebx

if (esi == 0)
label_636fef:
    ebx.b = 0
else
    while (true)
        *arg1 = eax_3
        arg1[4] = eax_4
        sub_4274a0(&arg1[1], &result_1)
        sub_636640(&arg1[5], &var_24)
        
        if (sub_635b70(arg1, *(esi + 0xc)) != 0)
            if (arg1[0x1b].b != 0)
                int32_t var_58_1 = *arg1
                void* var_54
                sub_4275f0(&var_54, &arg1[1])
                int32_t var_48_1 = arg1[4]
                var_8_2.b = 2
                void* var_44
                sub_60ebd0(&var_44, &arg1[5])
                var_8_2.b = 3
                int32_t ecx_13 = eax_3
                void* i = *(esi + 0x18)
                arg2 = (*arg1 - ecx_13) s>> 1
                
                if (i != 0)
                    int32_t* esi_1 = arg1
                    
                    do
                        *esi_1 = ecx_13
                        arg1[4] = eax_4
                        sub_4274a0(&arg1[1], &result_1)
                        sub_636640(&esi_1[5], &var_24)
                        ecx_13 = eax_3
                        
                        if (sub_635b70(esi_1, *(i + 0xc)) != 0)
                            int32_t eax_20 = *esi_1
                            int32_t esi_4 = (eax_20 - ecx_13) s>> 1
                            
                            if (arg2 u< esi_4)
                                var_58_1 = eax_20
                                var_48_1 = arg1[4]
                                sub_4274a0(&var_54, &arg1[1])
                                sub_636640(&var_44, &arg1[5])
                                ecx_13 = eax_3
                                arg2 = esi_4
                            
                            esi_1 = arg1
                        
                        i = *(i + 0x18)
                    while (i != 0)
                
                *arg1 = var_58_1
                arg1[4] = var_48_1
                sub_4274a0(&arg1[1], &var_54)
                sub_636640(&arg1[5], &var_44)
                void* ecx_22 = var_44
                ebx.b = 1
                int32_t var_3c
                
                if (ecx_22 != 0)
                    sub_403160(ecx_22, (var_3c - ecx_22) s>> 3, 8)
                void* ecx_23 = var_54
                int32_t var_4c
                
                if (ecx_23 != 0)
                    sub_403160(ecx_23, (var_4c - ecx_23) s>> 2, 4)
            else
                ebx.b = 1
            
            break
        
        esi = *(esi + 0x18)
        
        if (esi == 0)
            goto label_636fef

void* ecx_5 = var_24
int32_t var_1c

if (ecx_5 != 0)
    sub_403160(ecx_5, (var_1c - ecx_5) s>> 3, 8)
void* result = result_1
int32_t var_2c

if (result != 0)
    sub_403160(result, (var_2c - result) s>> 2, 4)
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
