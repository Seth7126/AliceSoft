// 函数: sub_492ae0
// 地址: 0x492ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fa80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_8_1 = 0
char eax_4 = sub_67edf0(arg1, &var_3c)
char* esi = var_3c
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** eax_5

if (eax_4 != 0)
    eax_5 = sub_46d660(esi, var_38 - esi)

int32_t* result

if (eax_4 == 0 || eax_5 == 0)
    result = 0xffffffff
else
    result = sub_404080(data_7fcb78)
    sub_492a50(result, eax_5)
    (*eax_5)->vFunc_1(eax_2)
    int32_t* result_1 = result
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t ecx_5 = sub_403590(&var_2c, arg1, 0, 0xffffffff)
    var_8_1.b = 1
    void** var_58_1 = arg1
    int32_t** var_5c_1 = &result_1
    int32_t* var_44
    sub_494920(data_7fcb7c, &var_44, ecx_5)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)

if (esi != 0)
    sub_403160(esi, var_34 - esi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
