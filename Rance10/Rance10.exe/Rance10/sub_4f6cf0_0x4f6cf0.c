// 函数: sub_4f6cf0
// 地址: 0x4f6cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736550
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_7fcba4
char* var_2c = nullptr
int32_t result_1 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4f5fc0(&var_2c, arg1)
char* esi = var_2c

if (result.b != 0)
    struct fileimage::CFileImageAnalyser::VTable* const var_20 =
        &fileimage::CFileImageAnalyser::`vftable'
    result = result_1
    char* var_1c_1 = esi
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
    var_8_1.b = 1
    
    if (&esi[4] u> result)
        ebx.b = 0
    else
        uint32_t edi_7 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
        void* var_1c_2 = &esi[4]
        
        if (sub_4f6a90(edi_7).b == 0)
            ebx.b = 0
        else if (sub_51b4f0(ebx + 0xf4, edi_7, &var_20).b == 0)
            ebx.b = 0
        else if (sub_404210(ebx + 0x1cc, edi_7, &var_20).b == 0)
            ebx.b = 0
        else
            ebx.b = 1
    
    var_20 = &fileimage::CFileImageAnalyser::`vftable'
else
    ebx.b = 0

if (esi != 0)
    sub_403160(esi, var_24 - esi, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
