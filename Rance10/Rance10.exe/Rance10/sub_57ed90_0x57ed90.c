// 函数: sub_57ed90
// 地址: 0x57ed90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d17b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_88 = arg2
int32_t var_64 = 0
void* var_8c = &arg1[2]
struct thread::CCriticalLock::VTable* const var_94 = &thread::CCriticalLock::`vftable'
int32_t eax_7 = EnterCriticalSection(arg1[3] + 4)
char var_90 = 1
int32_t var_8_1 = 1
char var_60
char var_48
int32_t var_34
int32_t* eax_8
int32_t ebx_1

if (arg4[4] == 0)
    var_34 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    sub_403490(&var_48, 0x75d4c6, nullptr)
    eax_8 = &var_48
    int32_t var_8_2 = 3
    ebx_1 = 2
else
    eax_8 = sub_419600(eax_7, U"+", &var_60, arg4)
    var_8_1.b = 2
    ebx_1 = 1

int32_t var_64_1 = ebx_1
char var_30
sub_407820(eax_8, arg3, &var_30, eax_8)
int32_t var_8_3 = 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    int32_t var_64_2 = ebx_1
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0

var_8_3.b = 6

if ((ebx_1.b & 1) != 0)
    ebx_1 &= 0xfffffffe
    int32_t var_64_3 = ebx_1
    int32_t var_4c
    
    if (var_4c u>= 0x10)
        sub_403160(var_60.d, var_4c + 1, 1)
    
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    var_60 = 0

void** eax_13 = sub_432330(arg1, &var_30)
void** edi_1 = *arg1
void** esi_1 = eax_13
char eax_15

if (esi_1 != edi_1)
    eax_15 = sub_412ca0(&var_30, &esi_1[4])

if (esi_1 == edi_1 || eax_15 != 0)
    esi_1 = edi_1

CRITICAL_SECTION* lpCriticalSection
int32_t* result
int32_t var_1c

if (esi_1 == edi_1)
    int32_t* edi_2 = arg1
    void* var_70
    int32_t ecx_9 = sub_57f760(&var_70, &edi_2[5])
    var_8_3.b = 7
    int32_t* esi_3 = var_70
    int32_t eax_18 = edi_2[4]
    
    if (esi_3[0xb] != eax_18)
        esi_3[0xb] = eax_18
        __Smtx_lock_shared(&esi_3[1])
        int32_t esi_4 = *esi_3
        ecx_9 = __Smtx_unlock_shared(&esi_3[1])
        
        if (esi_4 != 0)
            ecx_9 = sub_57daf0(esi_3)
        
        edi_2 = arg1
        esi_3 = var_70
    
    int32_t var_ac_8 = ecx_9
    
    if (arg4[4] != 0)
        if (sub_57d990(esi_3, arg3, arg4) != 0)
            goto label_57f042
        
        result = arg2
        int32_t var_64_4 = ebx_1 | 4
        *result = 0
        result[1] = 0
        var_8_3.b = 8
        goto label_57efda
    
    void* eax_24
    int32_t* var_6c
    
    if (sub_57d830(esi_3, arg3) != 0)
    label_57f042:
        void** var_84
        sub_57f920(edi_2, &var_84, &var_30)
        sub_57f5d0(&var_84[0xa], &var_70)
        result = arg2
        void* eax_26 = var_70
        var_70 = nullptr
        *result = eax_26
        result[1] = var_6c
        int32_t var_6c_1 = 0
        
        if (var_1c u>= 0x10)
            sub_403160(var_30.d, var_1c + 1, 1)
        
        int32_t var_1c_2 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
        eax_24 = edi_2[3]
    else
        result = arg2
        int32_t var_64_5 = ebx_1 | 4
        *result = 0
        result[1] = 0
        var_8_3.b = 9
    label_57efda:
        
        if (var_6c != 0)
            bool cond:0_1 = var_6c[1] != 1
            var_6c[1]
            var_6c[1] -= 1
            
            if (not(cond:0_1))
                (**var_6c)(eax_2)
                int32_t edi_4 = var_6c[2]
                var_6c[2] -= 1
                
                if (edi_4 == 1)
                    (*(*var_6c + 4))()
        
        sub_403320(&var_30)
        eax_24 = arg1[3]
    lpCriticalSection = eax_24 + 4
else
    result = arg2
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
        result, &esi_1[0xa])
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    lpCriticalSection = arg1[3] + 4
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
