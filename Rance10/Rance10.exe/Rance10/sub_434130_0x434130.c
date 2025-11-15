// 函数: sub_434130
// 地址: 0x434130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a7d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL buffer
BOOL buffer_1

if (sub_67ed50(arg1 + 4, buffer).b != 0)
    HANDLE hFile = *(arg1 + 8)
    uint32_t numberOfBytesRead
    
    if (hFile != 0xffffffff && *(arg1 + 0xc) + 4 u<= *(arg1 + 0x10)
            && ReadFile(hFile, &buffer, 4, &numberOfBytesRead, nullptr) != 0
            && numberOfBytesRead == 4)
        *(arg1 + 0xc) += 4
        buffer_1 = buffer
        uint32_t var_14
        
        if (buffer_1.b == 0x41 && buffer_1:1.b == 0x50 && buffer:2.b == 0x45 && buffer:3.b == 0x47
                && sub_67f1b0(arg1 + 4, &var_14).b != 0)
            uint8_t* var_24 = nullptr
            int32_t var_20 = 0
            int32_t var_1c = 0
            int32_t var_8_1 = 0
            sub_405950(&var_24, var_14)
            uint8_t* ebx = var_24
            
            if (sub_67f160(arg1 + 4, ebx, var_14) != 0 && sub_434eb0(arg1 + 0x14, ebx) != 0)
                char eax_6
                
                if (*(arg1 + 0x14) u>= 2)
                    eax_6 = sub_4342e0(arg1)
                
                if (*(arg1 + 0x14) u< 2 || eax_6 != 0)
                    *(arg1 + 0xb0) = *(arg1 + 0xac)
                    char eax_8
                    
                    if (*(arg1 + 0x14) u>= 1)
                        eax_8 = sub_4343a0(arg1)
                    
                    if (*(arg1 + 0x14) u< 1 || eax_8 != 0)
                        sub_448370(arg1 + 0xb8)
                        *(arg1 + 0x408) = 0
                        *(arg1 + 0x40c) = 0
                        sub_4059a0(&var_24)
                        int32_t eax_9
                        eax_9.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_9
            
            sub_4059a0(&var_24)
            int32_t eax_10
            eax_10.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10

buffer_1.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return buffer_1
