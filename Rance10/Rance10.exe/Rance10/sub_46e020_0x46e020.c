// 函数: sub_46e020
// 地址: 0x46e020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d588
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0

if (*(arg1 + 0x9c) == 0)
    struct IEXTreeReader::exfile::CDefineDataTree::VTable** eax_3 = sub_6e810c(0x38)
    struct IEXTreeReader::exfile::CDefineDataTree::VTable** var_34_1 = eax_3
    int32_t var_8_1 = 0
    var_8_1.b = 1
    int32_t var_30_1 = 1
    void* var_2c
    *(arg1 + 0x9c) = sub_474e90(eax_3, sub_46de30(arg1, &var_2c))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

int32_t result = *(arg1 + 0x9c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
