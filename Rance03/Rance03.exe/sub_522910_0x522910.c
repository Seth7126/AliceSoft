// 函数: sub_522910
// 地址: 0x522910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
void* arg_c
void* esi = arg_c
sub_44f050(esi, &result_1)
sub_522a40(&result_1, esi)
sub_522d30(arg1, &result_1)
int32_t* ebx

if (sub_522e60(arg1, esi, &result_1, arg4) == 0)
    ebx.b = 0
else
    sub_523240(arg1)
    char eax_4
    int32_t ecx_5
    eax_4, ecx_5 = sub_5232e0(arg1, arg4)
    
    if (eax_4 == 0)
        ebx.b = 0
    else
        int32_t var_2c_5 = ecx_5
        
        if (sub_523410(arg1) == 0)
            ebx.b = 0
        else if (sub_523530(arg1, arg2, arg3, arg4) == 0)
            ebx.b = 0
        else
            int32_t* ecx_8 = *(arg1 + 4)
            void* eax_7 = *ecx_8
            arg_c = eax_7
            
            if (eax_7 == ecx_8)
            label_522a03:
                ebx.b = 1
            else
                while (true)
                    void* ecx_9 = *(eax_7 + 0x14)
                    
                    if (ecx_9 != 0)
                        int32_t* ecx_10 = *(ecx_9 + 0xe0)
                        
                        if (ecx_10 != 0 && (*(*ecx_10 + 8))(eax_2) == 0)
                            sub_64b530("Direct3D")
                            break
                    
                    sub_418380(&arg_c)
                    eax_7 = arg_c
                    
                    if (eax_7 == *(arg1 + 4))
                        goto label_522a03
                
                ebx.b = 0

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
