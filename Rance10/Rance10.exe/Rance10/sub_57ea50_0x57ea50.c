// 函数: sub_57ea50
// 地址: 0x57ea50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d0d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_84 = arg2
int32_t var_60 = 0
void* var_88 = &arg1[2]
struct thread::CCriticalLock::VTable* const var_90 = &thread::CCriticalLock::`vftable'
int32_t eax_7 = EnterCriticalSection(arg1[3] + 4)
char var_8c = 1
int32_t var_8_1 = 1
char var_5c
char var_44
int32_t var_30
int32_t* eax_8
int32_t ebx_1

if (arg4[4] == 0)
    var_30 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_403490(&var_44, 0x75d4bf, nullptr)
    eax_8 = &var_44
    int32_t var_8_2 = 3
    ebx_1 = 2
else
    eax_8 = sub_419600(eax_7, U"++", &var_5c, arg4)
    var_8_1.b = 2
    ebx_1 = 1

int32_t var_60_1 = ebx_1
char var_2c
sub_407820(eax_8, arg3, &var_2c, eax_8)
int32_t var_8_3 = 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    int32_t var_60_2 = ebx_1
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0

var_8_3.b = 6

if ((ebx_1.b & 1) != 0)
    ebx_1 &= 0xfffffffe
    int32_t var_60_3 = ebx_1
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0

void** eax_13 = sub_432330(arg1, &var_2c)
void** edi_1 = *arg1
void** esi_1 = eax_13
char eax_15

if (esi_1 != edi_1)
    eax_15 = sub_412ca0(&var_2c, &esi_1[4])

if (esi_1 == edi_1 || eax_15 != 0)
    esi_1 = edi_1

CRITICAL_SECTION* lpCriticalSection
int32_t* result
int32_t var_18

if (esi_1 == edi_1)
    int32_t* edi_2 = arg1
    void* var_6c
    int32_t ecx_9 = sub_57f760(&var_6c, &edi_2[5])
    var_8_3.b = 7
    int32_t* esi_3 = var_6c
    int32_t eax_18 = edi_2[4]
    
    if (esi_3[0xb] != eax_18)
        esi_3[0xb] = eax_18
        __Smtx_lock_shared(&esi_3[1])
        int32_t esi_4 = *esi_3
        ecx_9 = __Smtx_unlock_shared(&esi_3[1])
        
        if (esi_4 != 0)
            ecx_9 = sub_57daf0(esi_3)
        
        edi_2 = arg1
        esi_3 = var_6c
    
    int32_t var_a8_8 = ecx_9
    
    if (arg4[4] != 0)
        if (sub_57d6d0(esi_3, arg3, arg4) != 0)
            goto label_57ecff
        
        result = arg2
        int32_t var_60_4 = ebx_1 | 4
        *result = 0
        result[1] = 0
        var_8_3.b = 8
        goto label_57ec97
    
    void* eax_24
    int32_t* var_68
    
    if (sub_57d570(esi_3, arg3) != 0)
    label_57ecff:
        void** var_80
        sub_57f920(edi_2, &var_80, &var_2c)
        sub_57f5d0(&var_80[0xa], &var_6c)
        result = arg2
        void* eax_26 = var_6c
        var_6c = nullptr
        *result = eax_26
        result[1] = var_68
        int32_t var_68_1 = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        eax_24 = edi_2[3]
    else
        result = arg2
        int32_t var_60_5 = ebx_1 | 4
        *result = 0
        result[1] = 0
        var_8_3.b = 9
    label_57ec97:
        
        if (var_68 != 0)
            bool cond:0_1 = var_68[1] != 1
            var_68[1]
            var_68[1] -= 1
            
            if (not(cond:0_1))
                (**var_68)(eax_2)
                int32_t edi_4 = var_68[2]
                var_68[2] -= 1
                
                if (edi_4 == 1)
                    (*(*var_68 + 4))()
        
        sub_403320(&var_2c)
        eax_24 = arg1[3]
    lpCriticalSection = eax_24 + 4
else
    result = arg2
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
        result, &esi_1[0xa])
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    lpCriticalSection = arg1[3] + 4
LeaveCriticalSection(lpCriticalSection)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
