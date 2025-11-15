// 函数: sub_44eb70
// 地址: 0x44eb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b021
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_429d40(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    result[8] = 0
    result[9] = 0
    result[9] = 0xf
    bool cond:0_1 = result[9] u< 0x10
    result[8] = 0
    void* eax_3
    
    if (cond:0_1)
        eax_3 = &result[4]
    else
        eax_3 = result[4]
    
    *eax_3 = 0
    sub_403590(&result[4], arg1, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return result
