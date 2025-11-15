// 函数: sub_67c610
// 地址: 0x67c610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746788
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_54 = ebx
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_44 = &filesystem::CFile::`vftable'
HANDLE hFile = 0xffffffff
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_8_1 = 0
HANDLE hFile_1 = hFile
BOOL lpBuffer

if (sub_67ece0(&var_44, arg2).b == 0)
label_67c78a:
    ebx.b = 0
else
    int32_t* esi_1 = *(arg1 + 4)
    int32_t edi_1 = *(arg1 + 8)
    
    if (esi_1 != edi_1)
        ebx = var_3c
        
        do
            lpBuffer = *esi_1 + 4
            uint32_t nNumberOfBytesToWrite_1 = *(lpBuffer + 0x10)
            
            if (nNumberOfBytesToWrite_1 s> 0)
                if (*(lpBuffer + 0x14) u>= 0x10)
                    lpBuffer = *lpBuffer
                
                if (hFile_1 == 0xffffffff)
                    goto label_67c78a_1
                
                uint32_t numberOfBytesWritten_1
                
                if (WriteFile(hFile_1, lpBuffer, nNumberOfBytesToWrite_1, &numberOfBytesWritten_1, 
                        nullptr) == 0)
                    goto label_67c787
                
                lpBuffer = nNumberOfBytesToWrite_1
                
                if (lpBuffer != numberOfBytesWritten_1)
                    goto label_67c787
                
                ebx += lpBuffer
                int32_t var_3c_1 = ebx
            
            BOOL lpBuffer_2 = 0xf
            uint32_t nNumberOfBytesToWrite = 0
            char var_2c = 0
            sub_403490(&var_2c, "\r\n", 2)
            char var_2d_1
            
            if (nNumberOfBytesToWrite s<= 0)
                lpBuffer = lpBuffer_2
                var_2d_1 = 1
            else
                lpBuffer = lpBuffer_2
                char* lpBuffer_1 = &var_2c
                
                if (lpBuffer u>= 0x10)
                    lpBuffer_1 = var_2c.d
                
                uint32_t numberOfBytesWritten
                
                if (hFile == 0xffffffff)
                    var_2d_1 = 0
                else if (WriteFile(hFile, lpBuffer_1, nNumberOfBytesToWrite, &numberOfBytesWritten, 
                        nullptr) == 0 || nNumberOfBytesToWrite != numberOfBytesWritten)
                    lpBuffer = lpBuffer_2
                    var_2d_1 = 0
                else
                    ebx += nNumberOfBytesToWrite
                    int32_t var_3c_2 = ebx
                    lpBuffer = lpBuffer_2
                    var_2d_1 = 1
            
            if (lpBuffer u>= 0x10)
                sub_403160(var_2c.d, lpBuffer + 1, 1)
            
            hFile_1 = hFile
            
            if (var_2d_1 == 0)
                goto label_67c78a_1
            
            esi_1 = &esi_1[1]
        while (esi_1 != edi_1)
    
    if (hFile_1 == 0xffffffff)
        ebx.b = 1
    else if (CloseHandle(hFile_1) == 0)
    label_67c787:
        hFile_1 = hFile
    label_67c78a_1:
        ebx.b = 0
    else
        hFile_1 = 0xffffffff
        ebx.b = 1

if (hFile_1 != 0xffffffff)
    CloseHandle(hFile_1)

lpBuffer.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return lpBuffer
