// 函数: sub_5cf030
// 地址: 0x5cf030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_740e0e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_60 = nullptr
SRWLOCK var_5c = 0
int32_t var_14_1 = 0
void* var_3c
int32_t* eax_4 = sub_4175e0(arg3, arg2, &var_3c, ".zlb")
var_14_1.b = 1
__Smtx_lock_shared(&var_5c)
__Smtx_unlock_shared(&var_5c)
bool cond:0 = sub_5cf400(arg1, eax_4, &var_60) == 0
var_14_1.b = 0
int32_t var_28

if (var_28 u>= 0x10)
    sub_403160(var_3c, var_28 + 1, 1)

char var_55_1

if (cond:0 == 0)
    __Smtx_lock_shared(&var_5c)
    bool var_55_2 = var_60 != 0
    __Smtx_unlock_shared(&var_5c)
    
    if (var_55_2 != 0)
        __Smtx_lock_shared(&var_5c)
        int32_t* esi_1 = var_60
        __Smtx_unlock_shared(&var_5c)
        
        if ((*(*esi_1 + 0x14))(eax_2) s> 0)
            __Smtx_lock_shared(&var_5c)
            int32_t* esi_2 = var_60
            __Smtx_unlock_shared(&var_5c)
            __Smtx_lock_shared(&var_5c)
            uint32_t var_64 = var_60
            __Smtx_unlock_shared(&var_5c)
            __Smtx_lock_shared(&var_5c)
            int32_t* edi_1 = var_60
            __Smtx_unlock_shared(&var_5c)
            int32_t esi_4 = (*(*esi_2 + 0x18))() + (*(*var_64 + 0x14))()
            int32_t eax_17 = (*(*edi_1 + 0x18))()
            struct fileimage::CFileImageAnalyser::VTable* const var_30 =
                &fileimage::CFileImageAnalyser::`vftable'
            int32_t var_40_1 = 0xf
            int32_t var_44_1 = 0
            char var_54 = 0
            var_14_1.b = 3
            
            if (sub_61ed80(&var_30, &var_54) == 0)
                var_55_1 = 0
            else if (sub_407560(&var_54, 0x76a6f0) == 0)
                var_55_1 = 0
            else
                uint32_t var_68
                
                if (sub_61ec90(&var_30, &var_64) == 0 || var_64 != 0)
                    var_55_1 = 0
                else if (sub_61ec90(&var_30, &var_68) == 0)
                    var_55_1 = 0
                else if (sub_61ec90(&var_30, &var_64) == 0)
                    var_55_1 = 0
                else
                    uint32_t eax_23 = var_64
                    
                    if (eax_23 s<= 0)
                        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** 
                            eax_24 = sub_6e810c(0x14)
                        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** 
                            var_6c_1 = eax_24
                        __builtin_memset(eax_24, 0, 0x14)
                        var_55_1 = 1
                        *arg3 = sub_42f870(eax_24)
                    else if (eax_23 + eax_17 u> esi_4)
                        var_55_1 = 0
                    else
                        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** 
                            eax_27 = sub_6e810c(0x14)
                        struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** 
                            var_6c_2 = eax_27
                        __builtin_memset(eax_27, 0, 0x14)
                        void var_84
                        int32_t* eax_29 = sub_432270(&var_84, sub_42f870(eax_27))
                        int32_t var_74 = 0
                        int32_t var_70_1 = 0
                        sub_4323a0(&var_74, eax_29)
                        var_14_1.b = 4
                        sub_431b10(&var_84)
                        int32_t* eax_30 = sub_431af0(&var_74)
                        char eax_32 = (*(*eax_30 + 8))(var_68)
                        char eax_45
                        
                        if (eax_32 != 0)
                            var_68 = sub_431af0(&var_74)
                            int32_t* eax_34 = sub_431af0(&var_74)
                            __Smtx_lock_shared(arg1 + 0x54)
                            int32_t* edi_3 = *(arg1 + 0x50)
                            int32_t eax_35 = __Smtx_unlock_shared(arg1 + 0x54)
                            eax_45 = (*(*edi_3 + 8))((*(*eax_34 + 0x18))((*(*var_68 + 0x14))(
                                sbb.d(eax_35, eax_35, eax_17 u< esi_4) & eax_17, var_64)))
                        
                        if (eax_32 == 0 || eax_45 == 0)
                            var_55_1 = 0
                            sub_431b10(&var_74)
                        else
                            var_55_1 = 1
                            *arg3 = sub_431ac0(&var_74)
                            sub_431b10(&var_74)
            
            sub_403320(&var_54)
        else
            var_55_1 = 0
    else
        var_55_1 = 1
else
    var_55_1 = 0

__seterrormode(&var_5c)
int32_t var_14_2 = 5
int32_t* ecx_30 = var_60

if (ecx_30 != 0)
    var_60 = nullptr
    (*(*ecx_30 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_5c)
int32_t result
result.b = var_55_1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
