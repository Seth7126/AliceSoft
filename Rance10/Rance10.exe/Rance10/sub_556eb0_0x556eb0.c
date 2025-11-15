// 函数: sub_556eb0
// 地址: 0x556eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t* result

if (**arg1 s> 3)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, &data_794c78, nullptr)
    int32_t var_8_1 = 0
    char var_48[0x10]
    char* eax_6 = sub_403cd0(arg1[1], &var_48, esi, &var_30)
    var_8_1.b = 1
    int32_t** var_54
    int32_t* eax_7 = std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld(
        &var_54)
    int32_t var_58
    int32_t var_6c_2 = var_58
    int32_t** edi_1 = var_54
    int32_t var_50
    int32_t** eax_8 = sub_4324c0(eax_7, var_50, edi_1, eax_6)
    sub_417070(&var_54)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48[0].d, var_34 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48[0] = 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result = (eax_8 - edi_1) s/ 0x18
else
    int32_t* result_2 = *(arg1[1] + 4)
    
    if (result_2 != 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t* result_1 = (*(*result_2 + 8))(esi, 0)
        result = result_1 + 6
        
        if (result_1 s< 0xa)
            result = result_1
    else
        result = result_2 + 6
        
        if (result_2 s< 0xa)
            result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
