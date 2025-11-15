// 函数: sub_63d620
// 地址: 0x63d620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bd88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) == 0xffffffff)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void* eax_4 = *(arg1 + 0x10)

if (eax_4 == 0)
    void** eax_5 = arg2
    bool cond:0 = eax_5[5] u< 0x10
    eax_5[4] = 0
    
    if (not(cond:0))
        eax_5 = *eax_5
    
    *eax_5 = nullptr
    eax_5.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

uint8_t* var_20
sub_431b80(&var_20, eax_4)
int32_t var_8_1 = 0
uint8_t* esi = var_20
int32_t var_1c
int32_t ebx

if (sub_67f160(arg1 + 4, esi, var_1c - esi) != 0)
    char var_11 = 0
    sub_4263a0(&var_20, &var_11)
    esi = var_20
    sub_403450(esi)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_18

if (esi != 0)
    sub_403160(esi, var_18 - esi, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
