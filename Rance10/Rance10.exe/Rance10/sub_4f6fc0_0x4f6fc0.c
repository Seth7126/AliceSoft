// 函数: sub_4f6fc0
// 地址: 0x4f6fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736580
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_7fcba4
char* var_20 = nullptr
int32_t result_2 = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4f5fc0(&var_20, arg2)
char* esi = var_20

if (result.b != 0)
    struct fileimage::CFileImageAnalyser::VTable* const var_2c =
        &fileimage::CFileImageAnalyser::`vftable'
    result = result_2
    char* var_28_1 = esi
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    var_8_1.b = 1
    
    if (&esi[4] u> result)
        ebx.b = 0
    else
        uint32_t edi_7 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
        void* var_28_2 = &esi[4]
        
        if (sub_4f6a90(edi_7).b == 0)
            ebx.b = 0
        else
            ebx.b = sub_51b630(ebx + 0xf4, arg1, edi_7, &var_2c).b
    
    var_2c = &fileimage::CFileImageAnalyser::`vftable'
else
    ebx.b = 0

if (esi != 0)
    sub_403160(esi, var_18 - esi, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
