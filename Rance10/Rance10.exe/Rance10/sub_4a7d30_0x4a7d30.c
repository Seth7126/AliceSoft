// 函数: sub_4a7d30
// 地址: 0x4a7d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct msgskip::CMsgSkip::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[1]
*arg1 = &msgskip::CMsgSkip::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)

int32_t** eax_4 = arg1[0x19]
sub_4a89e0(&arg1[0x19], &var_14, *eax_4, eax_4)
sub_403160(arg1[0x19], 1, 0x30)
int32_t eax_5 = arg1[0x18]
void* esi = &arg1[0x13]

if (eax_5 u>= 0x10)
    sub_403160(*esi, eax_5 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
void* esi_1 = &arg1[0xd]
int32_t eax_7 = *(esi_1 + 0x14)

if (eax_7 u>= 0x10)
    sub_403160(*esi_1, eax_7 + 1, 1)

*(esi_1 + 0x14) = 0xf
bool cond:1 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:1))
    esi_1 = *esi_1

*esi_1 = 0
void* esi_2 = &arg1[7]
int32_t result = *(esi_2 + 0x14)

if (result u>= 0x10)
    result = sub_403160(*esi_2, result + 1, 1)

*(esi_2 + 0x14) = 0xf
bool cond:2 = *(esi_2 + 0x14) u< 0x10
*(esi_2 + 0x10) = 0

if (not(cond:2))
    esi_2 = *esi_2

*esi_2 = 0
void* ecx_2 = arg1[4]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, arg1[6] - ecx_2, 1)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
