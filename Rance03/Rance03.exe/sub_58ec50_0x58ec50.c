// 函数: sub_58ec50
// 地址: 0x58ec50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c80bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IMemory::common::CIMemory::VTable** var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
char var_44
void* var_2c
sub_410930(sub_58e590(arg1, &var_2c, arg2), &var_2c, &var_44, ":A")
void* ebp = arg1 + 0x74
struct thread::CCriticalLock::VTable* const var_50 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x78) + 4)
char var_4c = 1
var_4.b = 2
int32_t* result = sub_591430(arg1 + 0xbc, &var_44)

if (result != 0)
    LeaveCriticalSection(*(ebp + 4) + 4)
else
    int32_t* edi_1
    
    if (sub_590700(arg1, arg2) == 0)
        var_64 = nullptr
        
        if (sub_58f8c0(arg1, arg2, &var_64) == 0)
            result = nullptr
            LeaveCriticalSection(*(ebp + 4) + 4)
        else
            struct IMemory::common::CIMemory::VTable** ebx_2 = var_64
            
            if (ebx_2 == 0)
                result = nullptr
                LeaveCriticalSection(*(ebp + 4) + 4)
            else
                int32_t esi = **(arg1 + 0x28)
                int32_t eax_24 = (*ebx_2)->vFunc_6((*ebx_2)->vFunc_5(eax_4))
                *(arg1 + 0x28)
                int32_t* eax_25 = (*(esi + 8))(eax_24)
                (*ebx_2)->vFunc_1()
                
                if (eax_25 == 0)
                    result = nullptr
                    LeaveCriticalSection(*(ebp + 4) + 4)
                else
                    edi_1 = sub_58fa90(arg1, eax_25, eax_25)
                    (*(*eax_25 + 4))()
                    
                    if (edi_1 != 0)
                        goto label_58ee58
                    
                    result = nullptr
                    LeaveCriticalSection(*(ebp + 4) + 4)
    else
        int32_t* result_1 = result
        int32_t* result_2 = result
        var_4.b = 3
        char eax_11 = sub_58f750(arg1, arg2, &result_1)
        int32_t* result_3 = result_1
        
        if (eax_11 == 0 || result_3 == result)
        label_58ed6e:
            
            if (result_3 == 0)
                result = nullptr
                LeaveCriticalSection(*(ebp + 4) + 4)
            else
                j__free(result_3)
                result = nullptr
                LeaveCriticalSection(*(ebp + 4) + 4)
        else
            int32_t* eax_13 = (*(**(arg1 + 0x28) + 8))(result_3, result - result_3)
            
            if (eax_13 == 0)
                goto label_58ed6e
            
            edi_1 = sub_58fa90(arg1, result_3, eax_13)
            (*(*eax_13 + 4))(eax_4)
            
            if (edi_1 == 0)
                goto label_58ed6e
            
            var_4.b = 2
            sub_403510(&result_1)
        label_58ee58:
            struct ISurface::sealengine::CResourceSurface::VTable** eax_29 = sub_69adc6(0x34)
            var_64 = eax_29
            var_4.b = 4
            
            if (eax_29 == 0)
                result = nullptr
            else
                result = sub_5917f0(eax_29, edi_1, &var_44, arg1 + 0xbc)
            
            var_4.b = 2
            (*(*edi_1 + 4))(eax_4)
            
            if (sub_591350(arg1 + 0xbc, &var_44, result) != 0)
                sub_5f4170(&var_50)
                
                if (var_4c != 0)
                    LeaveCriticalSection(*(ebp + 4) + 4)
            else
                (*(*result + 4))()
                result = nullptr
                LeaveCriticalSection(*(ebp + 4) + 4)

int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
