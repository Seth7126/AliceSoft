// 函数: sub_465a80
// 地址: 0x465a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c668
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
arg1.b = *(arg3 + 0x38)
*(arg3 + 0x34) = 4
int32_t eax_4 = *(arg3 + 0x64)
int32_t edx = *(arg3 + 0x68)
int32_t* result

if (arg1.b == 0)
    if (eax_4 == edx)
        goto label_465b19
    
    void* var_2c
    sub_403360(&var_2c, 0x75e7ec)
    int32_t var_8_1 = 0
    sub_45eb40(*(esi + 4), &var_2c)
    int32_t* var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = 0
else if (eax_4 != edx)
    struct exfile::CFormatDataList::VTable* var_24 = &exfile::CFormatDataList::`vftable'
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_8_2 = 1
    
    if (sub_465bf0(esi, arg2, &var_24) == 0)
        sub_46b330(&var_24)
        result.b = 0
    else if (sub_46b790(&var_24, arg3 + 0x60) != 0)
        int32_t var_8_3 = 0xffffffff
        sub_46b330(&var_24)
    label_465bcb:
        
        if (sub_4662b0(esi, arg2, arg3 + 0x5c).b == 0)
            result.b = 0
        else
            result.b = sub_45ff40(arg3 + 0x5c, *(esi + 4)).b != 0
    else
        void var_44
        sub_403360(&var_44, 0x75e7b4)
        var_8_2.b = 2
        sub_45eb40(*(esi + 4), &var_44)
        sub_403320(&var_44)
        sub_46b330(&var_24)
        result.b = 0
else
label_465b19:
    
    if (sub_465bf0(esi, arg2, arg3 + 0x60).b != 0)
        goto label_465bcb
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
