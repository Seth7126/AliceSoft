// 函数: sub_605120
// 地址: 0x605120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca4c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_1c = ebp
char* edi = nullptr
char* esi = nullptr
int32_t ebx = 0
char* var_18 = nullptr
char* var_14 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s<= 0)
label_605230:
    char var_25 = 0
    
    if (&var_25 u>= esi || edi u> &var_25)
        if (esi == ebx)
            sub_403590(&var_18, 1)
            esi = var_14
            edi = var_18
        
        if (esi != 0)
            *esi = 0
    else
        int32_t ebp_2 = &var_25 - edi
        
        if (esi == ebx)
            sub_403590(&var_18, 1)
            esi = var_14
            edi = var_18
        
        if (esi != 0)
            *esi = edi[ebp_2]
    
    void* var_14_1 = &esi[1]
    void* ecx_4
    
    if (*edi != 0)
        char* ecx_5 = edi
        char i
        
        do
            i = *ecx_5
            ecx_5 = &ecx_5[1]
        while (i != 0)
        ecx_4 = ecx_5 - &ecx_5[1]
    else
        ecx_4 = nullptr
    
    sub_402110(arg2, edi, ecx_4)
    ebx.b = 1
else
    while (true)
        HANDLE hFile = *(ebp + 4)
        uint8_t buffer
        uint32_t numberOfBytesRead
        
        if (hFile != 0xffffffff && *(ebp + 8) + 1 u<= *(ebp + 0xc)
                && ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr) != 0
                && numberOfBytesRead == 1)
            *(ebp + 8) += 1
            
            if (&buffer u>= esi || edi u> &buffer)
                if (esi == ebx)
                    sub_403590(&var_18, 1)
                    ebx = var_10
                    esi = var_14
                    edi = var_18
                
                if (esi != 0)
                    *esi = buffer
            else
                void* ebp_1 = &buffer - edi
                
                if (esi == ebx)
                    sub_403590(&var_18, 1)
                    ebx = var_10
                    esi = var_14
                    edi = var_18
                
                if (esi != 0)
                    *esi = *(edi + ebp_1)
                
                ebp = var_1c
            
            esi = &esi[1]
            result = result_1 + 1
            var_14 = esi
            result_1 = result
            
            if (result s>= arg3)
                goto label_605230
            
            continue
        
        ebx.b = 0
        break

if (edi != 0)
    j__free(edi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
