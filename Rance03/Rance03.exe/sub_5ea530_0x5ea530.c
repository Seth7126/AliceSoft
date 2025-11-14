// 函数: sub_5ea530
// 地址: 0x5ea530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb7d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t numberOfBytesWritten
int32_t eax_2 = __security_cookie ^ &numberOfBytesWritten
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_2 = *(arg1 + 0x60)
int32_t ebp = *(arg1 + 0x64)
int16_t buffer = 0x4d42
uint32_t nNumberOfBytesToWrite = ((i_2 + 1) * 3) & 0xfffffffc
int32_t var_7c = ebp
int32_t ecx_1 = nNumberOfBytesToWrite * ebp
int32_t var_42 = 0
int32_t var_3e = 0x36
int32_t buffer_1 = 0x28
int32_t i_3 = i_2
int32_t var_30 = ebp
int32_t var_2c = 0x180001
int32_t var_28 = 0
int32_t var_24 = ecx_1
int32_t var_46 = ecx_1 + 0x36
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
struct filesystem::CFile::VTable* const var_70 = &filesystem::CFile::`vftable'
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_4 = 0
HANDLE ebp_1 = 0xffffffff
BOOL result

if (sub_604970(&var_70, arg2).b == 0 || ebp_1 == 0xffffffff)
    nNumberOfBytesToWrite.b = 0
else if (WriteFile(ebp_1, &buffer, 0xe, &numberOfBytesWritten, nullptr) == 0
        || numberOfBytesWritten != 0xe)
    nNumberOfBytesToWrite.b = 0
else if (WriteFile(ebp_1, &buffer_1, 0x28, &numberOfBytesWritten, nullptr) == 0
        || numberOfBytesWritten != 0x28)
    nNumberOfBytesToWrite.b = 0
else
    int32_t edi_1 = var_68 + 0x36
    int32_t var_68_1 = edi_1
    uint32_t eax_8 = (*(*arg3 + 8))(0, var_7c - 1)
    uint32_t lpBuffer_1 = eax_8
    numberOfBytesWritten = eax_8
    int32_t eax_10 = neg.d((*(*arg3 + 0x1c))(eax_4))
    void* lpBuffer
    char eax_11
    int32_t edx_3
    eax_11, edx_3 = sub_448e90(&lpBuffer, nNumberOfBytesToWrite)
    var_4.b = 1
    int32_t numberOfBytesWritten_1 = 0
    int32_t var_58
    sub_5ea890(eax_11, edx_3, &numberOfBytesWritten_1, lpBuffer, var_58)
    
    if (var_7c s<= 0)
    label_5ea7b5:
        
        if (CloseHandle(ebp_1) == 0)
            nNumberOfBytesToWrite.b = 0
        else
            ebp_1 = 0xffffffff
            nNumberOfBytesToWrite.b = 1
    else
        while (true)
            bool cond:0_1
            
            if ((*(*arg3 + 0x18))() == 0x18)
                if (WriteFile(ebp_1, lpBuffer_1, nNumberOfBytesToWrite, &numberOfBytesWritten_1, 
                        nullptr) == 0)
                    break
                
                cond:0_1 = nNumberOfBytesToWrite != numberOfBytesWritten_1
                goto label_5ea78d
            
            if ((*(*arg3 + 0x18))() == 0x20)
                if (i_2 s> 0)
                    void* edx_4 = lpBuffer_1 + 2
                    void* eax_18 = lpBuffer + 1
                    int32_t i_1 = i_2
                    int32_t i
                    
                    do
                        char ecx_10 = *(edx_4 - 2)
                        edx_4 += 4
                        *(eax_18 + 1) = ecx_10
                        eax_18 += 3
                        *(eax_18 - 3) = *(edx_4 - 5)
                        *(eax_18 - 4) = *(edx_4 - 4)
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    lpBuffer_1 = numberOfBytesWritten
                
                uint32_t numberOfBytesWritten_2
                
                if (WriteFile(ebp_1, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten_2, 
                        nullptr) == 0)
                    break
                
                cond:0_1 = nNumberOfBytesToWrite != numberOfBytesWritten_2
            label_5ea78d:
                
                if (cond:0_1)
                    break
                
                edi_1 += nNumberOfBytesToWrite
                int32_t var_68_2 = edi_1
            
            lpBuffer_1 += eax_10
            int32_t eax_21 = var_7c - 1
            numberOfBytesWritten = lpBuffer_1
            var_7c = eax_21
            
            if (eax_21 s<= 0)
                goto label_5ea7b5
        
        nNumberOfBytesToWrite.b = 0
    
    result = lpBuffer
    
    if (result != 0)
        j__free(result)

if (ebp_1 != 0xffffffff)
    CloseHandle(ebp_1)

result.b = nNumberOfBytesToWrite.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &numberOfBytesWritten)
return result
