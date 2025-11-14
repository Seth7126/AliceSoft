// 函数: sub_5ffaf0
// 地址: 0x5ffaf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc67b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct crayfish::CLogList::VTable** var_10 = arg1
*arg1 = &crayfish::CLogList::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_4 = 0
arg1[4] = 0
struct crayfish::CLogLine::VTable** eax_3 = sub_69adc6(0x1c)

if (eax_3 == 0)
    eax_3 = nullptr
else
    *eax_3 = &crayfish::CLogLine::`vftable'
    eax_3[6] = 0xf
    eax_3[5] = 0
    eax_3[1].b = 0

int32_t var_14 = eax_3
sub_412de0(&arg1[1], &var_14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
