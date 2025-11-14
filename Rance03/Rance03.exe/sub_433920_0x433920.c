// 函数: sub_433920
// 地址: 0x433920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5790
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_75d4bc
struct _EXCEPTION_REGISTRATION_RECORD** result

if (data_75d534 == 0)
    result.b = 0
else
    int32_t ecx
    int32_t var_5c_1 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = sub_6203f0()
    
    if (esi_1 == 0)
        result.b = 0
    else
        result = (*esi_1)->Next(0x6db25c)
        
        if (result == 0)
            result.b = 0
        else
            result = (*result)->Next(eax_4)
        
        *(edi + 8) = result.b
        
        if (result.b == 0)
            result.b = 0
        else
            if (*(edi + 0x34) == 0)
                result = (*esi_1)->Next(0x6db24c)
                *(edi + 0x34) = result
            
            if (*(edi + 0x34) == 0 && result == 0)
                result.b = 0
            else
                int32_t var_2c
                char* eax_8 = sub_402a20(&var_2c, arg1)
                int32_t var_4 = 0
                var_4.b = 1
                char var_44
                int32_t* ebx
                ebx.b = sub_433c10(edi, sub_410a80(eax_8.b, eax_8, &var_44, ".jaf")).b == 0
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    j__free(var_44.d)
                
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44 = 0
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                
                result.b = ebx.b == 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
