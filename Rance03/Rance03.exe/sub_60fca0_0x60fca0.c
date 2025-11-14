// 函数: sub_60fca0
// 地址: 0x60fca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6cd370
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t ecx_2 = (ebx - *arg1) s>> 3

if (ecx_2 u> 5)
    result = ebx + ((5 - ecx_2) << 3)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (result != ebx)
        do
            (*result_1)->Next(0)
            result_1 = &result_1[2]
        while (result_1 != ebx)
    
    arg1[1] = result
else if (ecx_2 u< 5)
    sub_60fe20(arg1, 5 - ecx_2)
    int32_t var_8_1 = 0
    struct graphengined3d11::CSamplerState::VTable** ecx_7 = arg1[1]
    int32_t* var_2c_2 = arg1
    sub_60ff90(ecx_7, 5 - ((ecx_7 - *arg1) s>> 3))
    int32_t ecx_8 = arg1[1]
    result = ecx_8 + ((5 - ((ecx_8 - *arg1) s>> 3)) << 3)
    arg1[1] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
