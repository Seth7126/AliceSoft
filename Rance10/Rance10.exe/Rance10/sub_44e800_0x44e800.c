// 函数: sub_44e800
// 地址: 0x44e800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72afd1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_44eb10(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    void** ecx_1 = *arg1
    result[9] = 0xf
    result[8] = 0
    char* eax_4
    
    if (result[9] u< 0x10)
        eax_4 = &result[4]
    else
        eax_4 = result[4]
    
    *eax_4 = 0
    sub_403590(&result[4], ecx_1, 0, 0xffffffff)
    result[0xf] = 0xf
    result[0xe] = 0
    result[0xa].b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
