// 函数: sub_63d770
// 地址: 0x63d770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bd88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL edx = data_7fcbc0
BOOL var_14 = edx

if (*(edx + 8) == 0xffffffff)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

uint32_t numberOfBytesWritten
uint32_t numberOfBytesWritten_1 = numberOfBytesWritten
int32_t eax_4 = *(numberOfBytesWritten_1 + 0x10)

if (eax_4 == 0)
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

uint8_t* lpBuffer = nullptr
uint8_t* lpBuffer_1 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0

if (eax_4 != 0)
    sub_405a80(&lpBuffer_1, eax_4)
    lpBuffer = lpBuffer_1
    edx = var_14

int32_t eax_5 = *(numberOfBytesWritten_1 + 0x10)
int32_t edi = 0

if (eax_5 s> 0)
    do
        int32_t eax_6 = *(numberOfBytesWritten_1 + 0x14)
        char* numberOfBytesWritten_5
        
        if (eax_6 u< 0x10)
            numberOfBytesWritten_5 = numberOfBytesWritten_1
        else
            numberOfBytesWritten_5 = *numberOfBytesWritten_1
        
        numberOfBytesWritten_5.b = numberOfBytesWritten_5[edi]
        uint32_t numberOfBytesWritten_3
        
        if (numberOfBytesWritten_5.b u< 0x81 || numberOfBytesWritten_5.b u> 0x9f)
            numberOfBytesWritten_5.b += 0x20
            
            if (numberOfBytesWritten_5.b u<= 0xf)
                goto label_63d836
            
            char* numberOfBytesWritten_6
            
            if (eax_6 u< 0x10)
                numberOfBytesWritten_6 = numberOfBytesWritten_1
            else
                numberOfBytesWritten_6 = *numberOfBytesWritten_1
            
            if (numberOfBytesWritten_6[edi] != 0xd)
                uint32_t numberOfBytesWritten_7
                
                if (eax_6 u< 0x10)
                    numberOfBytesWritten_7 = numberOfBytesWritten_1
                else
                    numberOfBytesWritten_7 = *numberOfBytesWritten_1
                
                if (*(numberOfBytesWritten_7 + edi) != 0xa)
                    if (eax_6 u< 0x10)
                        goto label_63d8be
                    
                    numberOfBytesWritten_3 = *numberOfBytesWritten_1
                    goto label_63d8c6
                
                if (*(edx + 0x14) == 0)
                    numberOfBytesWritten:3.b = 0xd
                    sub_4263a0(&lpBuffer_1, &numberOfBytesWritten:3)
                
                if (*(numberOfBytesWritten_1 + 0x14) u< 0x10)
                    goto label_63d8be
                
                numberOfBytesWritten_3 = *numberOfBytesWritten_1
                goto label_63d8c6
            
            uint32_t numberOfBytesWritten_4
            
            if (eax_6 u< 0x10)
                numberOfBytesWritten_4 = numberOfBytesWritten_1
            else
                numberOfBytesWritten_4 = *numberOfBytesWritten_1
            
            sub_4263a0(&lpBuffer_1, numberOfBytesWritten_4 + edi)
            edx = var_14
            *(edx + 0x14) = 1
        else
        label_63d836:
            uint32_t numberOfBytesWritten_2
            
            if (eax_6 u< 0x10)
                numberOfBytesWritten_2 = numberOfBytesWritten_1
            else
                numberOfBytesWritten_2 = *numberOfBytesWritten_1
            
            sub_4263a0(&lpBuffer_1, numberOfBytesWritten_2 + edi)
            edi += 1
            
            if (*(numberOfBytesWritten_1 + 0x14) u< 0x10)
            label_63d8be:
                numberOfBytesWritten_3 = numberOfBytesWritten_1
                goto label_63d8c6
            
            numberOfBytesWritten_3 = *numberOfBytesWritten_1
        label_63d8c6:
            sub_4263a0(&lpBuffer_1, numberOfBytesWritten_3 + edi)
            edx = var_14
            *(edx + 0x14) = 0
        edi += 1
    while (edi s< eax_5)
    
    lpBuffer = lpBuffer_1

BOOL hFile = *(edx + 8)
uint32_t nNumberOfBytesToWrite = var_1c - lpBuffer

if (hFile == 0xffffffff)
    numberOfBytesWritten:3.b = 0
else if (WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr) == 0
        || nNumberOfBytesToWrite != numberOfBytesWritten)
    numberOfBytesWritten:3.b = 0
else
    numberOfBytesWritten:3.b = 1
    *(var_14 + 0xc) += nNumberOfBytesToWrite

if (lpBuffer != 0)
    sub_403160(lpBuffer, var_18 - lpBuffer, 1)

hFile.b = numberOfBytesWritten:3.b
fsbase->NtTib.ExceptionList = ExceptionList
return hFile
