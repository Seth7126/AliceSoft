// 函数: sub_5cbc20
// 地址: 0x5cbc20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740721
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_94 = 0
int32_t esi_1 = arg4[1] - *arg4
int32_t ecx_2 = *(arg3 + 4) - *arg3
SRWLOCK var_80 = arg3
int32_t* result

if (esi_1 s>> 4 == ecx_2 s/ 0xc)
    struct fileimage::CFileImageMaker::VTable* const var_7c = &fileimage::CFileImageMaker::`vftable'
    void* var_78 = nullptr
    char* var_74_1 = nullptr
    int32_t var_70_1 = 0
    int32_t var_8_1 = 0
    int32_t var_18_1 = 0xf
    void* var_1c_1 = nullptr
    char var_2c = 0
    sub_403490(&var_2c, "POL", 3)
    var_8_1.b = 1
    char* esi_3 = &var_2c
    char* edx_2 = &var_2c
    
    if (var_18_1 u>= 0x10)
        esi_3 = var_2c.d
    
    if (var_18_1 u>= 0x10)
        edx_2 = var_2c.d
    
    int32_t var_a8_1 = 0.d
    sub_6ca200(&var_78, nullptr, edx_2, var_1c_1 + esi_3)
    bool var_5d = false
    sub_4263a0(&var_78, &var_5d)
    var_8_1.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    sub_6ca100(&var_7c, 4)
    sub_6ca100(&var_7c, 1)
    int32_t var_18_2 = 0xf
    void* var_1c_2 = nullptr
    var_2c = 0
    sub_403490(&var_2c, "material", 8)
    var_8_1.b = 2
    char* esi_4 = &var_2c
    char* edx_3 = &var_2c
    
    if (var_18_2 u>= 0x10)
        esi_4 = var_2c.d
    
    if (var_18_2 u>= 0x10)
        edx_3 = var_2c.d
    
    int32_t var_a8_3 = 0.d
    sub_6ca200(&var_78, var_74_1, edx_3, var_1c_2 + esi_4)
    var_5d = false
    sub_4263a0(&var_78, &var_5d)
    var_8_1.b = 0
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)
    
    sub_6ca100(&var_7c, 0)
    sub_6ca100(&var_7c, 0)
    sub_6ca100(&var_7c, 0)
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    sub_403490(&var_5c, "mainmesh", 8)
    var_8_1.b = 3
    int32_t var_a8_5 = 0.d
    void** var_20 = nullptr
    int32_t var_1c_3 = 0
    int32_t var_18_3 = 0
    char var_44
    sub_4be3b0(&var_20, &var_5c, &var_44)
    var_8_1.b = 5
    `eh vector vbase constructor iterator'(&var_5c, 0x18, 1, sub_403320)
    
    if (arg5 != 0)
        sub_403360(&var_44, "collision")
        var_8_1.b = 6
        sub_431bd0(&var_20, &var_44)
        var_8_1.b = 5
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
    
    void** esi_5 = var_20
    void* eax_19 = sub_6ca100(&var_7c, (var_1c_3 - esi_5) s/ 0x18)
    
    if (esi_5 != var_1c_3)
        int32_t* ebx_1 = var_80
        
        do
            int32_t* var_a8_8 = arg4
            eax_19 = sub_5cb7b0(eax_19, esi_5, &var_7c, ebx_1)
            esi_5 = &esi_5[6]
        while (esi_5 != var_1c_3)
    
    sub_6ca100(&var_7c, 0)
    struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CPolyData>::VTable
        ** eax_20 = sub_6e810c(0xe4)
    struct common::NotifyRefCounter<class common::detail::EmptyClass>::sealengine::CResourceCacheObject<class sealengine::CPolyData>::VTable
        ** var_90_1 = eax_20
    var_8_1.b = 7
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_403490(&var_44, 0x75d59a, nullptr)
    var_8_1.b = 8
    int32_t var_94_1 = 2
    int32_t* var_84
    int32_t* eax_23 = sub_5d2350(&var_84, sub_5b7820(eax_20, &var_44, *(arg1 + 0x58), arg1 + 0x64))
    void* var_68 = nullptr
    SRWLOCK var_64
    __builtin_memset(&var_64, 0, 4)
    sub_5688b0(&var_68, eax_23)
    int32_t var_8_2 = 0xa
    __seterrormode(&var_80)
    var_8_2.b = 0xb
    int32_t* ecx_30 = var_84
    
    if (ecx_30 != 0)
        var_84 = nullptr
        int32_t edx_8 = ecx_30[1]
        ecx_30[1] -= 1
        (**ecx_30)(edx_8 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_80)
    var_8_2.b = 0xc
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    int32_t var_48_2 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0
    sub_403490(&var_5c, 0x75d59b, nullptr)
    var_8_2.b = 0xd
    __Smtx_lock_shared(arg1 + 0x20)
    int32_t* edi_2 = *(arg1 + 0x1c)
    __Smtx_unlock_shared(arg1 + 0x20)
    void* ebx_4 = var_74_1 - var_78
    __Smtx_lock_shared(&var_64)
    void* esi_8 = var_68
    __Smtx_unlock_shared(&var_64)
    void* ebx_5 = var_78
    var_5d = sub_5b7c40(esi_8, ebx_5, ebx_4, nullptr, &var_5c, arg1, edi_2, *(arg1 + 0x24), 0) == 0
    
    if (var_48_2 u>= 0x10)
        sub_403160(var_5c.d, var_48_2 + 1, 1)
    
    bool cond:5_1 = var_5d == 0
    *arg2 = 0
    arg2[1] = 0
    
    if (cond:5_1)
        sub_5688b0(arg2, &var_68)
        __seterrormode(&var_64)
        var_8_2.b = 0xf
    else
        __seterrormode(&var_64)
        var_8_2.b = 0xe
    
    void* edi_3 = var_68
    
    if (edi_3 != 0)
        var_68 = nullptr
        int32_t ecx_35 = *(edi_3 + 4)
        *(edi_3 + 4) -= 1
        (**edi_3)(ecx_35 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_64)
    sub_417070(&var_20)
    
    if (ebx_5 != 0)
        sub_403160(ebx_5, var_70_1 - ebx_5, 1)
    
    result = arg2
else
    *arg2 = 0
    result = arg2
    arg2[1] = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
