// 函数: sub_4559c0
// 地址: 0x4559c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
PSTR lpOutputString = arg1
sub_455740(arg1)
OutputDebugStringA(lpOutputString)
bool cond:0 = *lpOutputString != 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx

if (cond:0)
    PSTR lpOutputString_1 = lpOutputString
    char i
    
    do
        i = *lpOutputString_1
        lpOutputString_1 = &lpOutputString_1[1]
    while (i != 0)
    ecx = lpOutputString_1 - &lpOutputString_1[1]
else
    ecx = nullptr

int32_t* result = sub_402110(&var_28, lpOutputString, ecx)
int32_t var_4 = 0
void* ecx_2 = data_75d550

if (ecx_2 != 0)
    char* edx_2 = &var_28
    int32_t esi = *(ecx_2 + 0x14c)
    
    if (var_14 u>= 0x10)
        edx_2 = var_28.d
    
    if (esi s>= 0)
        result = (*(ecx_2 + 0x144) - *(ecx_2 + 0x140)) s>> 2
        
        if (esi s< result)
            result = sub_64cb70(*(*(ecx_2 + 0x140) + (esi << 2)), edx_2)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
