// 函数: sub_4734f0
// 地址: 0x4734f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9b60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_43aa00(0x6dd5a0, 0x6db320)

if (result.b == 0)
    result.b = 0
else
    int32_t* esi_1 = data_75d4c0
    
    if (esi_1 == 0)
        result.b = 0
    else
        int32_t var_4 = 0
        int32_t var_2c
        result = sub_473630(esi_1, sub_410930(result, arg2, &var_2c, "Sound.afa"))
        int32_t var_4_1 = 0xffffffff
        int32_t ebx
        ebx.b = result.b == 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            result = j__free(var_2c)
        
        if (ebx.b != 0)
            result.b = 0
        else
            int32_t var_4_2 = 1
            int32_t var_4_3 = 0xffffffff
            ebx.b = sub_473630(esi_1, sub_410930(result, arg2, &var_44, "Voice.afa")).b == 0
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44.d)
            
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (ebx.b != 0)
                result.b = 0
            else
                result = (*(*esi_1 + 0x10))(5)
                *(arg1 + 4) = result
                
                if (result != 0)
                    (**result)(eax_4)
                
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
