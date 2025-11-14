// 函数: sub_42f6e0
// 地址: 0x42f6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = arg1
void* var_30 = eax_5
int32_t result = 0
int32_t esi = 0
int32_t result_1 = 0

if (arg2 s> 0)
    do
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_4 = 0
        char* eax_7 = (*(**(eax_5 + 0xc) + 0x1c))(esi)
        
        if (eax_7 != 0)
            void* eax_8
            
            if (*eax_7 != 0)
                char* eax_9 = eax_7
                char i
                
                do
                    i = *eax_9
                    eax_9 = &eax_9[1]
                while (i != 0)
                eax_8 = eax_9 - &eax_9[1]
            else
                eax_8 = nullptr
            
            sub_402110(&var_2c, eax_7, eax_8)
        
        int32_t var_34
        int32_t* ecx_2 = &var_34
        var_34 = var_1c_1
        
        if (result s>= var_1c_1)
            ecx_2 = &result_1
        
        result = *ecx_2
        int32_t var_4_1 = 0xffffffff
        result_1 = result
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        eax_5 = var_30
        esi += 1
    while (esi s< arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
