// 函数: sub_576700
// 地址: 0x576700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

for (int32_t* i = arg1[3]; i != arg1[4]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

arg1[4] = arg1[3]
struct fileimage::CFileImageAnalyser::VTable* const var_18 =
    &fileimage::CFileImageAnalyser::`vftable'
int32_t var_14 = arg2
int32_t var_10 = arg3 + arg2
int32_t var_4 = 0

if (sub_576810(arg1, &var_18) != 0)
    uint32_t var_28_1 = &var_18
    
    if (arg1[2] s>= 4)
        if (sub_576cb0(arg1, var_28_1) != 0)
        label_5767b8:
            
            if (sub_577030(arg1, &var_18) != 0)
                char eax_7 = sub_578340(arg1, &var_18)
                
                if (eax_7 != 0)
                    if (arg1[9] != arg1[0xa])
                        eax_7 = sub_578800(arg1)
                    
                    if (arg1[9] == arg1[0xa] || eax_7 != 0)
                        sub_578770(arg1)
                        void* result
                        result.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
    else if (sub_5768e0(arg1, var_28_1) != 0)
        goto label_5767b8

fsbase->NtTib.ExceptionList = ExceptionList
return 0
