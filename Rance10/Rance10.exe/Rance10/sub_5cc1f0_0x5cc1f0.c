// 函数: sub_5cc1f0
// 地址: 0x5cc1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7407aa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void*** var_50 = arg1
int32_t var_54 = 0
void* var_30
sub_5ce890(&var_30, *arg1)
int32_t var_8_1 = 0
int128_t var_4c
__builtin_memset(&var_4c, 0, 0x14)
var_8_1.b = 1
int32_t var_1c

if (sub_5ce990(arg1[1], &var_30, &var_4c) != 0)
    __Smtx_lock_shared(&var_4c:4)
    int32_t esi_1 = var_4c.d
    __Smtx_unlock_shared(&var_4c:4)
    
    if (esi_1 != 0 || var_4c:8.d != var_4c:0xc.d)
        struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CPolyData>::VTable
            ** eax_7 = sub_6e810c(0xe4)
        struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CPolyData>::VTable
            ** var_58_1 = eax_7
        var_8_1.b = 2
        void* edx_1 = arg1[1]
        void var_60
        int32_t* eax_9 =
            sub_5d2350(&var_60, sub_5b7820(eax_7, *arg1, *(edx_1 + 0x58), edx_1 + 0x64))
        void* var_38 = nullptr
        SRWLOCK var_34
        __builtin_memset(&var_34, 0, 4)
        sub_5688b0(&var_38, eax_9)
        var_8_1.b = 3
        sub_568430(&var_60)
        void* edi_1 = arg1[1]
        __Smtx_lock_shared(edi_1 + 0x20)
        int32_t* edi_2 = *(edi_1 + 0x1c)
        __Smtx_unlock_shared(edi_1 + 0x20)
        __Smtx_lock_shared(&var_34)
        void* esi_3 = var_38
        __Smtx_unlock_shared(&var_34)
        void* ecx_11 = var_50[1]
        char eax_11 = *var_50[2]
        int32_t var_78_4 = *(ecx_11 + 0x24)
        void* var_88_1 = ecx_11
        int32_t* eax_12 = sub_5d05c0(ecx_11, *var_50)
        int32_t eax_13
        int32_t ecx_13
        eax_13, ecx_13 = sub_5ca940(&var_4c)
        int32_t var_90_1 = ecx_13
        bool eax_15 = sub_5b7c40(esi_3, sub_5ca8f0(&var_4c), eax_13, eax_12, &var_30, ecx_11, 
            edi_2, var_78_4, eax_11)
        *arg2 = 0
        arg2[1] = 0
        
        if (eax_15 != 0)
            sub_5688b0(arg2, &var_38)
        
        sub_568430(&var_38)
        sub_5cc410(&var_4c)
        sub_403320(&var_30)
    else
        *arg2 = esi_1
        arg2[1] = esi_1
        sub_5cc410(&var_4c)
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
else
    *arg2 = 0
    arg2[1] = 0
    sub_5cc410(&var_4c)
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
