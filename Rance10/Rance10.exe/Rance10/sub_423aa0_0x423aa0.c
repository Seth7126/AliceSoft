// 函数: sub_423aa0
// 地址: 0x423aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &advengine::CADVEngine::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
sub_427910(&arg1[5])
void* esi = &arg1[0x19]
sub_403490(esi, 0x75cd33, nullptr)
int32_t* ecx_2 = arg1[2]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[2] = 0

int32_t eax_4 = *(esi + 0x14)

if (eax_4 u>= 0x10)
    sub_403160(*esi, eax_4 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
char* result = sub_4277f0(&arg1[5])
fsbase->NtTib.ExceptionList = ExceptionList
return result
