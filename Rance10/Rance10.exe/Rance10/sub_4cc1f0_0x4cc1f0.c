// 函数: sub_4cc1f0
// 地址: 0x4cc1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
sub_4cc350(arg1)
int32_t eax_3 = arg1[0x22]
void* esi = &arg1[0x1d]

if (eax_3 u>= 0x10)
    sub_403160(*esi, eax_3 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
int32_t* eax_5 = arg1[0x1b]
int32_t* var_24 = eax_5
sub_4572d0(&arg1[0x1b], &var_14, *eax_5)
sub_403160(arg1[0x1b], 1, 0x2c)
int32_t* eax_6 = arg1[0x19]
int32_t* var_24_1 = eax_6
sub_4572d0(&arg1[0x19], &var_14, *eax_6)
sub_403160(arg1[0x19], 1, 0x2c)
int32_t* eax_7 = arg1[0x17]
int32_t* var_24_2 = eax_7
sub_4572d0(&arg1[0x17], &var_14, *eax_7)
sub_403160(arg1[0x17], 1, 0x2c)
int32_t* eax_8 = arg1[0x15]
int32_t* var_24_3 = eax_8
sub_4572d0(&arg1[0x15], &var_14, *eax_8)
sub_403160(arg1[0x15], 1, 0x2c)
int32_t* eax_9 = arg1[0x13]
int32_t* var_24_4 = eax_9
sub_42e2e0(&arg1[0x13], &var_14, *eax_9)
sub_403160(arg1[0x13], 1, 0x18)
int32_t* eax_10 = arg1[0x11]
int32_t* var_24_5 = eax_10
sub_4572d0(&arg1[0x11], &var_14, *eax_10)
sub_403160(arg1[0x11], 1, 0x2c)
int32_t** eax_11 = arg1[0xf]
sub_4ceed0(&arg1[0xf], &var_14, *eax_11, eax_11)
int32_t result = sub_403160(arg1[0xf], 1, 0x48)
fsbase->NtTib.ExceptionList = ExceptionList
return result
