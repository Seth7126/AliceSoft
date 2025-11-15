// 函数: sub_4f4040
// 地址: 0x4f4040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIControllerStack::`vftable'{for `partsengine::IMakeGUIComponent'}
sub_4f40f0(arg1)
int32_t eax_3 = arg1[0x20]
void* esi = &arg1[0x1b]

if (eax_3 u>= 0x10)
    sub_403160(*esi, eax_3 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
void* ecx = arg1[0x17]

if (ecx != 0)
    sub_403160(ecx, (arg1[0x19] - ecx) s>> 2, 4)
    arg1[0x17] = 0
    arg1[0x18] = 0
    arg1[0x19] = 0

int32_t result = sub_4f1360(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
