// 函数: sub_681cf0
// 地址: 0x681cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746d48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_70 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_681fc0(arg1)
struct storage::CStorageFile::VTable* const var_60 = &storage::CStorageFile::`vftable'
struct filesystem::CFile::VTable* const var_5c = &filesystem::CFile::`vftable'
HANDLE var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_8_1 = 0
BOOL result
void* ebx

if (sub_5f21b0(&var_60, arg2).b != 0)
    uint8_t* lpBuffer_1
    sub_431b80(&lpBuffer_1, 8)
    var_8_1.b = 1
    uint8_t* lpBuffer = lpBuffer_1
    int32_t var_48
    uint32_t nNumberOfBytesToRead = var_48 - lpBuffer
    
    if (var_58 == 0xffffffff)
        ebx.b = 0
    else
        result = var_54 + nNumberOfBytesToRead
        uint32_t numberOfBytesRead
        
        if (result u> var_50)
            ebx.b = 0
        else if (ReadFile(var_58, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr) == 0
                || nNumberOfBytesToRead != numberOfBytesRead)
            ebx.b = 0
        else
            BOOL result_1 = result
            struct fileimage::CFileImageAnalyser::VTable* const var_28 =
                &fileimage::CFileImageAnalyser::`vftable'
            uint8_t* lpBuffer_2 = lpBuffer
            void* var_20_1 = &lpBuffer[nNumberOfBytesToRead]
            var_8_1.b = 2
            BOOL result_2
            
            if (sub_682060(&var_28).b == 0)
                ebx.b = 0
            else if (sub_5f2370(&var_60, &result_2).b == 0)
                ebx.b = 0
            else
                result = result_2
                
                if (result s> 0)
                    uint8_t* var_40
                    sub_431b80(&var_40, result)
                    var_8_1.b = 3
                    uint8_t* edi_2 = var_40
                    int32_t var_3c
                    uint32_t eax_7 = var_3c - edi_2
                    
                    if (sub_5f2320(&var_60, edi_2, eax_7) == 0)
                        ebx.b = 0
                        sub_4059a0(&var_40)
                    else
                        struct fileimage::CFileImageAnalyser::VTable* const var_34 =
                            &fileimage::CFileImageAnalyser::`vftable'
                        uint8_t* var_30_1 = edi_2
                        void* var_2c_1 = &edi_2[eax_7]
                        var_8_1.b = 4
                        
                        if (sub_682120(arg1, &var_34) == 0)
                            ebx.b = 0
                            sub_4059a0(&var_40)
                        else
                            int64_t* eax_12 = sub_6cc740()
                            *(arg1 + 0x34) = eax_12
                            
                            if (eax_12 == 0)
                                ebx.b = 0
                                sub_4059a0(&var_40)
                            else
                                *(arg1 + 4) = 1
                                
                                if (arg1 + 8 != arg2)
                                    sub_403590(arg1 + 8, arg2, 0, 0xffffffff)
                                
                                ebx.b = 1
                                sub_4059a0(&var_40)
                else
                    ebx.b = 1
    
    int32_t var_44
    
    if (lpBuffer != 0)
        sub_403160(lpBuffer, var_44 - lpBuffer, 1)
else
    ebx.b = 0

if (var_58 != 0xffffffff)
    CloseHandle(var_58)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
