// 函数: sub_100018e0
// 地址: 0x100018e0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_FullAliasWait@_TaskCollection@details@Concurrency@@AAEXPAV123@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
void* var_18 = arg1
void* esi_1 = arg2 | 0xf

if (esi_1 u<= 0xfffffffe)
    int32_t ebx_1 = *(arg1 + 0x18)
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (esi_1 u/ 3 u< ecx_1 && ebx_1 u<= 0xfffffffe - ecx_1)
        esi_1 = ecx_1 + ebx_1
else
    esi_1 = arg2

void* ecx_2 = esi_1 + 1
int32_t var_8_1 = 0

if (ecx_2 u<= 0)
    ecx_2 = nullptr
else if (divu.dp.d(0:0xffffffff, ecx_2) u< 1)
    int32_t var_1c = 0
    struct std::exception::VTable* var_2c
    sub_10001e9c(&var_2c, &var_1c)
    var_2c = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_1000272b(&var_2c, 0x1001eed8)
    noreturn

void* result_2 = sub_10001dc9(ecx_2)

if (arg3 u> 0)
    void* eax_8
    
    if (*(arg1 + 0x18) u< 0x10)
        eax_8 = arg1 + 4
    else
        eax_8 = *(arg1 + 4)
    
    sub_1000211a(result_2, esi_1 + 1, eax_8, arg3)

if (*(arg1 + 0x18) u>= 0x10)
    int32_t var_40_3 = *(arg1 + 4)
    sub_10001d52()

char* result_1 = result_2
char* result = arg1 + 4
*result = 0
*result = result_1
*(arg1 + 0x18) = esi_1
*(arg1 + 0x14) = arg3

if (esi_1 u>= 0x10)
    result = result_1

*(result + arg3) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
