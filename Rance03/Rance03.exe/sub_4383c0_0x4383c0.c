// 函数: sub_4383c0
// 地址: 0x4383c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CMessageSyntax::VTable** esi = sub_69adc6(0x2c)
struct advengine::CMessageSyntax::VTable** var_10 = esi
int32_t var_4 = 0

if (esi == 0)
    esi = nullptr
else
    *esi = &advengine::CMessageSyntax::`vftable'
    sub_438820(&esi[1])

int32_t var_4_1 = 0xffffffff
*(arg1 + 8) = esi

if (sub_438620(esi, arg2) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

int32_t* ecx_4 = *(arg1 + 8)

if (ecx_4 != 0)
    (**ecx_4)(1)

*(arg1 + 8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
