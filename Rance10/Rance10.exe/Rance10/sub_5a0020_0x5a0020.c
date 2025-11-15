// 函数: sub_5a0020
// 地址: 0x5a0020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e6d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_20 = &fileimage::CFileImageMaker::`vftable'
void* result_1 = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
sub_5a00e0(arg1, &var_20)
int32_t* esi = *(arg1 + 4)
int32_t edi_1 = *(arg1 + 8)
int32_t ebx

if (esi == edi_1)
label_5a009f:
    sub_5a44a0(arg2, &result_1)
    ebx.b = 1
else
    while (true)
        if (sub_5a01e0(&var_20, esi) == 0)
            ebx.b = 0
            break
        
        esi = &esi[0xd3]
        
        if (esi == edi_1)
            goto label_5a009f

void* result = result_1

if (result != 0)
    sub_403160(result, var_14 - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
