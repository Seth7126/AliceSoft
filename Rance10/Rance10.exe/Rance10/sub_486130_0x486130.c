// 函数: sub_486130
// 地址: 0x486130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72edc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* var_64 = esi
int32_t* result = (*(*(arg2 + 4) + 0x28))("SoundInfo")

if (result != 0)
    struct IString::common::CStringWrapper::VTable* const var_30 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c_1 = 0
    int32_t var_8_1 = 0
    int32_t eax_5 = (*(*result + 8))(eax_2)
    int32_t ebx_1 = 0
    int32_t var_68_1 = 0
    
    if (eax_5 s> 0)
        do
            (*(*result + 0x18))(&var_30, ebx_1, 0, 0x75ce96)
            char* edx_1 = var_30->__offset(0x0).d()
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            void* ecx_4
            
            if (*edx_1 != 0)
                char* ecx_5 = edx_1
                char* eax_8
                
                do
                    eax_8.b = *ecx_5
                    ecx_5 = &ecx_5[1]
                while (eax_8.b != 0)
                ecx_4 = ecx_5 - &ecx_5[1]
                esi = var_64
            else
                ecx_4 = nullptr
            
            sub_403490(&var_48, edx_1, ecx_4)
            var_8_1.b = 1
            char var_60
            int32_t* eax_9 = sub_4051e0(&var_60, &var_48)
            var_8_1.b = 2
            int32_t* ecx_9 = var_64
            void** esi_2 = sub_432330(&esi[2], eax_9)
            
            if (esi_2 == ecx_9[2])
            label_48623d:
                int32_t* var_88_4 = ecx_9
                int32_t* var_6c = eax_9
                int32_t** var_8c_3 = &var_6c
                int32_t* eax_13 = sub_486330(ecx_9)
                void** var_70
                sub_4846c0(&var_64[2], &var_70, esi_2, &eax_13[4], eax_13)
                esi_2 = var_70
            else
                char eax_12
                eax_12, ecx_9 = sub_412ca0(eax_9, &esi_2[4])
                
                if (eax_12 != 0)
                    goto label_48623d
            
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                sub_403160(var_60.d, var_4c + 1, 1)
            
            var_8_1.b = 0
            var_4c = 0xf
            int32_t var_50_1 = 0
            var_60 = 0
            
            if (var_34_1 u>= 0x10)
                sub_403160(var_48.d, var_34_1 + 1, 1)
            
            esi_2[0xc] = (*(*result + 0x10))(var_68_1, 1, 0)
            esi_2[0xa] = (*(*result + 0x10))(var_68_1, 2, 0)
            ebx_1 = var_68_1 + 1
            esi_2[0xb] = (*(*result + 0x10))(var_68_1, 3, 0)
            esi = var_64
            var_68_1 = ebx_1
        while (ebx_1 s< eax_5)
    
    var_30 = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c_1.d, var_18_1 + 1, 1)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
