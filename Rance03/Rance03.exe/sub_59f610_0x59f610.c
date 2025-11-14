// 函数: sub_59f610
// 地址: 0x59f610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c89a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_34 = &thread::CCriticalLock::`vftable'
void** var_2c = &data_74f98c
EnterCriticalSection(data_74f990 + 4)
char var_30 = 1
int32_t var_4 = 0
void** esi = data_75da10
enum MESSAGEBOX_RESULT result

if (esi == data_75da14)
    result = LeaveCriticalSection(data_74f990 + 4)
else
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    var_4.b = 1
    int32_t edi_1
    
    do
        sub_403110(&var_28, esi, nullptr, 0xffffffff)
        sub_4057c0(&var_28, 0x6e5d1c, 1)
        edi_1 = data_75da14
        esi = &esi[6]
    while (esi != edi_1)
    
    int32_t* esi_1 = data_75da10
    
    if (esi_1 != edi_1)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = 0
            esi_1 = &esi_1[6]
        while (esi_1 != edi_1)
        
        esi_1 = data_75da10
    
    CRITICAL_SECTION* lpCriticalSection = data_74f990 + 4
    data_75da14 = esi_1
    char var_30_1 = 0
    LeaveCriticalSection(lpCriticalSection)
    char* eax_8 = &var_28
    
    if (var_14_1 u>= 0x10)
        eax_8 = var_28.d
    
    result = sub_64b530(eax_8)
    
    if (var_14_1 u>= 0x10)
        result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
