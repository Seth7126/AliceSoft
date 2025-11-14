// 函数: sub_1000c060
// 地址: 0x1000c060
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019043
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = &arg1[0x31]
EnterCriticalSection(&arg1[0x31])
void* eax_3 = arg1[0x14]
int32_t var_4 = 0
int32_t result
int32_t result_1

if (eax_3 == 0)
    int32_t eax_7 = (*(*arg1 + 0x1c))(0)
    int32_t var_18
    struct IMediaSeeking::CPosPassThru::VTable** eax_9
    
    if (eax_7 != 0)
        var_18 = 0
        void* eax_8 = sub_10001dc9(0x50)
        void* var_10_1 = eax_8
        var_4.b = 1
        
        if (eax_8 == 0)
            eax_9 = nullptr
        else
            eax_9 = sub_10012280(eax_8, nullptr, arg1[1], &var_18, eax_7 + 0xc)
        
        var_4.b = 0
        arg1[0x14] = eax_9
    
    if (eax_7 == 0 || eax_9 == 0)
        LeaveCriticalSection(&arg1[0x31])
        result = 0x8007000e
    else if (var_18 s>= 0)
        result_1 = (*(*arg1 + 0x24))(arg2, arg3)
        LeaveCriticalSection(&arg1[0x31])
        result = result_1
    else
        eax_9[2]->vFunc_3(1)
        arg1[0x14] = 0
        LeaveCriticalSection(&arg1[0x31])
        result = 0x80004002
else
    result_1 = (**(eax_3 + 8))(eax_3 + 8, arg2, arg3)
    LeaveCriticalSection(&arg1[0x31])
    result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
return result
