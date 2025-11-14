// 函数: sub_4792a0
// 地址: 0x4792a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba08b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEXReader::mainex::CMainEXFile::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXReader::mainex::CMainEXFile::VTable** var_10_1 = arg1
*arg1 = &mainex::CMainEXFile::`vftable'{for `IEXReader'}
int32_t var_4 = 0

for (int32_t* i = arg1[2]; i != arg1[3]; i = &i[1])
    (*(**i + 4))(eax_2)

int32_t result = arg1[2]
arg1[3] = result

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
