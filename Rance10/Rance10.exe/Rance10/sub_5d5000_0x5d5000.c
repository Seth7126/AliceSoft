// 函数: sub_5d5000
// 地址: 0x5d5000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg3
int32_t var_50 = 1
char var_30 = 0x2e
void* eax_4 = sub_42cb30(ebx, &var_30, arg1)
void* var_2c
sub_405480(ebx, &var_2c, 0, eax_4)
int32_t var_8_1 = 0
void** var_34
sub_5d4880(arg1 + 0x24, &var_34, &var_2c)
void** esi = var_34

if (esi != *(arg1 + 0x24))
    __Smtx_lock_shared(&esi[0xb])
    int32_t esi_1 = esi[0xa]
    __Smtx_unlock_shared(&esi[0xb])
    *arg2 = esi_1
    
    if (eax_4 != 0xffffffff)
        sub_403750(ebx, 0, eax_4 + 1)
    else
        bool cond:0_1 = ebx[5] u< 0x10
        ebx[4] = 0
        
        if (not(cond:0_1))
            ebx = *ebx
        
        *ebx = nullptr
    
    ebx.b = 1
else
    ebx.b = 0

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
