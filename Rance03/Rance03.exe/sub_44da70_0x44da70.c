// 函数: sub_44da70
// 地址: 0x44da70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7228
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
HANDLE var_1c = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0
uint32_t numberOfBytesWritten
BOOL result

if (sub_604970(&var_20, arg1).b != 0)
    uint32_t numberOfBytesWritten_1 = numberOfBytesWritten
    uint32_t nNumberOfBytesToWrite = (*(*numberOfBytesWritten_1 + 0x14))(eax_2)
    
    if (var_1c != 0xffffffff && WriteFile(var_1c, (*(*numberOfBytesWritten_1 + 0x18))(), 
            nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr) != 0
            && nNumberOfBytesToWrite == numberOfBytesWritten && CloseHandle(var_1c) != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
numberOfBytesWritten.b = 0

if (var_1c != 0xffffffff)
    CloseHandle(var_1c)
    result.b = numberOfBytesWritten.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
