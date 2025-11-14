// 函数: sub_438230
// 地址: 0x438230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b5ec1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t eax_3 = arg2
int32_t var_18 = eax_3
void* i = arg3
struct advengine::CToken::VTable** result = arg4
struct advengine::CToken::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != eax_3; i += 0x40)
    struct advengine::CToken::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = &advengine::CToken::`vftable'
        result[1] = *(i + 4)
        result[7] = 0xf
        result[6] = 0
        result[2].b = 0
        sub_401ff0(&result[2], i + 8, 0, 0xffffffff)
        void* ecx_1 = &result[0xa]
        result[8] = *(i + 0x20)
        result[9] = *(i + 0x24)
        *(ecx_1 + 0x14) = 0xf
        *(ecx_1 + 0x10) = 0
        *ecx_1 = 0
        
        if (*(i + 0x3c) u>= 0x10)
            *ecx_1 = *(i + 0x28)
            *(i + 0x28) = 0
        else
            void* eax_8 = *(i + 0x38)
            
            if (eax_8 != 0xffffffff)
                _memcpy(ecx_1, i + 0x28, eax_8 + 1)
                ecx_1 = &result[0xa]
        
        *(ecx_1 + 0x10) = *(i + 0x38)
        *(ecx_1 + 0x14) = *(i + 0x3c)
        eax_3 = var_18
        *(i + 0x3c) = 0xf
        *(i + 0x38) = 0
        *(i + 0x28) = 0
    
    result = &result[0x10]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
