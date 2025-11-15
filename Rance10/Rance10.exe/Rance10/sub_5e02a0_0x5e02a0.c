// 函数: sub_5e02a0
// 地址: 0x5e02a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741820
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_50 = &thread::CCriticalLock::`vftable'
void** var_48 = &data_7e70c0
int32_t eax_5
int32_t ecx
eax_5, ecx = EnterCriticalSection(data_7e70c4 + 4)
char var_4c = 1
int32_t var_8_1 = 0
void** esi = data_7fd46c
int32_t edi = data_7fd470
eax_5.b = esi == edi
int32_t result

if (eax_5.b != 0)
    result = LeaveCriticalSection(data_7e70c4 + 4)
else
    int32_t result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = eax_5.b
    var_8_1.b = 1
    char var_2c
    
    if (esi != edi)
        do
            var_8_1.b = 2
            ecx = sub_4055a0(&var_44, sub_4175e0(eax_5, esi, &var_2c, U"\n"), 0, 0xffffffff)
            var_8_1.b = 1
            int32_t var_18
            eax_5 = var_18
            
            if (eax_5 u>= 0x10)
                eax_5, ecx = sub_403160(var_2c.d, eax_5 + 1, 1)
            
            esi = &esi[6]
        while (esi != edi)
        
        edi = data_7fd470
        esi = data_7fd46c
    
    int32_t var_54
    int32_t var_68_1 = var_54
    int32_t var_6c_2 = ecx
    sub_417d50(esi, edi)
    data_7fd470 = data_7fd46c
    char var_4c_1 = 0
    LeaveCriticalSection(data_7e70c4 + 4)
    char* edx_3 = &var_44
    int32_t var_18_1 = 0xf
    
    if (result_1 u>= 0x10)
        edx_3 = var_44.d
    
    int32_t var_1c_1 = 0
    var_2c = 0
    void* ecx_4
    
    if (*edx_3 != 0)
        char* ecx_5 = edx_3
        char i
        
        do
            i = *ecx_5
            ecx_5 = &ecx_5[1]
        while (i != 0)
        ecx_4 = ecx_5 - &ecx_5[1]
    else
        ecx_4 = nullptr
    
    sub_403490(&var_2c, edx_3, ecx_4)
    var_8_1.b = 3
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
