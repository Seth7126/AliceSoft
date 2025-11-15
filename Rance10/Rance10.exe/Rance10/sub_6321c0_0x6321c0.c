// 函数: sub_6321c0
// 地址: 0x6321c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7456e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1c
std::_Lockit::_Lockit(&var_1c, 0)
int32_t var_8_1 = 0
int32_t edi = data_7fbad8
int32_t* result_2 = data_7fd520
int32_t* result_1 = result_2

if (edi == 0)
    void var_18
    std::_Lockit::_Lockit(&var_18, edi)
    
    if (data_7fbad8 == edi)
        int32_t eax_4 = data_7fbac4 + 1
        data_7fbac4 = eax_4
        data_7fbad8 = eax_4
    
    std::_Lockit::~_Lockit(&var_18)
    edi = data_7fbad8

void* ecx_4 = *(arg1 + 4)
int32_t* result

if (edi u>= *(ecx_4 + 0xc))
    result = nullptr
label_632254:
    
    if (*(ecx_4 + 0x14) == 0)
        goto label_63226a
    
    void* eax_6 = sub_6d4583()
    
    if (edi u>= *(eax_6 + 0xc))
    label_63226e:
        
        if (result_2 == 0)
            sub_62c6d0(&result_1, arg1)
            result = result_1
            data_7fd520 = result
            (*(*result + 4))(eax_2)
            std::_Facet_Register(result)
        else
            result = result_2
    else
        result = *(*(eax_6 + 8) + (edi << 2))
    label_63226a:
        
        if (result == 0)
            goto label_63226e
else
    result = *(*(ecx_4 + 8) + (edi << 2))
    
    if (result == 0)
        goto label_632254

std::_Lockit::~_Lockit(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
