// 函数: sub_44bb70
// 地址: 0x44bb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &cgmanager::CCGManager::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
sub_4063f0(&arg1[4])
int32_t* ecx_1 = arg1[0x13]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x13] = 0

int32_t* ecx_2 = arg1[0x12]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[0x12] = 0

arg1[0x11] = 0
sub_44d0a0(&arg1[0x18])
sub_44d0a0(&arg1[0x14])
int32_t result = sub_406310(&arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
