// 函数: sub_4424f0
// 地址: 0x4424f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lDistanceToMove = *(arg1 + 0x408)
struct _EXCEPTION_REGISTRATION_RECORD** buffer_1

if (lDistanceToMove != 0)
    HANDLE hFile = *(arg1 + 8)
    
    if (hFile != 0xffffffff && lDistanceToMove u< *(arg1 + 0x10))
        SetFilePointer(hFile, lDistanceToMove, nullptr, FILE_BEGIN)
        *(arg1 + 0xc) = lDistanceToMove
    
    buffer_1 = *(arg1 + 0xd4)
    
    if (buffer_1 != 0)
        buffer_1[0xc].b = 0
        *(arg1 + 0xd4) = 0
    
    *(arg1 + 0x408) = 0
    *(arg1 + 0x40c) = 1

HANDLE hFile_1 = *(arg1 + 8)
struct _EXCEPTION_REGISTRATION_RECORD** buffer
uint32_t numberOfBytesRead

if (hFile_1 != 0xffffffff && *(arg1 + 0xc) + 4 u<= *(arg1 + 0x10)
        && ReadFile(hFile_1, &buffer, 4, &numberOfBytesRead, nullptr) != 0
        && numberOfBytesRead == 4)
    *(arg1 + 0xc) += 4
    buffer_1 = buffer
    
    if (buffer_1:1.b == 0x50 && buffer:2.b == 0x49 && buffer:3.b == 0x43)
        int32_t edi
        
        if (buffer_1.b == 0x49)
            edi = 1
        label_4425f3:
            uint32_t var_20
            
            if (sub_604ee0(arg1 + 4, &var_20).b != 0)
                if (*(arg1 + 0x40c) != 0 && edi != 1)
                    sub_6052e0(arg1 + 4, *(arg1 + 0xc) + var_20)
                    int32_t eax_6 = sub_4424f0(arg2, arg3)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_6
                
                uint8_t* var_18 = nullptr
                int32_t var_14 = 0
                int32_t var_10 = 0
                int32_t var_4 = 0
                sub_403540(&var_18, var_20)
                
                if (sub_604e90(arg1 + 4, var_18, var_20) != 0)
                    if (edi == 1)
                        sub_4468b0(arg1 + 0xbc, arg2, arg3, &var_18)
                        *(arg1 + 0x40c) = 0
                        sub_403510(&var_18)
                        int32_t eax_9
                        eax_9.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_9
                    
                    if (edi == 2)
                        sub_446a30(arg1 + 0xbc, arg2, arg3, &var_18)
                        *(arg1 + 0x40c) = 0
                        sub_403510(&var_18)
                        int32_t eax_8
                        eax_8.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_8
                
                sub_403510(&var_18)
                int32_t eax_10
                eax_10.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10
        else if (buffer_1.b == buffer_1:1.b)
            edi = 2
            goto label_4425f3

buffer_1.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return buffer_1
