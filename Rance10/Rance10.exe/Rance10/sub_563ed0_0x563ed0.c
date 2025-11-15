// 函数: sub_563ed0
// 地址: 0x563ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bc46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* arg_4
void* edi = arg_4
__Smtx_lock_shared(edi + 0x200)
int32_t esi = *(edi + 0x1fc)
__Smtx_unlock_shared(edi + 0x200)

if (esi == 0)
    int32_t result
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* var_34 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_8_1 = 0
__Smtx_lock_shared(edi + 0x200)
void* esi_1 = *(edi + 0x1fc)
__Smtx_unlock_shared(edi + 0x200)
struct thread::CCriticalLock::VTable* const var_40
int32_t* eax_3 = sub_5bc410(esi_1, &var_40, sub_5c33b0)
var_8_1.b = 1
__Smtx_lock_shared(edi + 0x200)
void* esi_3 = *(edi + 0x1fc)
__Smtx_unlock_shared(edi + 0x200)
bool cond:0 = sub_5bc1a0(esi_3, &var_34, eax_3) == 0
var_8_1.b = 0
struct thread::CCriticalLock::VTable* const ecx_4 = var_40
SRWLOCK* ebx
ebx.b = cond:0
int32_t var_38

if (ecx_4 != 0)
    sub_403160(ecx_4, (var_38 - ecx_4) s>> 2, 4)

if (ebx.b == 0)
    void* esi_4 = arg_4
    EnterCriticalSection(*(esi_4 + 0x70) + 4)
    int32_t var_38_1 = *(esi_4 + 0x68)
    var_40.q = *(esi_4 + 0x60)
    LeaveCriticalSection(*(esi_4 + 0x70) + 4)
    void var_28
    sub_565090(&var_40, &var_34, &var_28, &var_40)
    var_40 = &thread::CCriticalLock::`vftable'
    SRWLOCK* var_38_2 = arg1
    EnterCriticalSection(arg1 + 4)
    char var_3c_1 = 1
    var_8_1.b = 3
    void* var_20
    sub_565200(&arg1[4], &var_20, &arg_4)
    Concurrency::details::_SyncOriginator<uint32_t>::~_SyncOriginator<uint32_t>(var_20 + 0x14, 
        &var_28)
    char var_3c_2 = 0
    LeaveCriticalSection(arg1 + 4)
    sub_564150(arg1)
    ebx.b = 1
    var_8_1.b = 4
    int32_t* var_24
    
    if (var_24 != 0)
        bool cond:1_1 = var_24[1] != 1
        var_24[1]
        var_24[1] -= 1
        
        if (not(cond:1_1))
            (**var_24)(eax_2)
            int32_t edi_2 = var_24[2]
            var_24[2] -= 1
            
            if (edi_2 == 1)
                (*(*var_24 + 4))()
else
    ebx.b = 0

void* esi_6 = var_34

if (esi_6 != 0)
    sub_403160(esi_6, (var_2c - esi_6) s/ 0x24, 0x24)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
