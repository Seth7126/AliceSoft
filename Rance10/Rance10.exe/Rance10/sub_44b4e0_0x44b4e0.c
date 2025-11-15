// 函数: sub_44b4e0
// 地址: 0x44b4e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72aaa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg3
struct thread::CCriticalLock::VTable* const var_4c = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0xc) + 4)
char var_48 = 1
int32_t var_8_1 = 0
void*** eax_6 = *(arg1 + 0x10)
void** var_34 = arg2
void var_40
void* esi_1 = *sub_44b8e0(eax_6, &var_34, &var_40, *eax_6, eax_6)

if (esi_1 == *(arg1 + 0x10))
    (**result)(eax_2)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403590(&var_30, arg2, 0, 0xffffffff)
    int32_t* result_1 = result
    var_8_1.b = 1
    int32_t* esi_2 = **(arg1 + 0x10)
    int32_t* eax_11 = sub_44ba20(esi_2, esi_2[1], &var_30)
    
    if (0x71c71c6 - *(arg1 + 0x14) u< 1)
        sub_6d0927("list<T> too long")
        noreturn
    
    *(arg1 + 0x14) += 1
    esi_2[1] = eax_11
    var_8_1.b = 0
    *eax_11[1] = eax_11
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    int32_t esi_4 = (*(*result + 0x20))() + (*(*result + 0x1c))()
    int32_t eax_20 = (*(*result + 0x14))() * esi_4
    *(arg1 + 0x18) += eax_20
    
    if (*(arg1 + 0x18) u> *(arg1 + 0x1c))
        void* esi_5 = arg1 + 0x10
        
        while (*(arg1 + 0x14) u> 1)
            int32_t* edi = *(*(*esi_5 + 4) + 0x20)
            int32_t esi_7 = (*(*edi + 0x20))() + (*(*edi + 0x1c))()
            int32_t eax_29 = (*(*edi + 0x14))() * esi_7
            esi_5 = arg1 + 0x10
            *(arg1 + 0x18) -= eax_29
            (*(**(*(*esi_5 + 4) + 0x20) + 4))()
            sub_44b7f0(esi_5, &var_40, *(*esi_5 + 4))
            
            if (*(arg1 + 0x18) u<= *(arg1 + 0x1c))
                break
    
    (**result)()
else
    (***(esi_1 + 0x20))(eax_2)
    result = *(esi_1 + 0x20)

LeaveCriticalSection(*(arg1 + 0xc) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
