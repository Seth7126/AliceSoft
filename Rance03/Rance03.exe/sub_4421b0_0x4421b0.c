// 函数: sub_4421b0
// 地址: 0x4421b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL buffer
BOOL buffer_1

if (sub_6049e0(arg1 + 4, buffer).b != 0)
    HANDLE hFile = *(arg1 + 8)
    uint32_t numberOfBytesRead
    
    if (hFile != 0xffffffff && *(arg1 + 0xc) + 4 u<= *(arg1 + 0x10)
            && ReadFile(hFile, &buffer, 4, &numberOfBytesRead, nullptr) != 0
            && numberOfBytesRead == 4)
        *(arg1 + 0xc) += 4
        buffer_1 = buffer
        uint32_t var_20
        
        if (buffer_1.b == 0x41 && buffer_1:1.b == 0x50 && buffer:2.b == 0x45 && buffer:3.b == 0x47
                && sub_604ee0(arg1 + 4, &var_20).b != 0)
            uint8_t* var_18 = nullptr
            int32_t var_14 = 0
            int32_t var_10 = 0
            int32_t var_4 = 0
            sub_403540(&var_18, var_20)
            uint8_t* ebx = var_18
            
            if (sub_604e90(arg1 + 4, ebx, var_20) != 0 && sub_442850(arg1 + 0x14, ebx) != 0)
                char eax_6
                
                if (*(arg1 + 0x18) u>= 2)
                    eax_6 = sub_442370(arg1)
                
                if (*(arg1 + 0x18) u< 2 || eax_6 != 0)
                    *(arg1 + 0xb4) = *(arg1 + 0xb0)
                    char eax_8
                    
                    if (*(arg1 + 0x18) u>= 1)
                        eax_8 = sub_442430(arg1)
                    
                    if (*(arg1 + 0x18) u< 1 || eax_8 != 0)
                        sub_446860(arg1 + 0xbc)
                        *(arg1 + 0x408) = 0
                        *(arg1 + 0x40c) = 0
                        sub_403510(&var_18)
                        int32_t eax_9
                        eax_9.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_9
            
            sub_403510(&var_18)
            int32_t eax_10
            eax_10.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10

buffer_1.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return buffer_1
