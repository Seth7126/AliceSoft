// 函数: sub_58e5f0
// 地址: 0x58e5f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7fe3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IMemory::common::CIMemory::VTable** var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c
sub_58e590(arg1, &var_2c, arg2)
int32_t var_4 = 0
void* ebp = arg1 + 0x74
struct thread::CCriticalLock::VTable* const var_38 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(ebp + 4) + 4)
char var_34 = 1
var_4.b = 1
int32_t* result = sub_591430(arg1 + 0xbc, &var_2c)

if (result != 0)
    LeaveCriticalSection(*(ebp + 4) + 4)
else
    int32_t* ebx_1
    
    if (sub_590700(arg1, arg2) == 0)
        var_4c = nullptr
        
        if (sub_58f8c0(arg1, arg2, &var_4c) == 0)
            result = nullptr
            LeaveCriticalSection(*(ebp + 4) + 4)
        else
            struct IMemory::common::CIMemory::VTable** edi_1 = var_4c
            
            if (edi_1 == 0)
                result = nullptr
                LeaveCriticalSection(*(ebp + 4) + 4)
            else
                int32_t esi = **(arg1 + 0x28)
                int32_t eax_21 = (*edi_1)->vFunc_6((*edi_1)->vFunc_5(eax_4))
                *(arg1 + 0x28)
                ebx_1 = (*(esi + 8))(eax_21)
                (*edi_1)->vFunc_1()
                
                if (ebx_1 != 0)
                    goto label_58e781
                
                result = nullptr
                LeaveCriticalSection(*(ebp + 4) + 4)
    else
        int32_t* result_1 = result
        int32_t* result_2 = result
        var_4.b = 2
        char eax_10 = sub_58f750(arg1, arg2, &result_1)
        int32_t* result_3 = result_1
        
        if (eax_10 != 0 && result_3 != result)
            ebx_1 = (*(**(arg1 + 0x28) + 8))(result_3, result - result_3)
        
        if (eax_10 != 0 && result_3 != result && ebx_1 != 0)
            var_4.b = 1
            sub_403510(&result_1)
        label_58e781:
            struct IMemory::common::CIMemory::VTable** eax_24 = sub_69adc6(0x34)
            var_4c = eax_24
            var_4.b = 3
            
            if (eax_24 == 0)
                result = nullptr
            else
                result = sub_5917f0(eax_24, ebx_1, &var_2c, arg1 + 0xbc)
            
            var_4.b = 1
            (*(*ebx_1 + 4))(eax_4)
            
            if (sub_591350(arg1 + 0xbc, &var_2c, result) != 0)
                sub_5f4170(&var_38)
                
                if (var_34 != 0)
                    LeaveCriticalSection(*(ebp + 4) + 4)
            else
                (*(*result + 4))()
                result = nullptr
                LeaveCriticalSection(*(ebp + 4) + 4)
        else if (result_3 == 0)
            result = nullptr
            LeaveCriticalSection(*(ebp + 4) + 4)
        else
            j__free(result_3)
            result = nullptr
            LeaveCriticalSection(*(ebp + 4) + 4)

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
