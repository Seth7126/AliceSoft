// 函数: sub_46c6c0
// 地址: 0x46c6c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d310
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg1 + 0xc)
char* ecx = *(arg1 + 4)
int32_t var_4c = 0
char var_30

if (edx u<= ecx || *ecx != 0x3a)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_64_5 = sub_403490(&var_30, 0x75ce36, nullptr)
    int32_t var_8_7 = 0
    sub_471d90(arg2, &var_30, 0x1f)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
else
    *(arg1 + 4) = &ecx[1]
    int32_t ecx_3
    
    if (edx u<= &ecx[1] || ecx[1] != 0x3a)
        ecx_3 = sub_403360(&var_30, 0x75ce2e)
        int32_t var_8_6 = 1
    label_46c741:
        int32_t var_64 = ecx_3
        sub_471d90(arg2, &var_30, 0x1f)
        sub_403320(&var_30)
    else
        *(arg1 + 4) = &ecx[2]
        
        if (edx u<= &ecx[2])
            ecx_3 = sub_403360(&var_30, 0x75ce27)
            int32_t var_8_1 = 2
            goto label_46c741
        
        int32_t ecx_7 = sub_46c860(arg1)
        int32_t eax_3 = *(arg1 + 4)
        
        if (&ecx[2] != eax_3)
            int32_t var_64_3 = ecx_7
            void var_48
            char* eax_4
            int32_t ecx_14
            eax_4, ecx_14 = sub_409130(&var_48, &ecx[2], eax_3)
            int32_t var_64_4 = ecx_14
            int32_t var_8_5 = 5
            sub_471d90(arg2, eax_4, 0x1f)
            sub_403320(&var_48)
        else
            sub_403360(&var_30, 0x75f688)
            int32_t var_8_2 = 3
            sub_45eb40(*(arg1 + 0x2c), &var_30)
            int32_t var_8_3 = 0xffffffff
            sub_403320(&var_30)
            int32_t var_64_2 = sub_403360(&var_30, 0x75ce2f)
            int32_t var_8_4 = 4
            sub_471d90(arg2, &var_30, 0)
            sub_403320(&var_30)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
