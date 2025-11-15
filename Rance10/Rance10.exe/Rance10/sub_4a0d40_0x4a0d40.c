// 函数: sub_4a0d40
// 地址: 0x4a0d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730eb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_2 = (*(*arg2 + 0x10))(eax_2)
int32_t eax_4 = (*(*arg2 + 0x14))()
int32_t var_1a = 0x36
int32_t buffer = 0x28
int32_t var_58 = eax_4
uint32_t nNumberOfBytesToWrite = (i_2 * 3 + 3) & 0xfffffffc
int32_t var_44 = eax_4
int32_t var_40 = 0x180001
int32_t ecx_3 = nNumberOfBytesToWrite * eax_4
int16_t buffer_1 = 0x4d42
int32_t var_1e = 0
int32_t var_3c = 0
int32_t var_34 = 0
int32_t var_38 = ecx_3
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_22 = ecx_3 + 0x36
int32_t i_3 = i_2
struct filesystem::CFile::VTable* const var_68 = &filesystem::CFile::`vftable'
HANDLE hFile = 0xffffffff
int32_t var_60 = 0
int32_t var_5c = 0
int32_t var_8_1 = 0
HANDLE hFile_1 = hFile
uint32_t var_50

if (sub_67ece0(&var_68, arg1).b == 0 || hFile_1 == 0xffffffff)
    nNumberOfBytesToWrite.b = 0
else if (WriteFile(hFile_1, &buffer_1, 0xe, &var_50, nullptr) == 0 || var_50 != 0xe)
    nNumberOfBytesToWrite.b = 0
else if (WriteFile(hFile, &buffer, 0x28, &var_50, nullptr) == 0 || var_50 != 0x28)
    hFile_1 = hFile
    nNumberOfBytesToWrite.b = 0
else
    int32_t* esi_1 = arg2
    int32_t edi_2 = var_60 + 0x36
    int32_t var_60_1 = edi_2
    uint32_t eax_9 = (*(*esi_1 + 8))(0, var_58 - 1)
    int32_t edx_3 = *esi_1
    var_50 = eax_9
    int32_t eax_11 = neg.d((*(edx_3 + 0x1c))())
    char var_51 = 0
    uint8_t* lpBuffer = nullptr
    int32_t var_78_1 = 0
    int32_t var_74_1 = 0
    sub_4a3f20(&lpBuffer, nNumberOfBytesToWrite, &var_51)
    var_8_1.b = 1
    
    if (var_58 s<= 0)
    label_4a0f8c:
        hFile_1 = hFile
        
        if (CloseHandle(hFile_1) == 0)
            nNumberOfBytesToWrite.b = 0
        else
            hFile_1 = 0xffffffff
            nNumberOfBytesToWrite.b = 1
    else
        while (true)
            bool cond:1_1
            
            if ((*(*esi_1 + 0x18))() != 0x18)
                if ((*(*esi_1 + 0x18))() == 0x20)
                    if (i_2 s> 0)
                        int32_t i_1 = i_2
                        void* edx_6 = var_50 + 2
                        void* eax_17 = &lpBuffer[1]
                        int32_t i
                        
                        do
                            char ecx_11 = *(edx_6 - 2)
                            edx_6 += 4
                            *(eax_17 + 1) = ecx_11
                            eax_17 += 3
                            *(eax_17 - 3) = *(edx_6 - 5)
                            *(eax_17 - 4) = *(edx_6 - 4)
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        esi_1 = arg2
                    
                    uint32_t numberOfBytesWritten
                    
                    if (WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten, 
                            nullptr) == 0)
                        hFile_1 = hFile
                        break
                    
                    cond:1_1 = nNumberOfBytesToWrite != numberOfBytesWritten
                    goto label_4a0f6d
            else
                uint32_t numberOfBytesWritten_1
                
                if (WriteFile(hFile, var_50, nNumberOfBytesToWrite, &numberOfBytesWritten_1, 
                        nullptr) == 0)
                    hFile_1 = hFile
                    break
                
                cond:1_1 = nNumberOfBytesToWrite != numberOfBytesWritten_1
            label_4a0f6d:
                
                if (cond:1_1)
                    hFile_1 = hFile
                    break
                
                edi_2 += nNumberOfBytesToWrite
                int32_t var_60_2 = edi_2
            var_50 += eax_11
            int32_t eax_20 = var_58 - 1
            var_58 = eax_20
            
            if (eax_20 s<= 0)
                goto label_4a0f8c
        
        nNumberOfBytesToWrite.b = 0
    
    uint8_t* lpBuffer_1 = lpBuffer
    
    if (lpBuffer_1 != 0)
        sub_403160(lpBuffer_1, var_74_1 - lpBuffer_1, 1)

if (hFile_1 != 0xffffffff)
    CloseHandle(hFile_1)

BOOL result
result.b = nNumberOfBytesToWrite.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
