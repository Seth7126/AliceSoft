// 函数: sub_433fb0
// 地址: 0x433fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b58c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1

if (data_75d534 != 0)
    int32_t ecx
    int32_t var_7c_1 = ecx
    result = sub_6203f0()
    
    if (result != 0)
        result = (*result)->Next(0x6db26c)
        
        if (result != 0)
            int32_t* lpFile_1
            sub_401f60(&lpFile_1, "C:\Program Files\EmEditor\EmEditor.exe")
            int32_t var_4 = 0
            
            if (esi[5] u>= 0x10)
                esi = *esi
            
            void** var_7c_2 = esi
            int32_t var_80_1 = arg3
            int32_t var_84_1 = arg2
            PSTR lpParameters_1
            sub_4691f0(&lpParameters_1, "/l %d /cl %d "%s"")
            var_4.b = 1
            
            if ((*result)->__offset(0x2c).d(0x6db1cc) != 0)
                struct IString::common::CStringWrapper::VTable* var_48 =
                    &common::CStringWrapper::`vftable'{for `IString'}
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                var_4.b = 2
                (*result)->__offset(0x4c).d(0x6db238, &var_48)
                char* eax_9 = &var_44
                
                if (var_30_1 u>= 0x10)
                    eax_9 = var_44.d
                
                sub_402670(&lpFile_1, eax_9)
                sub_402580(&var_48)
            
            PSTR lpParameters = &lpParameters_1
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                lpParameters = lpParameters_1
            
            int32_t* lpFile = &lpFile_1
            int32_t var_18
            
            if (var_18 u>= 0x10)
                lpFile = lpFile_1
            
            result = ShellExecuteA(nullptr, "open", lpFile, lpParameters, nullptr, SW_SHOWNORMAL)
            
            if (var_4c u>= 0x10)
                result = j__free(lpParameters_1)
            
            int32_t var_4c_1 = 0xf
            int32_t var_50_1 = 0
            lpParameters_1.b = 0
            
            if (var_18 u>= 0x10)
                result = j__free(lpFile_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
