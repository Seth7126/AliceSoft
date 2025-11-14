// 函数: sub_608140
// 地址: 0x608140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccdd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x24) = *(arg1 + 0x20)
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0
char* eax_4

if (cond:0)
    eax_4 = arg1 + 8
else
    eax_4 = *(arg1 + 8)

*eax_4 = 0
sub_41fff0(arg1 + 0x2c)
int32_t* ecx_1 = *(arg1 + 0x34)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x34) = 0

*(arg1 + 4) = 0
struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
HANDLE var_1c = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0
BOOL result
uint32_t nNumberOfBytesToRead

if (sub_6049e0(&var_20, arg2).b != 0)
    uint8_t* lpBuffer_2
    sub_448e90(&lpBuffer_2, 8)
    var_4.b = 1
    uint8_t* lpBuffer = lpBuffer_2
    int32_t var_28
    nNumberOfBytesToRead = var_28 - lpBuffer
    
    if (var_1c == 0xffffffff)
        nNumberOfBytesToRead.b = 0
    else
        result = var_18 + nNumberOfBytesToRead
        uint32_t numberOfBytesRead
        
        if (result u> var_14)
            nNumberOfBytesToRead.b = 0
        else if (ReadFile(var_1c, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr) == 0
                || nNumberOfBytesToRead != numberOfBytesRead)
            nNumberOfBytesToRead.b = 0
        else
            BOOL result_2 = result
            struct fileimage::CFileImageAnalyser::VTable* const var_50 =
                &fileimage::CFileImageAnalyser::`vftable'
            uint8_t* lpBuffer_1 = lpBuffer
            void* var_48_1 = &lpBuffer[nNumberOfBytesToRead]
            var_4.b = 2
            BOOL result_1
            
            if (sub_6084b0(&var_50).b == 0)
                nNumberOfBytesToRead.b = 0
            else if (sub_604ee0(&var_20, &result_1).b == 0)
                nNumberOfBytesToRead.b = 0
            else
                result = result_1
                
                if (result s> 0)
                    uint32_t nNumberOfBytesToRead_2
                    sub_448e90(&nNumberOfBytesToRead_2, result)
                    var_4.b = 3
                    nNumberOfBytesToRead = nNumberOfBytesToRead_2
                    int32_t var_34
                    uint32_t eax_10 = var_34 - nNumberOfBytesToRead
                    
                    if (sub_604e90(&var_20, nNumberOfBytesToRead, eax_10) == 0)
                        nNumberOfBytesToRead.b = 0
                        sub_403510(&nNumberOfBytesToRead_2)
                    else
                        struct fileimage::CFileImageAnalyser::VTable* const var_44 =
                            &fileimage::CFileImageAnalyser::`vftable'
                        uint32_t nNumberOfBytesToRead_1 = nNumberOfBytesToRead
                        uint32_t var_3c_1 = eax_10 + nNumberOfBytesToRead
                        var_4.b = 4
                        
                        if (sub_608580(arg1, &var_44) == 0)
                            nNumberOfBytesToRead.b = 0
                            sub_403510(&nNumberOfBytesToRead_2)
                        else
                            struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_15 =
                                sub_620fa0()
                            *(arg1 + 0x34) = eax_15
                            
                            if (eax_15 == 0)
                                nNumberOfBytesToRead.b = 0
                                sub_403510(&nNumberOfBytesToRead_2)
                            else
                                *(arg1 + 4) = 1
                                
                                if (arg1 + 8 != arg2)
                                    sub_401ff0(arg1 + 8, arg2, 0, 0xffffffff)
                                
                                nNumberOfBytesToRead.b = 1
                                sub_403510(&nNumberOfBytesToRead_2)
                else
                    nNumberOfBytesToRead.b = 1
    
    if (lpBuffer != 0)
        j__free(lpBuffer)
else
    nNumberOfBytesToRead.b = 0

if (var_1c != 0xffffffff)
    CloseHandle(var_1c)

result.b = nNumberOfBytesToRead.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
