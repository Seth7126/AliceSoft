// 函数: sub_463eb0
// 地址: 0x463eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c416
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_30
char* eax_3 = sub_45ef30(arg1 + 0x50, &var_30)

if (arg2 != eax_3)
    int32_t eax_4 = *(arg2 + 0x14)
    
    if (eax_4 u>= 0x10)
        sub_403160(*arg2, eax_4 + 1, 1)
    
    *(arg2 + 0x14) = 0xf
    bool cond:1_1 = *(arg2 + 0x14) u< 0x10
    *(arg2 + 0x10) = 0
    char* eax_6
    
    if (cond:1_1)
        eax_6 = arg2
    else
        eax_6 = *arg2
    
    *eax_6 = 0
    sub_4056a0(arg2, eax_3)

char* result_1
char* result = result_1

if (result u>= 0x10)
    result = sub_403160(var_30, &result[1], 1)

bool cond:0 = *(arg1 + 0x64) u< 0x10
*(arg1 + 0x60) = 0

if (cond:0)
    *(arg1 + 0x50) = nullptr
else
    result = *(arg1 + 0x50)
    *result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
