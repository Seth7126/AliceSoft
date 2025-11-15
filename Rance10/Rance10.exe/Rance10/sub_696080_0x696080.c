// 函数: sub_696080
// 地址: 0x696080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747dd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

uint32_t ecx_2 = *(arg1 + 0x48)
uint32_t var_24

if (ecx_2 != 0)
    var_24 = *(arg1 + 0x10) u>> 1
else
    var_24 = ecx_2

int32_t eax_6 = *(arg1 + 0x10)

if (ecx_2 != 0)
    eax_6 += 1

int32_t* ecx_3 = *(arg1 + 0x44)
int32_t __saved_ebp
int32_t eax_9 = (*(*ecx_3 + 0x1c))(__security_cookie ^ &__saved_ebp)
int32_t eax_10 = (*(*ecx_3 + 0xc))()
int32_t* ecx_5 = *(arg1 + 0x44)
void* eax_12 = *(arg1 + 0x2c) * ((eax_9 * eax_10) u>> 3)
int32_t eax_14 = (*(*ecx_5 + 0x1c))()
int32_t eax_15 = (*(*ecx_5 + 0xc))()
struct thread::CCriticalLock::VTable* const var_3c = &thread::CCriticalLock::`vftable'
uint32_t (* esi_3)[0x4] = *(arg1 + 0x30) * ((eax_14 * eax_15) u>> 3)
void* var_34 = arg1 + 0x7c
EnterCriticalSection(*(arg1 + 0x80) + 4)
char var_38 = 1
int32_t var_8_1 = 0
int32_t* eax_18 = *(arg1 + 0x18)
void* var_20 = nullptr
void* var_18 = nullptr
void* var_1c = nullptr
void* var_14 = nullptr
int32_t eax_19 =
    (*(*eax_18 + 0x2c))(eax_18, var_24, eax_6 u>> 1, &var_20, &var_1c, &var_18, &var_14, 0)
int32_t eax_23

if (eax_19 == 0)
    void* eax_20 = var_20
    
    if (eax_20 != 0)
        void* ecx_8 = var_1c
        
        if (ecx_8 != 0)
            sub_696210(arg1, eax_20, ecx_8, eax_12, esi_3)
            void* ecx_10 = var_18
            
            if (ecx_10 != 0)
                void* eax_21 = var_14
                
                if (eax_21 != 0)
                    sub_696210(arg1, ecx_10, eax_21, eax_12, esi_3)
    
    int32_t* eax_22 = *(arg1 + 0x18)
    eax_23 = (*(*eax_22 + 0x4c))(eax_22, var_20, var_1c, var_18, var_14)

void* ebx

if (eax_19 != 0 || eax_23 != 0)
    ebx.b = 0
else
    ebx.b = 1

LeaveCriticalSection(*(arg1 + 0x80) + 4)
int32_t eax_24
eax_24.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_24
