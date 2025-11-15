// 函数: sub_5d4900
// 地址: 0x5d4900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74125b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IEXReader>::sealengine::CSealEXReader::VTable** var_14 = arg1
arg1[1] = &IEXTreeReader::`vftable'
void* eax_3 = &arg1[3]
arg1[2] = 1
*arg1 = &sealengine::CSealEXReader::`vftable'{for `common::SuicideRefCounter<class IEXReader>'}
arg1[1] = &sealengine::CSealEXReader::`vftable'{for `IEXTreeReader'}
*(eax_3 + 0x14) = 0xf
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

*eax_3 = 0
int32_t var_8_1 = 0
void* var_18 = &arg1[9]
*(arg1 + 0x24) = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[9] = sub_4a8f20()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
