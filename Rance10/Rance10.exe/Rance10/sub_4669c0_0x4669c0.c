// 函数: sub_4669c0
// 地址: 0x4669c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c864
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_98 = 0
*(arg3 + 0x34) = 6
char* eax_4 = sub_46e020(arg3)
int32_t ebx
ebx.b = *(arg3 + 0x38)
struct IEXTreeReader::exfile::CDefineDataTree::VTable** esi = nullptr
char* var_90 = eax_4
char temp1 = ebx.b
bool cond:0 = temp1 != 0

if (temp1 != 0)
    struct IEXTreeReader::exfile::CDefineDataTree::VTable** eax_5 = sub_6e810c(0x38)
    struct IEXTreeReader::exfile::CDefineDataTree::VTable** var_a0_1 = eax_5
    int32_t var_8_1 = 0
    var_8_1.b = 1
    int32_t var_98_1 = 1
    char var_44
    esi = sub_474e90(eax_5, sub_46de30(arg3, &var_44))
    int32_t var_8_2 = 0xffffffff
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    eax_4 = var_90
    cond:0 = ebx.b != 0
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0

if (cond:0)
    eax_4 = esi

char result

if (sub_466be0(arg1, arg2, eax_4) == 0)
    if (esi != 0)
        (*esi)->vFunc_12(1)
    
    result = 0
else if (ebx.b == 0)
    result = 1
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_3 = 3
    
    if (sub_475a50(var_90, esi, &var_2c) != 0)
        if (esi != 0)
            (*esi)->vFunc_12(1)
        
        sub_403320(&var_2c)
        result = 1
    else
        if (esi != 0)
            (*esi)->vFunc_12(1)
        
        void var_8c
        char* eax_13 = sub_46de30(arg3, &var_8c)
        var_8_3.b = 4
        
        if (*(eax_13 + 0x14) u>= 0x10)
            eax_13 = *eax_13
        
        var_90 = eax_13
        void var_5c
        sub_403360(&var_5c, 0x75ed2c)
        var_8_3.b = 5
        var_8_3.b = 6
        void var_74
        sub_4055a0(&var_2c, sub_409240(&var_90, &var_5c, &var_74, &var_90), 0, 0xffffffff)
        sub_403320(&var_74)
        sub_403320(&var_5c)
        var_8_3.b = 3
        sub_403320(&var_8c)
        sub_45eb40(*(arg1 + 4), &var_2c)
        sub_403320(&var_2c)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
