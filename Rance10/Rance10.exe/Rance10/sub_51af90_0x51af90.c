// 函数: sub_51af90
// 地址: 0x51af90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIScene::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIScene::`vftable'
sub_4f40f0(&arg1[0xc])
sub_503370(&arg1[3])
sub_503370(&arg1[6])
sub_4f4040(&arg1[0xc])
int32_t* eax_5 = arg1[9]
int32_t* var_28_2 = eax_5
sub_5164e0(&arg1[9], &var_14, *eax_5)
sub_403160(arg1[9], 1, 0x9c)
int32_t* result = sub_5032f0(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
