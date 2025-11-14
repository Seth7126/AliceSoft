// 函数: sub_5c2400
// 地址: 0x5c2400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c9a6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_18 = arg3
__chkstk(0x4024)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
int32_t arg_4010
fsbase->NtTib.ExceptionList = &arg_4010
int32_t* arg_4
int32_t* edi = arg_4
arg_4.b = 0
void arg_10
_vsprintf_s(&arg_4, 0x4000, arg5, &arg_10)
int32_t** var_3c = &arg_4
int32_t var_40 = arg4
int32_t* ecx
int32_t edx
ecx, edx = sub_4691f0(&ExceptionList, 0x6e68bc)
int32_t arg_4018 = 0
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = &ExceptionList

if (__return_addr u>= 0x10)
    ExceptionList_1 = ExceptionList

int32_t ebx
ebx.b = sub_5c24e0(ExceptionList_1, edx, ecx, edi, ExceptionList_1)

if (__return_addr u>= 0x10)
    j__free(ExceptionList)

fsbase->NtTib.ExceptionList = arg_4010
sub_69a5bc(eax_2 ^ &var_18)
return ebx.b
