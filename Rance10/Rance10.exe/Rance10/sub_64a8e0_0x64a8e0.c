// 函数: sub_64a8e0
// 地址: 0x64a8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = 0xf
int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
int32_t var_8_1 = 0
void* edx = data_7fcbcc
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t* ebx

if (*(edx + 0x19) == 0)
    ebx.b = 0
else
    void* esi_1 = *(edx + 0x14)
    result = *(esi_1 + 4)
    void* edi_1 = result + 1
    
    if (edi_1 u> *(esi_1 + 8))
        ebx.b = 0
    else
        result.b = *result
        *(esi_1 + 4) = edi_1
        
        if (result.b != 3)
            ecx = var_18
            ebx.b = 0
        else if (sub_61ed80(*(edx + 0x14), &var_2c).b == 0)
            ecx = var_18
            ebx.b = 0
        else
            char* edx_1 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_1 = var_2c.d
            
            (*(*arg1 + 4))(edx_1)
            ecx = var_18
            ebx.b = 1

if (ecx u>= 0x10)
    sub_403160(var_2c.d, ecx + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
