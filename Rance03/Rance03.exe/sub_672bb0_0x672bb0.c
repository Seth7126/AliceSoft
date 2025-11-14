// 函数: sub_672bb0
// 地址: 0x672bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b60d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_esi
int32_t var_38 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void* eax_5 = *(arg1 + 0x5c)
char* lpText

if (*(eax_5 + 0xe0) == 0)
    lpText = &var_2c
else
    void* ecx = *(eax_5 + 0xdc)
    
    if (ecx == 0)
        lpText = &var_2c
    else
        int32_t eax_6 = *(eax_5 + 0x58)
        
        if (eax_6 != 0)
            if (eax_6 == 1)
                sub_402670(&var_2c, 0x6da917)
                goto label_672c41
            
            lpText = &var_2c
        else
            sub_664610(ecx, &var_2c)
        label_672c41:
            lpText = var_2c.d
            
            if (var_18 u< 0x10)
                lpText = &var_2c

enum MESSAGEBOX_RESULT result = MessageBoxA(arg2, lpText, 0x701b4c, MB_OK)

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
