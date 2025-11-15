// 函数: sub_5a7610
// 地址: 0x5a7610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73efd1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t i = arg2
int32_t* edi = arg3
int32_t* var_18 = edi
int32_t* var_1c = edi
int32_t var_8_1 = 0

while (i != 0)
    int32_t* var_20_1 = edi
    var_8_1.b = 1
    
    if (edi != 0)
        result = sub_5a4b90(edi, arg4)
    
    i -= 1
    var_8_1.b = 0
    edi = &edi[0xd3]
    int32_t* var_18_1 = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
