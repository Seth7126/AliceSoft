// 函数: sub_61b640
// 地址: 0x61b640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d52c
sub_61b910(esi)
*(esi + 0x78) = *(esi + 0x74)
bool cond:0 = *arg1 != 0
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx_1

if (cond:0)
    int32_t* ecx_2 = arg1
    void* edx_1 = ecx_2 + 1
    int32_t eax_5
    
    do
        eax_5.b = *ecx_2
        ecx_2 += 1
    while (eax_5.b != 0)
    ecx_1 = ecx_2 - edx_1
else
    ecx_1 = nullptr

sub_402110(&var_34, arg1, ecx_1)
int32_t var_c_1 = 0
sub_61b9d0(esi, &var_34)
int32_t var_c_2 = 0xffffffff

if (var_20 u>= 0x10)
    j__free(var_34.d)

bool cond:1 = *(esi + 0x58) u< 0x10
void* eax_6 = esi + 0x44
int32_t var_20_1 = 0xf
int32_t var_24_1 = 0
var_34 = 0
*(eax_6 + 0x10) = 0

if (not(cond:1))
    eax_6 = *eax_6

*eax_6 = 0
sub_402110(esi + 0x5c, 0x6ecbbc, 3)
HANDLE hEvent = *(esi + 0x10)

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(*(esi + 0x10))
    *(esi + 0x10) = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
*(esi + 0x10) = hEvent_1
char result

if (hEvent_1 == 0)
    sub_64b530(0x6ecb9c)
    result = 0
else
    ResetEvent(hEvent_1)
    
    if (sub_5f44a0(esi + 4, sub_61be30, esi) != 0)
        result = 1
    else
        sub_64b530(0x6ecb7c)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
