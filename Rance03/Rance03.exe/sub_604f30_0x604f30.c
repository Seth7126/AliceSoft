// 函数: sub_604f30
// 地址: 0x604f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_1c = ebp
char* ebx = nullptr
char* esi = nullptr
int32_t edi = 0
char* var_18 = nullptr
char* var_14 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

while (true)
    HANDLE hFile = *(ebp + 4)
    uint8_t buffer
    uint32_t numberOfBytesRead
    
    if (hFile != 0xffffffff && *(ebp + 8) + 1 u<= *(ebp + 0xc)
            && ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr) != 0
            && numberOfBytesRead == 1)
        uint8_t buffer_1 = buffer
        *(ebp + 8) += 1
        
        if (buffer_1 == 0)
            char var_21 = 0
            sub_414b60(&var_18, &var_21)
            ebx = var_18
            
            if (*ebx != 0)
                char* ecx_8 = ebx
                char i
                
                do
                    i = *ecx_8
                    ecx_8 = &ecx_8[1]
                while (i != 0)
                sub_402110(arg2.d, ebx, ecx_8 - &ecx_8[1])
                arg2 = 1
            else
                sub_402110(arg2.d, ebx, nullptr)
                arg2 = 1
            
            break
        
        if (&buffer u>= esi || ebx u> &buffer)
            if (esi == edi && edi - esi u< 1)
                if (ebx - esi - 1 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                void* edi_3 = edi - ebx
                uint32_t ecx_4 = edi_3 u>> 1
                void* edi_4
                
                if (0xffffffff - ecx_4 u>= edi_3)
                    edi_4 = edi_3 + ecx_4
                else
                    edi_4 = nullptr
                
                if (edi_4 u< esi - ebx + 1)
                    edi_4 = esi - ebx + 1
                
                sub_403640(&var_18, edi_4)
                edi = var_10
                esi = var_14
                ebx = var_18
                buffer_1 = buffer
            
            if (esi != 0)
                *esi = buffer_1
            
            esi = &esi[1]
            var_14 = esi
            continue
        
        void* ebp_1 = &buffer - ebx
        
        if (esi != edi || edi - esi u>= 1)
        label_605023:
            
            if (esi != 0)
                result.b = *(ebx + ebp_1)
                *esi = result.b
            
            ebp = var_1c
            esi = &esi[1]
            var_14 = esi
            continue
        else if (ebx - esi - 1 u>= 1)
            void* edi_1 = edi - ebx
            uint32_t ecx_1 = edi_1 u>> 1
            void* edi_2
            
            if (0xffffffff - ecx_1 u>= edi_1)
                edi_2 = edi_1 + ecx_1
            else
                edi_2 = nullptr
            
            if (edi_2 u< esi - ebx + 1)
                edi_2 = esi - ebx + 1
            
            sub_403640(&var_18, edi_2)
            edi = var_10
            esi = var_14
            ebx = var_18
            goto label_605023
        
        sub_69a551("vector<T> too long")
        noreturn
    
    arg2 = 0
    break

if (ebx != 0)
    j__free(ebx)

result.b = arg2
fsbase->NtTib.ExceptionList = ExceptionList
return result
