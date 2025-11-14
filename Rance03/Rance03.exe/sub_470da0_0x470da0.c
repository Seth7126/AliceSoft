// 函数: sub_470da0
// 地址: 0x470da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9888
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t ExceptionRecord = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg3
struct filesystem::CFile::VTable* const var_70 = &filesystem::CFile::`vftable'
HANDLE hFile = 0xffffffff
*arg4 = 0
*arg2 = 0
void* var_68 = nullptr
int32_t var_64 = 0
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6049e0(&var_70, esi)
HANDLE hObject

if (result.b == 0)
    hObject = hFile
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_4.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t var_54 = 0
    int32_t var_58 = 0
    int32_t var_5c = 0
    char eax_4 = sub_605120(&var_70, &var_2c, 3)
    char eax_5
    
    if (eax_4 != 0)
        eax_5 = sub_40c250(&var_2c, 0x6dd418)
    
    if (eax_4 == 0 || eax_5 == 0)
        if (hFile != 0xffffffff && var_64 u> 0)
            SetFilePointer(hFile, 0, nullptr, FILE_BEGIN)
            var_68 = nullptr
        
        result = sub_605120(&var_70, &var_2c, 4)
        
        if (result.b != 0)
            result = sub_40c250(&var_2c, "RIFF")
            
            if (result.b != 0)
                result = sub_604ee0(&var_70, &var_54)
                
                if (result.b != 0 && var_54 != 0)
                    result = sub_605120(&var_70, &var_2c, 4)
                    
                    if (result.b != 0)
                        result = sub_40c250(&var_2c, "WAVE")
                        
                        if (result.b != 0)
                            result = sub_605120(&var_70, &var_2c, 4)
                            
                            while (result.b != 0)
                                result = sub_604ee0(&var_70, &result_1)
                                
                                if (result.b == 0)
                                    break
                                
                                result = result_1
                                
                                if (result == 0)
                                    break
                                
                                if (sub_40c250(&var_2c, "smpl") != 0)
                                    sub_6052e0(&var_70, var_68 + 0x2c)
                                    sub_604ee0(&var_70, arg2)
                                    result = sub_604ee0(&var_70, arg4)
                                    break
                                
                                if (sub_40c250(&var_2c, "fmt ") == 0)
                                    if (sub_40c250(&var_2c, "data") != 0)
                                        uint32_t temp0_2 =
                                            divu.dp.d(0:result_1, zx.d(var_58.w) u>> 3)
                                        uint32_t ecx_29 = zx.d(var_5c.w)
                                        *arg2 = 0
                                        *arg4 = divu.dp.d(0:temp0_2, ecx_29)
                                else
                                    sub_6052e0(&var_70, var_68 + 2)
                                    sub_604e90(&var_70, &var_5c, 2)
                                    sub_6052e0(&var_70, var_68 + 0xa)
                                    sub_604e90(&var_70, &var_58, 2)
                                
                                result = sub_6052e0(&var_70, var_68 + result)
                                
                                if (result.b == 0)
                                    break
                                
                                result = sub_605120(&var_70, &var_2c, 4)
        
        hObject = hFile
    else
        hObject = hFile
        
        if (hObject != 0xffffffff)
            if (CloseHandle(hObject) != 0)
                hObject = 0xffffffff
            
            HANDLE hObject_1 = hObject
        
        result = sub_637e30()
        
        if (result != 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            if ((*result)->__offset(0x8).d(esi, 0, 0xffffffff) != 0)
                struct IWaveFormat::kiwi::CWaveFormat::VTable* var_4c
                sub_4740c0(&var_4c)
                var_4.b = 2
                
                if ((*result)->__offset(0x20).d(&var_4c) != 0)
                    *arg2 = 0
                    *arg4 = divu.dp.d(0:((*result)->__offset(0x28).d(ExceptionRecord)), 
                        sub_4742b0(&var_4c))
                
                result = (*result)->Handler(ExceptionRecord)
            else
                result = (*result)->Handler(ExceptionRecord)
    
    if (var_18_1 u>= 0x10)
        result = j__free(var_2c.d)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0

if (hObject != 0xffffffff)
    result = CloseHandle(hObject)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
