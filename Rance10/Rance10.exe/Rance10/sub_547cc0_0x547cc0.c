// 函数: sub_547cc0
// 地址: 0x547cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_3 = arg2
int32_t* result_7

if (result_3[5] u< 0x10)
    result_7 = result_3
else
    result_7 = *result_3

int32_t* var_48

if (*(arg1 + 0x1c) u< 0x10)
    var_48 = arg1 + 8
else
    var_48 = *(arg1 + 8)

struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** result_2 =
    *(arg1 + 0x18)
struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** result_8 =
    result_3[4]
struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** result_5 =
    result_8
struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** result_1 =
    result_2

if (result_2 u< result_8)
    result_5 = result_2

int32_t eax_4 = sub_406ac0(result_5, result_7, var_48, result_5)
struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** result

if (eax_4 == 0)
    result = result_1

if (eax_4 != 0 || result u< result_8 || result u> result_8 || *(arg1 + 0x20) != 0)
    int32_t* edx = &data_7fd2bc
    
    if (data_7fd2d0 u>= 0x10)
        edx = data_7fd2bc
    
    int32_t* result_4
    
    if (result_3[5] u< 0x10)
        result_4 = result_3
    else
        result_4 = *result_3
    
    struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** 
        result_9 = data_7fd2cc
    
    if (result_8 u< result_9)
        result_9 = result_8
    
    int32_t eax_6 = sub_406ac0(result_9, edx, result_4, result_9)
    
    if (eax_6 == 0)
        result = data_7fd2cc
    
    if (eax_6 == 0 && result_8 u>= result && result_8 u<= result)
        int32_t* ecx_3 = *(arg1 + 0x24)
        
        if (ecx_3 != 0)
            int32_t esi = ecx_3[1]
            ecx_3[1] -= 1
            (**ecx_3)(esi - 1)
            *(arg1 + 0x24) = 0
            *(arg1 + 0x38) = 1
        
        goto label_547e4c
    
    if (sub_5485f0(result_3) == 0)
        char* result_6
        
        if (result_3[5] u< 0x10)
            result_6 = result_3
        else
            result_6 = *result_3
        
        if (sub_44c4e0(result_6) != 0)
            if (sub_54da20(arg1 + 0x24, result_3).b != 0)
                goto label_547e4c
            
            result.b = 0
        else
            if (result_3[5] u>= 0x10)
                result_3 = *result_3
            
            result_1 = result_3
            void var_2c
            sub_403360(&var_2c, 0x766fb0)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            void var_44
            sub_45aae0(sub_409240(&result_1, &var_2c, &var_44, &result_1))
            sub_403320(&var_44)
            sub_403320(&var_2c)
            result.b = 0
    else
        result = sub_5486a0(arg1, result_3, nullptr)
        
        if (result.b != 0)
        label_547e4c:
            
            if (arg1 + 8 != result_3)
                sub_403590(arg1 + 8, result_3, 0, 0xffffffff)
            
            *(arg1 + 0x20) = 0
            *(arg1 + 0xac) = 1
            result.b = 1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
