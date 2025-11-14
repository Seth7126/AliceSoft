// 函数: sub_67d120
// 地址: 0x67d120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ab8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
void* var_30 = nullptr
char var_40 = 0
sub_402110(&var_40, 0x703498, 0xe)
int32_t var_4 = 0
int32_t result

if (*(arg1 + 0x38) != 1)
    if (*(arg1 + 0x1cc) == 0)
        *(arg1 + 0x1cc) = *(arg1 + 0x1d0)
    
    void* edi = arg1 + 0x48
    int32_t var_28
    char eax_7 = sub_4058a0(&var_40, sub_403070(edi, &var_28, 0, var_30))
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    int32_t var_44
    void* ebp_1
    void* esi_1
    
    if (eax_7 != 0)
        esi_1 = var_30
        ebp_1 = *(arg1 + 0x58)
        var_44 = 0x6da916
    
    if (eax_7 == 0 || esi_1 s>= ebp_1)
    label_67d24a:
        result = *(arg1 + 0x1cc)
    else
        void* eax_8 = ebp_1 - 1
        
        while (true)
            char* eax_9 = sub_403070(edi, &var_28, esi_1, eax_8)
            
            if (*(eax_9 + 0x14) u>= 0x10)
                eax_9 = *eax_9
            
            result = _strtoul(eax_9, &var_44, 0xa)
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            if (result != 0)
                *(arg1 + 0x1cc) = result
                break
            
            esi_1 += 1
            eax_8 = ebp_1 - 1
            edi = arg1 + 0x48
            
            if (esi_1 s>= ebp_1)
                goto label_67d24a
else
    result = *(arg1 + 0x1d0)

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
