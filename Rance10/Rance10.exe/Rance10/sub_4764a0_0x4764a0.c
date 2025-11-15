// 函数: sub_4764a0
// 地址: 0x4764a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &exfile::CEXReaderList::`vftable'{for `common::SuicideRefCounter<class IEXReaderList>'}
arg1[1] = &exfile::CEXReaderList::`vftable'{for `IEXTreeReader'}
sub_476520(arg1)
sub_406910(&arg1[3])
sub_403160(arg1[3], 1, 0xc)

if ((arg2 & 1) != 0)
    int32_t var_20_1 = 0x14
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
