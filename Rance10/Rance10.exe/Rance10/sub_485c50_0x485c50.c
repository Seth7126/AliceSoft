// 函数: sub_485c50
// 地址: 0x485c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CSoundFileAFA::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSoundFileAFA::`vftable'
int32_t var_8_1 = 0
sub_4840c0(arg1[2][1].vFunc_0)
void* eax_4 = arg1[2]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[2]
*eax_5 = eax_5
void* eax_6 = arg1[2]
int32_t var_8_2 = 0xffffffff
*(eax_6 + 8) = eax_6
arg1[3] = 0
int32_t* ecx_1 = arg1[1]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[1] = 0

int32_t* eax_8 = arg1[2]
int32_t* var_24_1 = eax_8
sub_484130(&arg1[2], &var_14, *eax_8)
int32_t result = sub_403160(arg1[2], 1, 0x34)
fsbase->NtTib.ExceptionList = ExceptionList
return result
