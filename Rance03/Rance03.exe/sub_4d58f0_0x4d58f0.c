// 函数: sub_4d58f0
// 地址: 0x4d58f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbc98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
*(arg1 + 0x10) = 0
int32_t var_4 = 0
int32_t* ecx = *(arg6 + 0x10)

if (ecx != 0)
    void* const var_1c_1
    
    var_1c_1 = ecx != arg6 ? nullptr : arg1
    
    *(arg1 + 0x10) = (**ecx)(var_1c_1)
else
    *(arg1 + 0x10) = ecx

*(arg1 + 0x18) = *arg5
*(arg1 + 0x20) = *arg4
*(arg1 + 0x28) = *arg3
*(arg1 + 0x30) = *arg2
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
