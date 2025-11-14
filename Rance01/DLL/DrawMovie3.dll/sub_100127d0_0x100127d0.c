// 函数: sub_100127d0
// 地址: 0x100127d0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100195fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
int32_t var_4 = 0
int32_t result = sub_10012680(arg1)
void* i = arg1[5]
int32_t var_4_1 = 0xffffffff

while (i != 0)
    void* i_1 = i
    i = *(i + 4)
    void* i_2 = i_1
    result = sub_10001d52()

fsbase->NtTib.ExceptionList = ExceptionList
return result
