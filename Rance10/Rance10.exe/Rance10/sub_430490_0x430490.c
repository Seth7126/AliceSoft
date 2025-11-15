// 函数: sub_430490
// 地址: 0x430490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a2d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t* lpBuffer_1
sub_431b80(&lpBuffer_1, 0x1c)
int32_t var_8_1 = 0
uint32_t numberOfBytesRead
uint32_t numberOfBytesRead_1 = numberOfBytesRead
uint8_t* lpBuffer = lpBuffer_1
HANDLE hFile = *(numberOfBytesRead_1 + 8)
int32_t* result

if (hFile == 0xffffffff || *(numberOfBytesRead_1 + 0xc) + 0x1c u> *(numberOfBytesRead_1 + 0x10))
    numberOfBytesRead_1.b = 0
else if (ReadFile(hFile, lpBuffer, 0x1c, &numberOfBytesRead, nullptr) == 0
        || numberOfBytesRead != 0x1c)
    numberOfBytesRead_1.b = 0
else
    *(numberOfBytesRead_1 + 0xc) += 0x1c
    void* edx_1 = &lpBuffer[8]
    int32_t* ecx_1 = &data_7fcc40
    int32_t esi_1 = data_7fcc50
    
    if (data_7fcc54 u>= 0x10)
        ecx_1 = data_7fcc40
    
    int32_t i_1 = esi_1 - 4
    
    if (esi_1 u>= 4)
        int32_t i
        
        do
            if (*edx_1 != *ecx_1)
                goto label_43054a
            
            edx_1 += 4
            ecx_1 = &ecx_1[1]
            i = i_1
            i_1 -= 4
        while (i u>= 4)
    
    int32_t var_38
    
    if (i_1 == 0xfffffffc)
    label_43058c:
        
        if (var_38 - lpBuffer s< 0x14 || (((zx.d(lpBuffer[0x13]) << 8 | zx.d(lpBuffer[0x12])) << 8
                | zx.d(lpBuffer[0x11])) << 8 | zx.d(lpBuffer[0x10])) != 2)
            numberOfBytesRead_1.b = 0
        else
        label_4305d0:
            uint32_t eax_7
            eax_7.b = sub_430e70(&lpBuffer_1, 0x14) == 1
            *(arg1 + 8) = eax_7.b
            uint32_t eax_8 = sub_430e70(&lpBuffer_1, 0x18)
            uint8_t* var_24 = nullptr
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            *arg5 = eax_8
            var_8_1.b = 1
            sub_405950(&var_24, 0x10)
            sub_5f23c0(numberOfBytesRead_1, 0x1c)
            
            if (sub_5f2320(numberOfBytesRead_1, var_24, 0x10) != 0)
                uint32_t* esi_2 = sub_430e70(&var_24, 4) - 0x10
                numberOfBytesRead = sub_430e70(&var_24, 8)
                uint32_t eax_12 = sub_430e70(&var_24, 0xc)
                uint8_t* var_30 = nullptr
                int32_t var_2c_1 = 0
                int32_t var_28_1 = 0
                *arg3 = eax_12
                var_8_1.b = 2
                sub_405950(&var_30, esi_2)
                
                if (sub_5f2320(numberOfBytesRead_1, var_30, esi_2) != 0)
                    numberOfBytesRead_1 = numberOfBytesRead
                    arg2[1] = *arg2
                    sub_405950(arg2, numberOfBytesRead_1)
                    struct commonsystemdata::CZlibDecompressor::VTable* var_18 =
                        &commonsystemdata::CZlibDecompressor::`vftable'
                    int32_t* var_14_1 = nullptr
                    var_8_1.b = 3
                    
                    if (sub_454990(&var_18) == 0 || var_14_1 == 0)
                        numberOfBytesRead_1.b = 0
                    else if ((*(*var_14_1 + 8))(*arg2, numberOfBytesRead_1, var_30, esi_2) == 0)
                        numberOfBytesRead_1.b = 0
                    else
                        *arg4 = numberOfBytesRead_1
                        numberOfBytesRead_1.b = 1
                    
                    std::basic_filebuf<char,struct std::char_traits<char> >::~basic_filebuf<char,struct std::char_traits<char> >(
                        &var_18)
                else
                    numberOfBytesRead_1.b = 0
                
                sub_4059a0(&var_30)
                sub_4059a0(&var_24)
            else
                numberOfBytesRead_1.b = 0
                sub_4059a0(&var_24)
    else
    label_43054a:
        result.b = *edx_1
        
        if (result.b != *ecx_1)
            numberOfBytesRead_1.b = 0
        else
            if (i_1 == 0xfffffffd)
                goto label_43058c
            
            result.b = *(edx_1 + 1)
            
            if (result.b != *(ecx_1 + 1))
                numberOfBytesRead_1.b = 0
            else
                if (i_1 == 0xfffffffe)
                    goto label_43058c
                
                result.b = *(edx_1 + 2)
                
                if (result.b != *(ecx_1 + 2))
                    numberOfBytesRead_1.b = 0
                else
                    if (i_1 == 0xffffffff)
                        goto label_43058c
                    
                    result.b = *(edx_1 + 3)
                    
                    if (result.b == *(ecx_1 + 3) && var_38 - lpBuffer s>= 0x14 && ((
                            (zx.d(lpBuffer[0x13]) << 8 | zx.d(lpBuffer[0x12])) << 8
                            | zx.d(lpBuffer[0x11])) << 8 | zx.d(lpBuffer[0x10])) == 2)
                        goto label_4305d0
                    
                    numberOfBytesRead_1.b = 0

int32_t var_34

if (lpBuffer != 0)
    sub_403160(lpBuffer, var_34 - lpBuffer, 1)
result.b = numberOfBytesRead_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
