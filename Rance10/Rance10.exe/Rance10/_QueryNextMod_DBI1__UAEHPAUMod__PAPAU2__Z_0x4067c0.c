// 函数: ?QueryNextMod@DBI1@@UAEHPAUMod@@PAPAU2@@Z
// 地址: 0x4067c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_1c = 1
int32_t var_8_1 = 0
int32_t* eax_5 = *(arg1 + 0xc)
void** esi = *eax_5
int32_t result

if (esi == eax_5)
label_406881:
    LeaveCriticalSection(*(arg1 + 8) + 4)
    
    while (true)
        EnterCriticalSection(*(arg1 + 8) + 4)
        int32_t esi_1 = *(arg1 + 0x14)
        result = LeaveCriticalSection(*(arg1 + 8) + 4)
        
        if (esi_1 != arg2)
            break
        
        Sleep(1)
else
    while (esi[2] != arg2)
        esi = *esi
        
        if (esi == eax_5)
            break
    
    if (esi == eax_5)
        goto label_406881
    
    (*(*esi[2] + 4))(eax_2)
    *esi[1] = *esi
    *(*esi + 4) = esi[1]
    *(arg1 + 0x10) -= 1
    sub_403160(esi, 1, 0xc)
    result = LeaveCriticalSection(*(arg1 + 8) + 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
