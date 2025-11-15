// 函数: sub_559c10
// 地址: 0x559c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73b188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_1c = 0
int32_t* var_24 = nullptr
int32_t var_20 = 0
int32_t* eax_3
int32_t ecx
eax_3, ecx = sub_4f2cd0()
int32_t* edx = eax_3
var_24 = edx
int32_t var_8_1 = 0
int32_t edi = arg2[1]
int32_t* esi_1 = *arg2

if (esi_1 != edi)
    int32_t* result_3 = result_1
    
    do
        int32_t eax_4 = *esi_1
        int32_t var_14 = eax_4
        
        if (eax_4 != 0)
            int32_t* result_4 = result_3
            int32_t* var_44_1 = &var_14
            int32_t* var_2c
            ecx = sub_4f2d40(&var_24, &var_2c, ecx)
        
        esi_1 = &esi_1[7]
    while (esi_1 != edi)
    
    edx = var_24
    result = result_1

int32_t* eax_5 = *edx
result_1.b = 0
int32_t* result_2 = result_1
*result = 0
result[1] = 0
result[2] = 0
sub_55c430(result, eax_5, edx)
int32_t** eax_6 = var_24
sub_4f27c0(&var_24, &result_1, *eax_6, eax_6)
sub_403160(var_24, 1, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
