// 函数: sub_4602d0
// 地址: 0x4602d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b896b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXReader::exfile::CEXReader::VTable** eax_3 = sub_69adc6(0xf4)
struct IEXReader::exfile::CEXReader::VTable** var_10 = eax_3
int32_t var_4 = 0
struct IEXReader::exfile::CEXReader::VTable** result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_461450(eax_3)

int32_t var_4_1 = 0xffffffff

if (sub_461670(result, arg1, arg2) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

sub_4605e0(result)
(*result)->vFunc_1(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
