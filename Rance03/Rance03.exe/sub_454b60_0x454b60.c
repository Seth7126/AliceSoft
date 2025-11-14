// 函数: sub_454b60
// 地址: 0x454b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b79a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFileStruct::debugfile::CStruct::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFileStruct::debugfile::CStruct::VTable** var_10_1 = arg1
*arg1 = &debugfile::CStruct::`vftable'{for `IDebugFileStruct'}
int32_t var_4 = 2

for (int32_t* i = arg1[0xe]; i != arg1[0xf]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (*(*ecx + 0x44))(1)

int32_t result = arg1[0xe]
arg1[0xf] = result

if (result != 0)
    result = j__free(result)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

if (arg1[0xc] u>= 0x10)
    result = j__free(arg1[7])

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
