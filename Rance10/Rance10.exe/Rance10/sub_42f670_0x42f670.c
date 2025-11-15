// 函数: sub_42f670
// 地址: 0x42f670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a11c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = arg2
struct storage::CStorageFile::VTable* const var_40 = &storage::CStorageFile::`vftable'
struct filesystem::CFile::VTable* const var_3c = &filesystem::CFile::`vftable'
HANDLE var_38 = 0xffffffff
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_8_1 = 0
char eax_4 = sub_5f21b0(&var_40, &arg1[4])
int32_t eax_5
int32_t lDistanceToMove

if (eax_4 != 0)
    if (arg2 != 0)
        void* ecx_1 = &var_18
        
        if (arg1[1] u< arg2)
            ecx_1 = &arg1[1]
        
        eax_5 = *ecx_1
    else
        eax_5 = arg1[1]
    
    lDistanceToMove = *arg1

int32_t result
HANDLE edi_1

if (eax_4 == 0 || var_30 u< eax_5 + lDistanceToMove)
    edi_1 = var_38
    result = 0
else
    edi_1 = var_38
    
    if (edi_1 != 0xffffffff && lDistanceToMove u< var_30)
        SetFilePointer(edi_1, lDistanceToMove, nullptr, FILE_BEGIN)
        int32_t lDistanceToMove_1 = lDistanceToMove
    
    struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** eax_8 =
        sub_6e810c(0x14)
    struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** var_1c_1 = eax_8
    __builtin_memset(eax_8, 0, 0x14)
    eax_8[1] = 1
    *eax_8 = &common::CIMemory::`vftable'{for `common::SuicideRefCounter<class IMemory>'}
    eax_8[2] = 0
    eax_8[3] = 0
    eax_8[4] = 0
    int32_t* var_2c
    int32_t* eax_9 = sub_432270(&var_2c, eax_8)
    int32_t* var_24 = nullptr
    SRWLOCK var_20
    __builtin_memset(&var_20, 0, 4)
    sub_4323a0(&var_24, eax_9)
    SRWLOCK var_28
    __seterrormode(&var_28)
    var_8_1.b = 2
    int32_t* ecx_5 = var_2c
    
    if (ecx_5 != 0)
        var_2c = nullptr
        (*(*ecx_5 + 4))(eax_2)
    
    var_8_1.b = 1
    ___crtSetUnhandledExceptionFilter(&var_28)
    __Smtx_lock_shared(&var_20)
    int32_t* esi_1 = var_24
    __Smtx_unlock_shared(&var_20)
    
    if ((*(*esi_1 + 8))(eax_5) == 0)
        result = 0
    else
        __Smtx_lock_shared(&var_20)
        int32_t* esi_2 = var_24
        __Smtx_unlock_shared(&var_20)
        
        if (sub_5f2320(&var_40, (*(*esi_2 + 0x18))(eax_5, eax_2)) == 0)
            edi_1 = var_38
            result = 0
        else
            edi_1 = var_38
            result = sub_431ac0(&var_24)
    
    __seterrormode(&var_20)
    var_8_1.b = 3
    int32_t* ecx_10 = var_24
    
    if (ecx_10 != 0)
        var_24 = nullptr
        (*(*ecx_10 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_20)

if (edi_1 != 0xffffffff)
    CloseHandle(edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
