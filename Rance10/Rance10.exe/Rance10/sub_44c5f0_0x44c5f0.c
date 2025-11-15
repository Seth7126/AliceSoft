// 函数: sub_44c5f0
// 地址: 0x44c5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ad44
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_7fcb48
int32_t* var_48 = nullptr
SRWLOCK var_44
__builtin_memset(&var_44, 0, 4)
int32_t* var_38 = nullptr
SRWLOCK var_34
__builtin_memset(&var_34, 0, 4)
sub_4323a0(&var_38, &var_48)
int32_t var_8_1 = 0
__seterrormode(&var_44)
var_8_1.b = 1
int32_t* ecx_1 = var_48

if (ecx_1 != 0)
    var_48 = nullptr
    (*(*ecx_1 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_44)
__Smtx_lock_shared(&var_34)
int32_t* ebx
ebx.b = var_38 != 0
__Smtx_unlock_shared(&var_34)
ebx.b ^= 1
void* var_30
int32_t var_1c

if (ebx.b != 0)
    int32_t var_6c_6 = sub_403360(&var_30, arg1)
    var_8_1.b = 2
    int32_t* eax_6 = sub_44dac0(&esi[0x14], &var_30)
    __seterrormode(&var_34)
    var_8_1.b = 3
    int32_t* ecx_5 = var_38
    
    if (ecx_5 != 0)
        var_38 = nullptr
        (*(*ecx_5 + 4))(eax_2)
    
    var_38 = eax_6
    ___crtSetUnhandledExceptionFilter(&var_34)
    var_8_1.b = 0
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)

__Smtx_lock_shared(&var_34)
ebx.b = var_38 != 0
__Smtx_unlock_shared(&var_34)
ebx.b ^= 1

if (ebx.b != 0)
    int32_t* eax_11 = (*(*esi[0x11] + 8))(arg1, 0xc8)
    __seterrormode(&var_34)
    var_8_1.b = 4
    int32_t* ecx_7 = var_38
    
    if (ecx_7 != 0)
        var_38 = nullptr
        (*(*ecx_7 + 4))(eax_2)
    
    var_8_1.b = 0
    var_38 = eax_11
    ___crtSetUnhandledExceptionFilter(&var_34)

__Smtx_lock_shared(&var_34)
ebx.b = var_38 != 0
__Smtx_unlock_shared(&var_34)
ebx.b ^= 1

if (ebx.b != 0)
    int32_t var_6c_16 = sub_403360(&var_30, arg1)
    var_8_1.b = 5
    int32_t* eax_13 = sub_44dac0(&esi[0x18], &var_30)
    __seterrormode(&var_34)
    var_8_1.b = 6
    int32_t* ecx_11 = var_38
    
    if (ecx_11 != 0)
        var_38 = nullptr
        (*(*ecx_11 + 4))(eax_2)
    
    var_38 = eax_13
    ___crtSetUnhandledExceptionFilter(&var_34)
    var_8_1.b = 0
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)

__Smtx_lock_shared(&var_34)
ebx.b = var_38 != 0
__Smtx_unlock_shared(&var_34)
ebx.b ^= 1

if (ebx.b == 0)
    __Smtx_lock_shared(&var_34)
    int32_t* esi_2 = var_38
    __Smtx_unlock_shared(&var_34)
    
    if (sub_44c230(esi_2) != 0)
        __Smtx_lock_shared(&var_34)
        int32_t* esi_3 = var_38
        __Smtx_unlock_shared(&var_34)
        struct cgmanager::CDCFDecoder::VTable* const var_54_1 = &cgmanager::CDCFDecoder::`vftable'
        int64_t* eax_18
        int32_t ecx_12
        eax_18, ecx_12 = sub_6e810c(8)
        int64_t* var_4c_1 = eax_18
        int64_t* var_50_1 = eax_18
        *eax_18 = 0
        *(eax_18 + 4) = 1
        *eax_18 = &nutria::CZlibDecompressor::`vftable'{for `common::SuicideRefCounter<class IDecompressor>'}
        var_8_1.b = 7
        ebx.b = sub_44a9c0((*(*esi_3 + 0x18))(ecx_12, arg2, arg3, eax_2))
        var_8_1.b = 8
        (*(*eax_18 + 4))()
    else if (esi[0x12] != 0)
        __Smtx_lock_shared(&var_34)
        int32_t* edi_2 = var_38
        __Smtx_unlock_shared(&var_34)
        int32_t esi_4 = *esi[0x12]
        int32_t eax_25 = (*(*edi_2 + 0x18))(0xc8)
        esi[0x12]
        char eax_27
        
        if ((*(esi_4 + 0xc))(eax_25) != 3)
            __Smtx_lock_shared(&var_34)
            int32_t* edi_3 = var_38
            __Smtx_unlock_shared(&var_34)
            void* esi_5 = *esi[0x12]
            int32_t eax_30 = (*(*edi_3 + 0x18))(0xc8, arg2, arg3)
            esi[0x12]
            eax_27 = (*(esi_5 + 0x10))(eax_30)
        else
            eax_27 = sub_44c9d0(esi, arg1, arg2, arg3)
        
        ebx.b = eax_27
    else
        ebx.b = 0
else
    ebx.b = 0

__seterrormode(&var_34)
int32_t var_8_2 = 9
int32_t* ecx_20 = var_38

if (ecx_20 != 0)
    var_38 = nullptr
    (*(*ecx_20 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_34)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
