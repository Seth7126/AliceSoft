// 函数: sub_49bb10
// 地址: 0x49bb10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[1]
*arg1 = &mainwindow::CDebugPluginSetting::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)

int32_t result = arg1[0xa]
void* esi = &arg1[5]

if (result u>= 0x10)
    result = sub_403160(*esi, result + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
void* ecx_1 = arg1[2]

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (arg1[4] - ecx_1) s>> 2, 4)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
