// 函数: sub_58e800
// 地址: 0x58e800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8059
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IMemory::common::CIMemory::VTable** var_90
int32_t eax_2 = __security_cookie ^ &var_90
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = arg3
void* var_28
sub_58e590(arg1, &var_28, arg2)
int32_t var_4 = 0
var_4.b = 1
struct thread::CCriticalLock::VTable* const var_58
char var_40
int32_t* eax_6 = sub_410930(sub_58e590(arg1, &var_40, ebp), &var_28, &var_58, U"/")
var_4.b = 2
char var_70
sub_410ad0(eax_6, eax_6, &var_70, &var_40)
int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58)

var_58 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x78) + 4)
char var_54 = 1
var_4.b = 5
int32_t* result = sub_591430(arg1 + 0xbc, &var_70)

if (result != 0)
    LeaveCriticalSection(*(arg1 + 0x78) + 4)
else
    struct IMemory::common::CIMemory::VTable* eax_41
    int32_t* edi_1
    
    if (sub_590700(arg1, arg2) == 0)
        var_90 = nullptr
        
        if (sub_58f8c0(arg1, arg2, &var_90) == 0)
            result = nullptr
            LeaveCriticalSection(*(arg1 + 0x78) + 4)
        else
            struct IMemory::common::CIMemory::VTable** ebx_2 = var_90
            
            if (ebx_2 == 0)
                result = nullptr
                LeaveCriticalSection(*(arg1 + 0x78) + 4)
            else
                int32_t esi_3 = **(arg1 + 0x28)
                int32_t eax_30 = (*ebx_2)->vFunc_6((*ebx_2)->vFunc_5(eax_4))
                *(arg1 + 0x28)
                int32_t* eax_31 = (*(esi_3 + 8))(eax_30)
                (*var_90)->vFunc_1()
                
                if (eax_31 == 0)
                    result = nullptr
                    LeaveCriticalSection(*(arg1 + 0x78) + 4)
                else
                    var_90 = nullptr
                    char eax_33 = sub_58f8c0(arg1, ebp, &var_90)
                    struct IMemory::common::CIMemory::VTable** ebp_1
                    
                    if (eax_33 != 0)
                        ebp_1 = var_90
                    
                    if (eax_33 == 0 || ebp_1 == 0)
                        eax_41 = *eax_31
                    label_58eba3:
                        eax_41->vFunc_1(eax_4)
                        result = nullptr
                        LeaveCriticalSection(*(arg1 + 0x78) + 4)
                    else
                        int32_t esi_4 = **(arg1 + 0x28)
                        int32_t eax_38 = (*ebp_1)->vFunc_6((*ebp_1)->vFunc_5())
                        *(arg1 + 0x28)
                        int32_t* eax_39 = (*(esi_4 + 8))(eax_38)
                        
                        if (eax_39 == 0)
                            (*(*eax_31 + 4))()
                            eax_41 = *ebp_1
                            goto label_58eba3
                        
                        (*ebp_1)->vFunc_1()
                        edi_1 = sub_58f910(arg1, eax_31, eax_39)
                        (*(*eax_31 + 4))()
                        (*(*eax_39 + 4))()
                        
                        if (edi_1 != 0)
                            goto label_58eb37
                        
                        result = nullptr
                        LeaveCriticalSection(*(arg1 + 0x78) + 4)
    else
        int32_t* result_1 = result
        int32_t* result_2 = result
        var_4.b = 6
        char eax_13 = sub_58f750(arg1, arg2, &result_1)
        int32_t* result_3 = result_1
        
        if (eax_13 == 0 || result_3 == result)
            goto label_58e982
        
        int32_t* eax_15 = (*(**(arg1 + 0x28) + 8))(result_3, result - result_3)
        
        if (eax_15 == 0)
            goto label_58e982
        
        if (sub_590700(arg1, ebp) == 0)
            int32_t eax_18
            int32_t ecx_9
            int32_t edx_4
            eax_18, edx_4, ecx_9 = (*(*eax_15 + 4))(eax_4)
            
            if (ebp[5] u>= 0x10)
                ebp = *ebp
            
            sub_59f4e0(eax_18, edx_4, ecx_9, 0x6e5c5c, ebp)
            goto label_58e982
        
        int32_t var_7c = 0
        int32_t var_78_1 = 0
        int32_t var_74_1 = 0
        var_4.b = 7
        
        if (sub_58f750(arg1, ebp, &var_7c) != 0)
            int32_t edx_5 = var_7c
            int32_t* eax_22 = (*(**(arg1 + 0x28) + 8))(edx_5, var_78_1 - edx_5)
            
            if (eax_22 == 0)
                (*(*eax_15 + 4))(eax_4)
                result_3 = result_1
                sub_403510(&var_7c)
                goto label_58e982
            
            edi_1 = sub_58f910(arg1, eax_15, eax_22)
            (*(*eax_15 + 4))(eax_4)
            (*(*eax_22 + 4))()
            
            if (edi_1 == 0)
                result_3 = result_1
                sub_403510(&var_7c)
                goto label_58e982
            
            sub_403510(&var_7c)
            var_4.b = 5
            sub_403510(&result_1)
        label_58eb37:
            struct ISurface::sealengine::CResourceSurface::VTable** eax_46 = sub_69adc6(0x34)
            var_90 = eax_46
            var_4.b = 8
            
            if (eax_46 == 0)
                result = nullptr
            else
                result = sub_5917f0(eax_46, edi_1, &var_70, arg1 + 0xbc)
            
            var_4.b = 5
            (*(*edi_1 + 4))(eax_4)
            
            if (sub_591350(arg1 + 0xbc, &var_70, result) == 0)
                eax_41 = *result
                goto label_58eba3
            
            sub_5f4170(&var_58)
            
            if (var_54 != 0)
                LeaveCriticalSection(*(arg1 + 0x78) + 4)
        else
            (*(*eax_15 + 4))(eax_4)
            sub_403510(&var_7c)
        label_58e982:
            
            if (result_3 == 0)
                result = nullptr
                LeaveCriticalSection(*(arg1 + 0x78) + 4)
            else
                j__free(result_3)
                result = nullptr
                LeaveCriticalSection(*(arg1 + 0x78) + 4)

int32_t var_5c

if (var_5c u>= 0x10)
    j__free(var_70.d)

int32_t var_5c_1 = 0xf
int32_t var_60 = 0
var_70 = 0
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_90)
return result
