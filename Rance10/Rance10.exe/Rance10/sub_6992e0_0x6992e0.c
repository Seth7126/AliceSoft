// 函数: sub_6992e0
// 地址: 0x6992e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7363e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c
char* var_18

if (arg1[0x1b] != 0)
    void* esi_1 = &arg1[0x17]
    char* eax_3
    
    if (arg1[0x1c] u< 0x10)
        eax_3 = esi_1
    else
        eax_3 = *esi_1
    
    sub_403360(&var_2c, eax_3)
    int32_t var_8_1 = 0
    sub_45aae0(&var_2c)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, &var_18[1], 1)
    
    bool cond:1_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:1_1))
        esi_1 = *esi_1
    
    *esi_1 = 0

char* result

if (arg1[5] == 0 || arg1[6] != 0)
    if ((*(*arg1 + 0x18))(eax_2).b != 0)
        result.b = 1
    else
        HANDLE hEvent = arg1[0x12]
        
        if (hEvent != 0)
            ResetEvent(hEvent)
        
        HANDLE hEvent_1 = arg1[0x14]
        
        if (hEvent_1 != 0)
            ResetEvent(hEvent_1)
        
        if ((*(*arg1 + 0x50))().b != 0)
            result.b = 1
        else
            void var_44
            sub_403360(&var_44, 0x76f90c)
            int32_t var_8_4 = 2
            sub_45aae0(&var_44)
            sub_403320(&var_44)
            result.b = 0
else
    sub_403360(&var_2c, "CDirectSoundBuffer::Play()\n")
    int32_t var_8_3 = 1
    sub_45aae0(&var_2c)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, &var_18[1], 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
