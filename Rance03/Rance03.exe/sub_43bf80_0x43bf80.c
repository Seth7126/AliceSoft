// 函数: sub_43bf80
// 地址: 0x43bf80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6400
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t* lpBuffer_1 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_4 = 0
sub_403540(&lpBuffer_1, 0x1c)
uint32_t numberOfBytesRead
uint32_t numberOfBytesRead_1 = numberOfBytesRead
uint8_t* lpBuffer = lpBuffer_1
HANDLE hFile = *(numberOfBytesRead_1 + 4)
BOOL result

if (hFile == 0xffffffff || *(numberOfBytesRead_1 + 8) + 0x1c u> *(numberOfBytesRead_1 + 0xc))
    numberOfBytesRead_1.b = 0
else if (ReadFile(hFile, lpBuffer, 0x1c, &numberOfBytesRead, nullptr) == 0
        || numberOfBytesRead != 0x1c)
    numberOfBytesRead_1.b = 0
else
    *(numberOfBytesRead_1 + 8) += 0x1c
    void* edx_1 = &lpBuffer[8]
    int32_t* ecx_1 = &data_74f59c
    int32_t esi_1 = data_74f5ac
    
    if (data_74f5b0 u>= 0x10)
        ecx_1 = data_74f59c
    
    int32_t i_1 = esi_1 - 4
    
    if (esi_1 u>= 4)
        int32_t i
        
        do
            if (*edx_1 != *ecx_1)
                goto label_43c056
            
            edx_1 += 4
            ecx_1 = &ecx_1[1]
            i = i_1
            i_1 -= 4
        while (i u>= 4)
    
    if (i_1 == 0xfffffffc)
    label_43c099:
        
        if (var_30 - lpBuffer s< 0x14 || (((zx.d(lpBuffer[0x13]) << 8 | zx.d(lpBuffer[0x12])) << 8
                | zx.d(lpBuffer[0x11])) << 8 | zx.d(lpBuffer[0x10])) != 2)
            numberOfBytesRead_1.b = 0
        else
        label_43c0db:
            uint32_t eax_7
            eax_7.b = sub_43c260(&lpBuffer_1, 0x14) == 1
            *(arg1 + 8) = eax_7.b
            uint32_t eax_8 = sub_43c260(&lpBuffer_1, 0x18)
            uint8_t* var_28 = nullptr
            int32_t var_24_1 = 0
            int32_t var_20_1 = 0
            *arg5 = eax_8
            var_4.b = 1
            sub_403540(&var_28, 0x10)
            sub_6052e0(numberOfBytesRead_1, 0x1c)
            uint8_t* ebp_1 = var_28
            
            if (sub_604e90(numberOfBytesRead_1, ebp_1, 0x10).b != 0)
                uint32_t* esi_2 = sub_43c260(&var_28, 4) - 0x10
                numberOfBytesRead = sub_43c260(&var_28, 8)
                uint32_t eax_11 = sub_43c260(&var_28, 0xc)
                uint8_t* var_1c = nullptr
                int32_t var_18_1 = 0
                int32_t var_14_1 = 0
                *arg3 = eax_11
                var_4.b = 2
                sub_403540(&var_1c, esi_2)
                
                if (sub_604e90(numberOfBytesRead_1, var_1c, esi_2) != 0)
                    numberOfBytesRead_1 = numberOfBytesRead
                    arg2[1] = *arg2
                    sub_403540(arg2, numberOfBytesRead_1)
                    struct commonsystemdata::CZlibDecompressor::VTable* var_3c =
                        &commonsystemdata::CZlibDecompressor::`vftable'
                    int32_t* var_38_1 = nullptr
                    var_4.b = 3
                    
                    if (sub_451e10(&var_3c) == 0 || var_38_1 == 0)
                        numberOfBytesRead_1.b = 0
                    else if ((*(*var_38_1 + 8))(*arg2, numberOfBytesRead_1, var_1c, esi_2) == 0)
                        numberOfBytesRead_1.b = 0
                    else
                        *arg4 = numberOfBytesRead_1
                        numberOfBytesRead_1.b = 1
                    
                    var_4.b = 2
                    sub_451df0(&var_3c)
                else
                    numberOfBytesRead_1.b = 0
                
                sub_403510(&var_1c)
            else
                numberOfBytesRead_1.b = 0
            
            if (ebp_1 != 0)
                j__free(ebp_1)
    else
    label_43c056:
        result.b = *edx_1
        
        if (result.b != *ecx_1)
            numberOfBytesRead_1.b = 0
        else
            if (i_1 == 0xfffffffd)
                goto label_43c099
            
            result.b = *(edx_1 + 1)
            
            if (result.b != *(ecx_1 + 1))
                numberOfBytesRead_1.b = 0
            else
                if (i_1 == 0xfffffffe)
                    goto label_43c099
                
                result.b = *(edx_1 + 2)
                
                if (result.b != *(ecx_1 + 2))
                    numberOfBytesRead_1.b = 0
                else
                    if (i_1 == 0xffffffff)
                        goto label_43c099
                    
                    result.b = *(edx_1 + 3)
                    
                    if (result.b == *(ecx_1 + 3) && var_30 - lpBuffer s>= 0x14 && ((
                            (zx.d(lpBuffer[0x13]) << 8 | zx.d(lpBuffer[0x12])) << 8
                            | zx.d(lpBuffer[0x11])) << 8 | zx.d(lpBuffer[0x10])) == 2)
                        goto label_43c0db
                    
                    numberOfBytesRead_1.b = 0

if (lpBuffer != 0)
    j__free(lpBuffer)

result.b = numberOfBytesRead_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
