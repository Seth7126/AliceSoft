// 函数: sub_5703e0
// 地址: 0x5703e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c761
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
void* result = arg4
void* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x3c)
    void* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        void (__fastcall* var_30_1)(void* arg1) = sub_56dbf0
        (result, i, 0x10, 3, sub_570490)
        *(result + 0x30) = *(i + 0x30)
        *(result + 0x38) = *(i + 0x38)
    
    result += 0x3c
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
