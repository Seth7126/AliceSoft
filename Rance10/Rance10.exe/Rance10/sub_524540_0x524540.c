// 函数: sub_524540
// 地址: 0x524540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0xd]
*arg1 = &partsengine::CActivityEngine::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0xd] = 0

int32_t eax_4 = arg1[0xc]
void* edi = &arg1[7]

if (eax_4 u>= 0x10)
    sub_403160(*edi, eax_4 + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
int32_t eax_6 = arg1[6]

if (eax_6 u>= 0x10)
    eax_6 = sub_403160(arg1[1], eax_6 + 1, 1)

arg1[6] = 0xf
bool cond:1 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:1)
    arg1[1].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

char* eax_8 = arg1[1]
*eax_8 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
