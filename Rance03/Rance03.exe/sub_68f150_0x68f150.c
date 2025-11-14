// 函数: sub_68f150
// 地址: 0x68f150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1808
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t var_4 = 0
int32_t* var_24 = arg5
int32_t var_2c = 0
int32_t var_28 = arg7
sub_692620(arg7, arg2, arg3, arg4, nullptr, 0, nullptr)
int32_t var_4_1 = 0xffffffff
int32_t* esi_1 = arg5

if (esi_1 != 0)
    if (esi_1 != arg6)
        do
            (**esi_1)(0)
            esi_1 = &esi_1[0x11]
        while (esi_1 != arg6)
        
        esi_1 = arg5
    
    j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
