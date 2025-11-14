// 函数: sub_42e3e0
// 地址: 0x42e3e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5490
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 8)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0 && *(arg1 + 0xc) != 0)
    int32_t __saved_edi
    int32_t eax_6 = (**ecx)(__security_cookie ^ &__saved_edi)
    int32_t var_40 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    sub_42f4d0(&result_1, eax_6, &var_40)
    int32_t var_4 = 0
    void* ebx
    
    if (sub_42e5b0(arg1, (*(**(arg1 + 8) + 0x20))(), &result_1) != 0)
        if (sub_42e9d0(arg1, &result_1) != 0)
            if (sub_42ed50(arg1, &result_1) != 0)
                int32_t edi_1 = 0
                int32_t esi_1 = 0
                var_40 = 0
                
                if (eax_6 s> 0)
                    do
                        if ((*(**(arg1 + 8) + 0x14))(esi_1) != 0xffffffff)
                            if ((*(**(arg1 + 8) + 0x38))(esi_1) == result_1[esi_1])
                                edi_1 = var_40
                            else
                                int32_t var_5c_7 = result_1[esi_1]
                                int32_t var_60_4 = (*(**(arg1 + 8) + 0x38))(esi_1)
                                int32_t var_64_1 = esi_1
                                var_4.b = 1
                                void var_2c
                                sub_403110(arg2, sub_4691f0(&var_2c, "Page %d : Ref %d != %d\r\n"), 
                                    nullptr, 0xffffffff)
                                var_4.b = 0
                                sub_401fb0(&var_2c)
                                edi_1 = var_40 + 1
                                var_40 = edi_1
                        
                        esi_1 += 1
                    while (esi_1 s< eax_6)
                
                if (eax_6 s<= 0 || edi_1 s<= 0)
                    ebx.b = 1
                else
                    ebx.b = 0
            else
                sub_402670(arg2, 0x6db03c)
                ebx.b = 0
        else
            sub_402670(arg2, 0x6db0a8)
            ebx.b = 0
    else
        sub_402670(arg2, 0x6db088)
        ebx.b = 0
    
    result = result_1
    
    if (result != 0)
        j__free(result)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
