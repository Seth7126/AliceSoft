// 函数: sub_424950
// 地址: 0x424950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7295c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1

if (esi[4] != 0)
    result = (**data_7fcb70)(eax_2)
    int32_t* edi_1 = data_7fcb70
    
    if (edi_1 != 0)
        int32_t* lpFile_1
        sub_403360(&lpFile_1, "C:\Program Files\EmEditor\EmEditor.exe")
        int32_t var_8_1 = 0
        char var_78
        sub_403360(&var_78, "/l %d /cl %d "%s"")
        var_8_1.b = 1
        
        if (esi[5] u>= 0x10)
            esi = *esi
        
        PSTR lpParameters_1
        void arg_8
        sub_424ea0(&arg_8, &var_78, &lpParameters_1, &arg_8, arg2, esi)
        var_8_1.b = 3
        int32_t var_64
        
        if (var_64 u>= 0x10)
            sub_403160(var_78.d, var_64 + 1, 1)
        
        int32_t var_64_1 = 0xf
        int32_t var_68_1 = 0
        int32_t eax_8 = *(edi_1[1] + 4)
        var_78 = 0
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        
        if (eax_8(0x75d6f4) != 0)
            struct IString::common::CStringWrapper::VTable* var_60 =
                &common::CStringWrapper::`vftable'{for `IString'}
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            char var_5c = 0
            var_8_1.b = 4
            int32_t* lpFile_2 = &lpFile_1
            
            if (result_1 u>= 0x10)
                lpFile_2 = lpFile_1
            
            (*(edi_1[1] + 0x10))(&var_60, 0x75d71c, lpFile_2)
            char* eax_10 = &var_5c
            
            if (var_48_1 u>= 0x10)
                eax_10 = var_5c.d
            
            sub_403450(eax_10)
            var_8_1.b = 3
            sub_404c60(&var_60)
        
        (*(*edi_1 + 4))()
        PSTR lpParameters = &lpParameters_1
        int32_t var_30
        
        if (var_30 u>= 0x10)
            lpParameters = lpParameters_1
        
        int32_t* lpFile = &lpFile_1
        
        if (result_1 u>= 0x10)
            lpFile = lpFile_1
        
        ShellExecuteA(nullptr, "open", lpFile, lpParameters, nullptr, SW_SHOWNORMAL)
        
        if (var_30 u>= 0x10)
            sub_403160(lpParameters_1, var_30 + 1, 1)
        
        result = result_1
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        lpParameters_1.b = 0
        
        if (result u>= 0x10)
            result = sub_403160(lpFile_1, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
