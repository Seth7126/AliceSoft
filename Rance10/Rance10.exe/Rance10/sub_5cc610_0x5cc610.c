// 函数: sub_5cc610
// 地址: 0x5cc610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740837
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = 0
void* var_30
sub_5ccb40(&ExceptionList, *arg1, &var_30, arg1[1])
int32_t var_8_1 = 0
int128_t var_4c
__builtin_memset(&var_4c, 0, 0x14)
var_8_1.b = 1
char eax_4 = sub_5ce990(arg1[2], &var_30, &var_4c)
int32_t esi_1

if (eax_4 != 0)
    __Smtx_lock_shared(&var_4c:4)
    esi_1 = var_4c.d
    __Smtx_unlock_shared(&var_4c:4)

if (eax_4 != 0 && (esi_1 != 0 || var_4c:8.d != var_4c:0xc.d))
    struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CMotionData>::VTable
        ** eax_6 = sub_6e810c(0x78)
    struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CMotionData>::VTable
        ** var_58_1 = eax_6
    var_8_1.b = 2
    void var_60
    int32_t* eax_10 = sub_5d2350(&var_60, sub_590020(eax_6, arg1[3], &arg1[2][0x1f]))
    int32_t* var_38 = nullptr
    SRWLOCK var_34
    __builtin_memset(&var_34, 0, 4)
    sub_5688b0(&var_38, eax_10)
    var_8_1.b = 3
    sub_568430(&var_60)
    __Smtx_lock_shared(&var_34)
    void*** ebx
    ebx.b = var_38 != 0
    __Smtx_unlock_shared(&var_34)
    
    if (ebx.b != 0)
        __Smtx_lock_shared(&var_34)
        int32_t* esi_2 = var_38
        __Smtx_unlock_shared(&var_34)
        void* ecx_10 = arg1[2]
        int32_t* eax_11 = sub_5d05c0(ecx_10, *arg1)
        void* var_78_2 = ecx_10
        void* eax_12 = sub_5ca940(&var_4c)
        char eax_14 = sub_590390(esi_2, sub_5ca8f0(&var_4c), eax_12, eax_11)
        *arg2 = 0
        arg2[1] = 0
        
        if (eax_14 != 0)
            sub_5688b0(arg2, &var_38)
    else
        *arg2 = 0
        arg2[1] = 0
    
    sub_568430(&var_38)
    sub_5cc410(&var_4c)
    sub_403320(&var_30)
else
    *arg2 = 0
    arg2[1] = 0
    sub_5cc410(&var_4c)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
