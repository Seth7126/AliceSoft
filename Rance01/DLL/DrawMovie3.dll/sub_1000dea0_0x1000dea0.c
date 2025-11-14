// 函数: sub_1000dea0
// 地址: 0x1000dea0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100191d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* edi = arg1
arg1 = edi + 0x70
EnterCriticalSection(edi + 0x70)
int32_t var_4 = 0

if (edi->RecursionCount == 0)
    LeaveCriticalSection(edi + 0x70)
else if (*(edi->__offset(0x6c).d + 0x18) != 0)
    sub_1000ec00(edi)
    int32_t* eax_4 = *(edi->__offset(0x6c).d + 0x9c)
    
    if (eax_4 != 0)
        (*(*eax_4 + 0x18))(eax_4)
    
    EnterCriticalSection(edi + 0x88)
    *(edi + 0xa4) = 1
    LeaveCriticalSection(edi + 0x88)
    (*(*(edi - 0xc) + 0x80))(eax_2)
    (*(*(edi - 0xc) + 0x28))(0)
    (*(*(edi - 0xc) + 0x64))()
    (*(*(edi - 0xc) + 0x6c))()
    SetEvent(edi->__offset(0x50).d)
    sub_1000c210(edi - 0xc)
    edi->__offset(0x54).d = 0
    LeaveCriticalSection(edi + 0x70)
else
    edi->RecursionCount = 0
    LeaveCriticalSection(edi + 0x70)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
