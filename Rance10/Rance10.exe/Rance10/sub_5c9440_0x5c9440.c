// 函数: sub_5c9440
// 地址: 0x5c9440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740368
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

if (*(ecx + 0x168) == 0)
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
int32_t* ebx

if (sub_564660(ecx + 0x19c, &var_1c) == 0)
    ebx.b = 0
else
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    
    if (sub_58b7f0(&arg1[0x15b], &var_1c, &data_7e7128, 0, 0, esi_1) == 0)
        ebx.b = 0
    else
        ebx.b = 1

void* edx = var_1c

if (edx != 0)
    sub_403160(edx, (var_14 - edx) s>> 5, 0x20)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
