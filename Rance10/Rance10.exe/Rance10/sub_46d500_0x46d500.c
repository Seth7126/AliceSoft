// 函数: sub_46d500
// 地址: 0x46d500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d452
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** eax_3 =
    sub_6e810c(0x124)
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** var_14 = eax_3
int32_t var_8_1 = 0
struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result =
    sub_46f620(eax_3)
int32_t var_8_2 = 0xffffffff
int32_t* ecx_1 = data_7fcb88
int32_t eax_4

if (ecx_1 != 0)
    eax_4 = (**ecx_1)(0x75f7ec)
else
    eax_4 = 0

if (sub_46f9d0(result, arg1, eax_4) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

sub_46d1d0(result)
(*result)->vFunc_1(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
