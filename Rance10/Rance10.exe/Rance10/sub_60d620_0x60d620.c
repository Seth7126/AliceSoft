// 函数: sub_60d620
// 地址: 0x60d620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743009
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t i = arg2
int32_t* esi = arg1
int32_t* var_18 = esi
int32_t* var_20 = esi
int32_t var_8_1 = 0

while (i != 0)
    int32_t* var_24_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        int32_t* var_38_1 = arg1
        int32_t* var_1c = nullptr
        sub_626100(esi, &var_1c)
        var_8_1.b = 2
        int32_t* var_38_2 = &esi[8]
        var_1c = &esi[8]
        var_1c = nullptr
        result, arg1 = sub_60c470(&esi[8], &var_1c)
        esi[0x10] = 0xffffffff
        esi[0x11] = 0xffffffff
    
    i -= 1
    var_8_1.b = 0
    esi = &esi[0x12]
    int32_t* var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
