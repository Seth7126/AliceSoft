// 函数: sub_674920
// 地址: 0x674920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = 0

if (arg2 s<= 0)
    sub_401f60(arg1, &data_6da8c7)
else
    void* ebx_1 = data_75d4fc
    int32_t var_44_1 = arg2
    
    if (sub_4a55e0(ebx_1 + 0x178) == 0)
        sub_401f60(arg1, &data_6da8c7)
    else
        int32_t var_44_2 = arg2
        char eax_6 = sub_4a55e0(ebx_1 + 0x178)
        int32_t eax_7
        
        if (eax_6 != 0)
            eax_7.b = sub_4f0040(arg2, arg3) == 0x10
        
        if (eax_6 == 0 || eax_7.b == 0)
            sub_401f60(arg1, &data_6da8c6)
        else
            struct IString::common::CStringWrapper::VTable* const var_2c =
                &common::CStringWrapper::`vftable'{for `IString'}
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            char var_28 = 0
            int32_t var_4 = 0
            sub_4f89b0(eax_7, arg2, &var_2c, arg3)
            char* eax_8 = &var_28
            
            if (var_14_1 u>= 0x10)
                eax_8 = var_28.d
            
            sub_401f60(arg1, eax_8)
            var_2c = &common::CStringWrapper::`vftable'{for `IString'}
            
            if (var_14_1 u>= 0x10)
                j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return arg1
