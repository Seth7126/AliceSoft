// 函数: sub_43ae60
// 地址: 0x43ae60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void arg_4
sub_42f3d0(&arg1[2], &var_10, &arg_4)

if (var_10 == arg1[2])
    int32_t* eax_4 = sub_69adc6(0x2c)
    var_10 = eax_4
    int32_t var_4 = 0
    struct IAFAFile::afafactory::CAFAFile::VTable** edi_1
    
    if (eax_4 == 0)
        edi_1 = nullptr
    else
        edi_1 = sub_43b040(eax_4)
    
    int32_t var_4_1 = 0xffffffff
    *sub_42f350(&arg1[2], &arg_4) = edi_1

int32_t* result = sub_43b170(*sub_42f350(&arg1[2], &arg_4), arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
