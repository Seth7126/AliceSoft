// 函数: sub_5c22f0
// 地址: 0x5c22f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_5c2b90(arg1, 0x6ea790, 1)
int32_t* result_1 = result

if (result_1 != 0)
    result = sub_5c2b90(arg1, 0x6ea810, 1)
    int32_t* result_2 = result
    
    if (result_2 != 0)
        int32_t edi_1 = 0
        result = (*(*result_2 + 0x2c))(eax_4)
        
        if (result s> 0)
            do
                char* eax_9 = (**result_1)((*(*result_2 + 0x18))((*(*result_2 + 0x30))(edi_1)))
                
                if (eax_9 != 0)
                    int32_t var_4 = 0
                    sub_412d60(arg2, sub_42da80(&var_2c, eax_9))
                    int32_t var_4_1 = 0xffffffff
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        j__free(var_2c.d)
                    
                    var_18 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                
                edi_1 += 1
                result = (*(*result_2 + 0x2c))()
            while (edi_1 s< result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
