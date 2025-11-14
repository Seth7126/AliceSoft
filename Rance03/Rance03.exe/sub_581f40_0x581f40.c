// 函数: sub_581f40
// 地址: 0x581f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7239
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_10_1 = 0
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t i_1 = arg2
int32_t var_4 = 0
int32_t var_10_2 = 1

if (i_1 s> 0)
    int32_t i
    
    do
        sub_4057c0(arg1, 0x6e546c, 1)
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
