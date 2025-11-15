// 函数: sub_64a140
// 地址: 0x64a140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &vsfile::CVSFile::`vftable'
sub_64a430(arg1)
int32_t result = arg1[0xc]
void* esi = &arg1[7]

if (result u>= 0x10)
    result = sub_403160(*esi, result + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
void* ecx = arg1[2]

if (ecx != 0)
    result = sub_403160(ecx, arg1[4] - ecx, 1)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
