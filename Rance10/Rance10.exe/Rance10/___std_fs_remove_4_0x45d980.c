// 函数: ___std_fs_remove@4
// 地址: 0x45d980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bd2f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c = nullptr
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
char eax_3
int32_t ecx_1
eax_3, ecx_1 = sub_45dab0(&var_2c, arg1)
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result

if (eax_3 != 0)
    char* var_20 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    var_8_1.b = 1
    int32_t eax_7 = (*(*arg1 + 0x10))((*(*arg1 + 0x14))(ecx_1, eax_2))
    char eax_8 = sub_45d800(eax_7, &var_2c, &var_20, eax_7)
    char* edi_1 = var_20
    
    if (eax_8 != 0)
        result = sub_6e810c(0x14)
        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result_1 =
            result
        var_8_1.b = 2
        int32_t var_3c_2 = 0
        result[1] = 1
        *result = &common::CIMemory::`vftable'{for `common::SuicideRefCounter<class IMemory>'}
        result[2] = 0
        result[3] = 0
        result[4] = 0
        sub_405b10(&result[2], edi_1, var_1c_1)
    else
        result = nullptr
    
    if (edi_1 != 0)
        sub_403160(edi_1, var_18_1 - edi_1, 1)
else
    result = nullptr

void* eax_12 = var_2c

if (eax_12 != 0)
    sub_403160(eax_12, var_24 - eax_12, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
