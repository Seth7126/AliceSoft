// 函数: sub_434460
// 地址: 0x434460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a808
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lDistanceToMove = *(arg1 + 0x408)
struct _EXCEPTION_REGISTRATION_RECORD** buffer_1

if (lDistanceToMove != 0)
    HANDLE hFile = *(arg1 + 8)
    
    if (hFile != 0xffffffff && lDistanceToMove u< *(arg1 + 0x10))
        SetFilePointer(hFile, lDistanceToMove, nullptr, FILE_BEGIN)
        *(arg1 + 0xc) = lDistanceToMove
    
    void* eax_3 = *(arg1 + 0xd0)
    
    if (eax_3 != 0)
        *(eax_3 + 0x2d) = 0
        *(arg1 + 0xd0) = 0
    
    buffer_1 = *(arg1 + 0xd4)
    
    if (buffer_1 != 0)
        *(buffer_1 + 0x2d) = 0
        *(arg1 + 0xd4) = 0
    
    *(arg1 + 0x408) = 0
    *(arg1 + 0x40c) = 2

HANDLE hFile_1 = *(arg1 + 8)
uint32_t numberOfBytesRead
struct _EXCEPTION_REGISTRATION_RECORD** buffer

if (hFile_1 != 0xffffffff && *(arg1 + 0xc) + 4 u<= *(arg1 + 0x10)
        && ReadFile(hFile_1, &buffer, 4, &numberOfBytesRead, nullptr) != 0
        && numberOfBytesRead == 4)
    *(arg1 + 0xc) += 4
    buffer_1 = buffer
    
    if (buffer_1:1.b == 0x50 && buffer:2.b == 0x49 && buffer:3.b == 0x43)
        int32_t edi
        
        if (buffer_1.b == 0x42)
            edi = 3
        label_434584:
            uint32_t var_18
            
            if (sub_67f1b0(arg1 + 4, &var_18).b != 0)
                int32_t eax_5 = *(arg1 + 0x40c)
                
                if (eax_5 != 0)
                    if (eax_5 == 2 && edi != 1)
                    label_4345b8:
                        sub_67f580(arg1 + 4, *(arg1 + 0xc) + var_18)
                        int32_t eax_8 = sub_434460(arg2, arg3)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_8
                    
                    if (eax_5 == 1 && edi == 3)
                        goto label_4345b8
                
                uint8_t* var_28 = nullptr
                int32_t var_24 = 0
                int32_t var_20 = 0
                int32_t var_8_1 = 0
                sub_405950(&var_28, var_18)
                
                if (sub_67f160(arg1 + 4, var_28, var_18) != 0)
                    int32_t* edi_4
                    
                    if (edi == 1)
                        edi_4 = arg2
                        sub_4483d0(arg1 + 0xb8, edi_4, arg3, &var_28)
                    label_434676:
                        
                        if (*(arg1 + 0x40c) != 0)
                            edi_4[0xb].b = 1
                            *(arg1 + 0x40c) -= 1
                        
                        sub_4059a0(&var_28)
                        int32_t eax_10
                        eax_10.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_10
                    
                    if (edi == 2)
                        edi_4 = arg2
                        sub_448470(arg1 + 0xb8, edi_4, arg3, &var_28)
                        goto label_434676
                    
                    if (edi == 3)
                        edi_4 = arg2
                        sub_4485f0(arg1 + 0xb8, edi_4, arg3, &var_28)
                        goto label_434676
                
                sub_4059a0(&var_28)
                int32_t eax_11
                eax_11.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_11
        else
            if (buffer_1.b == 0x49)
                edi = 1
                goto label_434584
            
            if (buffer_1.b == buffer_1:1.b)
                edi = 2
                goto label_434584

buffer_1.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return buffer_1
