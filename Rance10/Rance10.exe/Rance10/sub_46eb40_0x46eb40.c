// 函数: sub_46eb40
// 地址: 0x46eb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ed8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 1
char var_48 = 0x2e
void* result

if (sub_42cb30(arg2, &var_48, arg1) == 0xffffffff)
    int32_t var_8_1 = 0
    void* var_44
    void* var_2c
    sub_462db0(&var_2c, sub_46d8e0(&var_44, arg2))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    void** esi_1 = sub_432330(arg1 + 4, &var_2c)
    char eax_9
    
    if (esi_1 != *(arg1 + 4))
        eax_9 = sub_412ca0(&var_2c, &esi_1[4])
    
    if (esi_1 == *(arg1 + 4) || eax_9 != 0)
        esi_1 = *(arg1 + 4)
    
    void* result_1
    
    if (esi_1 != *(arg1 + 4))
        result_1 = esi_1[0xa]
    else
        result_1 = nullptr
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result = result_1
else
    void** var_58_1 = arg2
    result = Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(arg1)
    
    if (result != 0)
        result = *(result + 0x1c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
