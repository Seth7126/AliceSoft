// 函数: sub_67f200
// 地址: 0x67f200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7469b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
char* edi = nullptr
char* esi = nullptr
int32_t ebx = 0
char* var_2c = nullptr
char* var_28 = nullptr
int32_t var_24 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

while (true)
    HANDLE hFile = *(arg1 + 4)
    uint32_t numberOfBytesRead
    uint8_t buffer
    
    if (hFile != 0xffffffff && *(arg1 + 8) + 1 u<= *(arg1 + 0xc)
            && ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr) != 0
            && numberOfBytesRead == 1)
        arg1 = var_18
        result.b = buffer
        *(arg1 + 8) += 1
        
        if (result.b != 0)
            if (&buffer u< esi && edi u<= &buffer)
                result = &buffer - edi
                
                if (esi == ebx)
                    sub_405a20(&var_2c, 1)
                    ebx = var_24
                    esi = var_28
                    edi = var_2c
                    arg1 = var_18
                
                if (esi != 0)
                    result.b = *(edi + result)
                    *esi = result.b
                
                esi = &esi[1]
                var_28 = esi
                continue
            
            if (esi == ebx)
                sub_405a20(&var_2c, 1)
                ebx = var_24
                esi = var_28
                edi = var_2c
                result.b = buffer
                arg1 = var_18
            
            if (esi != 0)
                *esi = result.b
            
            esi = &esi[1]
            var_28 = esi
            continue
        
        buffer = 0
        void* eax_4
        
        if (&buffer u>= esi || edi u> &buffer)
            if (esi == ebx)
                sub_405a20(&var_2c, 1)
                ebx = var_24
                esi = var_28
                edi = var_2c
            
            if (esi != 0)
                *esi = 0
        else
            eax_4 = &buffer - edi
            
            if (esi == ebx)
                sub_405a20(&var_2c, 1)
                ebx = var_24
                esi = var_28
                edi = var_2c
            
            if (esi != 0)
                eax_4.b = *(edi + eax_4)
                *esi = eax_4.b
        
        void* var_28_1 = &esi[1]
        
        if (*edi != 0)
            char* ecx_5 = edi
            
            do
                eax_4.b = *ecx_5
                ecx_5 = &ecx_5[1]
            while (eax_4.b != 0)
            
            sub_403490(arg2, edi, ecx_5 - &ecx_5[1])
            result.b = 1
        else
            sub_403490(arg2, edi, nullptr)
            result.b = 1
        
        break
    
    result.b = 0
    break

if (edi != 0)
    sub_403160(edi, ebx - edi, 1)
    result.b = result.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
