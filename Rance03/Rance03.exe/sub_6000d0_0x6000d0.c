// 函数: sub_6000d0
// 地址: 0x6000d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc6e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_48 = &filesystem::CFile::`vftable'
void* var_40 = nullptr
int32_t var_3c = 0
int32_t var_4 = 0
HANDLE ebp = 0xffffffff
BOOL lpBuffer
uint32_t nNumberOfBytesToWrite_1

if (sub_604970(&var_48, arg2).b == 0)
label_600256:
    nNumberOfBytesToWrite_1.b = 0
else
    int32_t* i = *(arg1 + 4)
    
    if (i != *(arg1 + 8))
        void* edi_1 = var_40
        
        do
            lpBuffer = *i + 4
            nNumberOfBytesToWrite_1 = *(lpBuffer + 0x10)
            
            if (nNumberOfBytesToWrite_1 s> 0)
                if (*(lpBuffer + 0x14) u>= 0x10)
                    lpBuffer = *lpBuffer
                
                if (ebp == 0xffffffff)
                    goto label_600256_1
                
                uint32_t numberOfBytesWritten_1
                
                if (WriteFile(ebp, lpBuffer, nNumberOfBytesToWrite_1, &numberOfBytesWritten_1, 
                        nullptr) == 0)
                    goto label_600256_1
                
                if (nNumberOfBytesToWrite_1 != numberOfBytesWritten_1)
                    goto label_600256_1
                
                edi_1 += nNumberOfBytesToWrite_1
                void* var_40_1 = edi_1
            
            int32_t var_18_1 = 0xf
            uint32_t nNumberOfBytesToWrite = 0
            char var_2c = 0
            sub_402110(&var_2c, 0x6ebaa0, 2)
            
            if (nNumberOfBytesToWrite s<= 0)
                lpBuffer.b = 1
            else
                lpBuffer = &var_2c
                
                if (var_18_1 u>= 0x10)
                    lpBuffer = var_2c.d
                
                uint32_t numberOfBytesWritten
                
                if (ebp != 0xffffffff)
                    lpBuffer = WriteFile(ebp, lpBuffer, nNumberOfBytesToWrite, 
                        &numberOfBytesWritten, nullptr)
                
                if (ebp == 0xffffffff || lpBuffer == 0
                        || nNumberOfBytesToWrite != numberOfBytesWritten)
                    lpBuffer.b = 0
                else
                    edi_1 += nNumberOfBytesToWrite
                    void* var_40_2 = edi_1
                    lpBuffer.b = 1
            
            nNumberOfBytesToWrite_1.b = lpBuffer.b == 0
            
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            if (nNumberOfBytesToWrite_1.b != 0)
                goto label_600256_1
            
            i = &i[1]
        while (i != *(arg1 + 8))
    
    if (ebp == 0xffffffff)
        nNumberOfBytesToWrite_1.b = 1
    else if (CloseHandle(ebp) == 0)
    label_600256_1:
        nNumberOfBytesToWrite_1.b = 0
    else
        ebp = 0xffffffff
        nNumberOfBytesToWrite_1.b = 1

if (ebp != 0xffffffff)
    CloseHandle(ebp)

lpBuffer.b = nNumberOfBytesToWrite_1.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return lpBuffer
