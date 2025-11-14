// 函数: sub_58eed0
// 地址: 0x58eed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8147
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a8
int32_t eax_2 = __security_cookie ^ &var_a8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t* edi = arg3
void* var_28
sub_58e590(arg1, &var_28, ebx)
int32_t var_4 = 0
var_4.b = 1
int32_t var_70
char var_40
int32_t* eax_6 = sub_410930(sub_58e590(arg1, &var_40, edi), &var_28, &var_70, U"/")
var_4.b = 2
char var_88
char* eax_7 = sub_410ad0(eax_6, eax_6, &var_88, &var_40)
var_4.b = 3
char var_58
sub_410a80(eax_7.b, eax_7, &var_58, ":A")
int32_t var_74

if (var_74 u>= 0x10)
    j__free(var_88.d)

int32_t var_74_1 = 0xf
int32_t var_78 = 0
var_88 = 0
int32_t var_5c

if (var_5c u>= 0x10)
    j__free(var_70)

var_88.d = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x78) + 4)
char var_84 = 1
var_4.b = 7
int32_t* result = sub_591430(arg1 + 0xbc, &var_58)

if (result != 0)
    LeaveCriticalSection(*(arg1 + 0x78) + 4)
else
    struct IMemory::common::CIMemory::VTable* eax_33
    int32_t* ebp_1
    
    if (sub_590700(arg1, ebx) == 0)
        struct IMemory::common::CIMemory::VTable** var_a4 = nullptr
        
        if (sub_58f8c0(arg1, ebx, &var_a4) == 0)
            result = nullptr
            LeaveCriticalSection(*(arg1 + 0x78) + 4)
        else
            struct IMemory::common::CIMemory::VTable** ecx_24 = var_a4
            
            if (ecx_24 == 0)
                result = nullptr
                LeaveCriticalSection(*(arg1 + 0x78) + 4)
            else
                int32_t esi_3 = **(arg1 + 0x28)
                int32_t eax_31 = (*var_a4)->vFunc_6((*ecx_24)->vFunc_5(eax_4))
                *(arg1 + 0x28)
                int32_t* eax_32
                int32_t ecx_27
                int32_t edx_9
                eax_32, edx_9, ecx_27 = (*(esi_3 + 8))(eax_31)
                
                if (eax_32 == 0)
                    if (ebx[5] u>= 0x10)
                        ebx = *ebx
                    
                    sub_59f4e0(eax_32, edx_9, ecx_27, 0x6e5b24, ebx)
                    goto label_58f1de
                
                (*var_a4)->vFunc_1()
                var_a4 = nullptr
                
                if (sub_58f8c0(arg1, edi, &var_a4) != 0)
                    struct IMemory::common::CIMemory::VTable** ecx_35 = var_a4
                    
                    if (ecx_35 == 0)
                        eax_33 = *eax_32
                        goto label_58f1e0
                    
                    int32_t esi_5 = **(arg1 + 0x28)
                    int32_t eax_44 = (*var_a4)->vFunc_6((*ecx_35)->vFunc_5())
                    *(arg1 + 0x28)
                    int32_t* eax_45
                    int32_t ecx_39
                    int32_t edx_10
                    eax_45, edx_10, ecx_39 = (*(esi_5 + 8))(eax_44)
                    
                    if (eax_45 == 0)
                        if (edi[5] u>= 0x10)
                            edi = *edi
                        
                        sub_59f4e0(eax_45, edx_10, ecx_39, 0x6e5b48, edi)
                        (*(*eax_32 + 4))()
                    label_58f1de:
                        eax_33 = *var_a4
                        goto label_58f1e0
                    
                    (*var_a4)->vFunc_1()
                    int32_t* eax_48
                    int32_t ecx_43
                    int32_t edx_11
                    eax_48, ecx_43, edx_11 = sub_58f9f0(arg1, eax_32, eax_32, eax_45)
                    ebp_1 = eax_48
                    
                    if (ebp_1 == 0)
                        if (edi[5] u>= 0x10)
                            edi = *edi
                        
                        if (ebx[5] u>= 0x10)
                            ebx = *ebx
                        
                        int32_t* var_c0_29 = edi
                        sub_59f4e0(eax_48, edx_11, ecx_43, 0x6e5b6c, ebx)
                    
                    (*(*eax_32 + 4))()
                    (*(*eax_45 + 4))()
                    
                    if (ebp_1 != 0)
                        goto label_58f370
                    
                    result = nullptr
                    LeaveCriticalSection(*(arg1 + 0x78) + 4)
                else
                    eax_33 = *eax_32
                label_58f1e0:
                    eax_33->vFunc_1(eax_4)
                    result = nullptr
                    LeaveCriticalSection(*(arg1 + 0x78) + 4)
    else
        int32_t* result_1 = result
        int32_t* result_2 = result
        var_4.b = 8
        char eax_14 = sub_58f750(arg1, ebx, &result_1)
        int32_t* result_3 = result_1
        
        if (eax_14 == 0 || result_3 == result)
            goto label_58f16b
        
        int32_t* eax_16 = (*(**(arg1 + 0x28) + 8))(result_3, result - result_3)
        
        if (eax_16 == 0)
            goto label_58f16b
        
        if (sub_590700(arg1, edi) == 0)
            int32_t eax_25
            int32_t ecx_22
            int32_t edx_8
            eax_25, edx_8, ecx_22 = (*(*eax_16 + 4))(eax_4)
            
            if (edi[5] u>= 0x10)
                edi = *edi
            
            sub_59f4e0(eax_25, edx_8, ecx_22, 0x6e5af0, edi)
            goto label_58f16b
        
        var_70 = 0
        int32_t var_6c_1 = 0
        int32_t var_68_1 = 0
        var_4.b = 9
        
        if (sub_58f750(arg1, edi, &var_70) != 0)
            int32_t edx_5 = var_70
            int32_t* eax_21 = (*(**(arg1 + 0x28) + 8))(edx_5, var_6c_1 - edx_5)
            
            if (eax_21 == 0)
                (*(*eax_16 + 4))(eax_4)
                result_3 = result_1
                sub_403510(&var_70)
                goto label_58f16b
            
            ebp_1 = sub_58f9f0(arg1, eax_21, eax_16, eax_21)
            (*(*eax_16 + 4))(eax_4)
            (*(*eax_21 + 4))()
            
            if (ebp_1 == 0)
                result_3 = result_1
                sub_403510(&var_70)
                goto label_58f16b
            
            sub_403510(&var_70)
            var_4.b = 7
            sub_403510(&result_1)
        label_58f370:
            struct ISurface::sealengine::CResourceSurface::VTable** eax_51 = sub_69adc6(0x34)
            struct ISurface::sealengine::CResourceSurface::VTable** var_94_2 = eax_51
            var_4.b = 0xa
            
            if (eax_51 == 0)
                result = nullptr
            else
                result = sub_5917f0(eax_51, ebp_1, &var_58, arg1 + 0xbc)
            
            var_4.b = 7
            (*(*ebp_1 + 4))(eax_4)
            
            if (sub_591350(arg1 + 0xbc, &var_58, result) == 0)
                eax_33 = *result
                goto label_58f1e0
            
            sub_5f4170(&var_88)
            
            if (var_84 != 0)
                LeaveCriticalSection(*(arg1 + 0x78) + 4)
        else
            (*(*eax_16 + 4))(eax_4)
            sub_403510(&var_70)
        label_58f16b:
            
            if (result_3 == 0)
                result = nullptr
                LeaveCriticalSection(*(arg1 + 0x78) + 4)
            else
                j__free(result_3)
                result = nullptr
                LeaveCriticalSection(*(arg1 + 0x78) + 4)

int32_t var_44

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48 = 0
var_58 = 0
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
sub_69a5bc(eax_2 ^ &var_a8)
return result
