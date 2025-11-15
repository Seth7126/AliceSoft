// 函数: sub_5caff0
// 地址: 0x5caff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7405cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5cb600(arg1)
char var_2c
char* eax_3 = sub_404f20(&var_2c, arg2)

if (&arg1[4] != eax_3)
    int32_t eax_4 = *(arg1 + 0x18)
    
    if (eax_4 u>= 0x10)
        sub_403160(*(arg1 + 4), eax_4 + 1, 1)
    
    *(arg1 + 0x18) = 0xf
    bool cond:0_1 = *(arg1 + 0x18) u< 0x10
    *(arg1 + 0x14) = 0
    void* eax_6
    
    if (cond:0_1)
        eax_6 = &arg1[4]
    else
        eax_6 = *(arg1 + 4)
    
    *eax_6 = 0
    sub_4056a0(&arg1[4], eax_3)

int32_t var_8_1 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int64_t* eax_9 = sub_6e810c(8)
int64_t* var_30 = eax_9
*eax_9 = 0
*(eax_9 + 4) = 1
*eax_9 = &nutria::CZlibDecompressor::`vftable'{for `common::SuicideRefCounter<class IDecompressor>'}
__seterrormode(&arg1[0x54])
int32_t var_8_2 = 1
int32_t* ecx_2 = *(arg1 + 0x50)

if (ecx_2 != 0)
    *(arg1 + 0x50) = 0
    (*(*ecx_2 + 4))(eax_2)

int32_t var_8_3 = 0xffffffff
*(arg1 + 0x50) = eax_9
___crtSetUnhandledExceptionFilter(&arg1[0x54])
__Smtx_lock_shared(&arg1[0x54])
int32_t esi_3 = *(arg1 + 0x50)
__Smtx_unlock_shared(&arg1[0x54])
bool result

if (esi_3 != 0)
    result = sub_5cb150(arg1) != 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
