// 函数: sub_4733a0
// 地址: 0x4733a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9b26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CSoundFileAFA::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &kiwi::CSoundFileAFA::`vftable'
int32_t var_4 = 1
sub_418220(arg1[2][1].vFunc_0)
void* eax_4 = arg1[2]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[2]
*eax_5 = eax_5
void* eax_6 = arg1[2]
*(eax_6 + 8) = eax_6
arg1[3] = 0
int32_t* ecx_1 = arg1[1]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[1] = 0

int32_t** eax_8 = arg1[4]
sub_471480(&arg1[4], &var_10, *eax_8, eax_8)
j__free(arg1[4])
int32_t** eax_9 = arg1[2]
sub_417e10(&arg1[2], &var_10, *eax_9, eax_9)
int32_t result = j__free(arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
