// 函数: sub_4d7f10
// 地址: 0x4d7f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatSpriteView::VTable** var_14 =
    arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatSpriteView::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
sub_4d7fb0(arg1)
int32_t* eax_3 = arg1[0xa]
int32_t* var_24 = eax_3
sub_4d8d10(&arg1[0xa], &var_14, *eax_3)
sub_403160(arg1[0xa], 1, 0x30)
int32_t result = sub_417070(&arg1[7])
void* ecx_2 = arg1[4]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[6] - ecx_2) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
