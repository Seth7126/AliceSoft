// 函数: sub_4d5b90
// 地址: 0x4d5b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf698
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10_1 = arg1
*(arg1 + 0x10) = 0
int32_t var_4 = 0
int32_t* ecx = *(arg2 + 0x10)

if (ecx != 0)
    void* const var_20_1
    
    var_20_1 = ecx != arg2 ? nullptr : arg1
    
    *(arg1 + 0x10) = (**ecx)(var_20_1)
else
    *(arg1 + 0x10) = ecx

*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x30) = *(arg2 + 0x30)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
