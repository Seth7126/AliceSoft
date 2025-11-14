// 函数: sub_64dbe0
// 地址: 0x64dbe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c59e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg5
int32_t* result_1 = result

if (arg2 s>= 0)
    int32_t __saved_edi
    result = (*(*arg1 + 4))(__security_cookie ^ &__saved_edi)
    
    if (arg2 s< result)
        int32_t ebx_1 = arg3
        int32_t* esi_1 = arg1[0x2e] + arg2 * 0x18
        int32_t i = 0
        
        if (esi_1[4] s> 0)
            do
                int32_t eax_7 = esi_1[5]
                char* ecx_1
                
                if (eax_7 u< 0x10)
                    ecx_1 = esi_1
                else
                    ecx_1 = *esi_1
                
                char* ecx_2
                
                if (ecx_1[i] u>= 0x81)
                    if (eax_7 u< 0x10)
                        ecx_2 = esi_1
                    else
                        ecx_2 = *esi_1
                
                int32_t* eax_8
                char* ecx_3
                
                if (ecx_1[i] u< 0x81 || ecx_2[i] u> 0x9f)
                    if (eax_7 u< 0x10)
                        ecx_3 = esi_1
                    else
                        ecx_3 = *esi_1
                    
                    if (ecx_3[i] u>= 0xe0)
                        if (eax_7 u< 0x10)
                            eax_8 = esi_1
                        else
                            eax_8 = *esi_1
                
                int32_t var_40
                int32_t var_2c
                
                if ((ecx_1[i] u< 0x81 || ecx_2[i] u> 0x9f)
                        && (ecx_3[i] u< 0xe0 || *(eax_8 + i) u> 0xef))
                    int32_t var_4_2 = 1
                    sub_64dda0(arg1, ebx_1, arg4, sub_403070(esi_1, &var_40, i, 1), result_1)
                    int32_t var_4_3 = 0xffffffff
                    
                    if (var_2c u>= 0x10)
                        j__free(var_40)
                    
                    i += 1
                    int32_t eax_12
                    int32_t edx_1
                    edx_1:eax_12 = sx.q(arg1[5])
                    ebx_1 += (eax_12 - edx_1) s>> 1
                else
                    int32_t var_4 = 0
                    sub_64dda0(arg1, ebx_1, arg4, sub_403070(esi_1, &var_40, i, 2), result_1)
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_2c u>= 0x10)
                        j__free(var_40)
                    
                    i += 2
                    ebx_1 += arg1[5]
            while (i s< esi_1[4])
        
        void* var_28
        sub_401f60(&var_28, U"\n")
        int32_t var_4_4 = 2
        result = sub_64dda0(arg1, ebx_1, arg4, &var_28, result_1)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
