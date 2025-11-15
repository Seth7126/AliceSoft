// 函数: sub_67f3c0
// 地址: 0x67f3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7469e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg1
char* edi = nullptr
char* esi = nullptr
int32_t ebx = 0
char* var_30 = nullptr
char* var_2c = nullptr
int32_t var_28 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
int32_t arg_8
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg_8 s<= 0)
label_67f4c4:
    arg_8:3.b = 0
    void* eax_6
    
    if (&arg_8:3 u>= esi || edi u> &arg_8:3)
        if (esi == ebx)
            sub_405a20(&var_30, 1)
            ebx = var_28
            esi = var_2c
            edi = var_30
        
        if (esi != 0)
            *esi = 0
    else
        eax_6 = &arg_8:3 - edi
        
        if (esi == ebx)
            sub_405a20(&var_30, 1)
            ebx = var_28
            esi = var_2c
            edi = var_30
        
        if (esi != 0)
            eax_6.b = *(edi + eax_6)
            *esi = eax_6.b
    
    void* var_2c_1 = &esi[1]
    void* ecx_4
    
    if (*edi != 0)
        char* ecx_5 = edi
        
        do
            eax_6.b = *ecx_5
            ecx_5 = &ecx_5[1]
        while (eax_6.b != 0)
        
        ecx_4 = ecx_5 - &ecx_5[1]
    else
        ecx_4 = nullptr
    
    sub_403490(arg2, edi, ecx_4)
    result.b = 1
else
    while (true)
        HANDLE hFile = *(arg1 + 4)
        uint32_t numberOfBytesRead
        uint8_t buffer
        
        if (hFile != 0xffffffff && *(arg1 + 8) + 1 u<= *(arg1 + 0xc)
                && ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr) != 0
                && numberOfBytesRead == 1)
            arg1 = var_18
            *(arg1 + 8) += 1
            uint8_t* eax_4
            
            if (&buffer u>= esi || edi u> &buffer)
                if (esi == ebx)
                    sub_405a20(&var_30, 1)
                    ebx = var_28
                    esi = var_2c
                    edi = var_30
                    arg1 = var_18
                
                if (esi != 0)
                    eax_4.b = buffer
                    *esi = eax_4.b
            else
                eax_4 = &buffer - edi
                
                if (esi == ebx)
                    sub_405a20(&var_30, 1)
                    ebx = var_28
                    esi = var_2c
                    edi = var_30
                    arg1 = var_18
                
                if (esi != 0)
                    eax_4.b = *(edi + eax_4)
                    *esi = eax_4.b
            esi = &esi[1]
            result = result_1 + 1
            var_2c = esi
            result_1 = result
            
            if (result s>= arg_8)
                goto label_67f4c4
            
            continue
        
        result.b = 0
        break

arg_8:3.b = result.b

if (edi != 0)
    sub_403160(edi, ebx - edi, 1)
    result.b = arg_8:3.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
