// 函数: sub_5acdd0
// 地址: 0x5acdd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_2 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_57c3a0(&result_2)
int32_t var_8_1 = 0
int32_t* result_1 = result_2
void* result
void** ecx_2
result, ecx_2 = sub_57ada0(result_1, arg2, arg3, arg4, arg1[0x160], arg1[0x161])
int32_t ebx

if (result.b != 0)
    if (arg1[0x15b] == arg1[0x15c])
        void** var_28_1 = ecx_2
        sub_57c530(&arg1[0x15a])
    
    ecx_2 = arg1[0x15b]
    
    if (ecx_2 != 0)
        result = result_1
        result_1 = nullptr
        *ecx_2 = result
    
    arg1[0x15b] += 4
    ebx.b = 1
else
    ebx.b = 0

if (result_1 != 0)
    void** var_28_2 = ecx_2
    sub_57c340(result_1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
