// 函数: sub_4817f0
// 地址: 0x4817f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionSurfaceMaker::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionSurfaceMaker::VTable** ebx = arg1
*ebx = &partsengine::CConstructionSurfaceMaker::`vftable'
int32_t var_4 = 0
int32_t edi = ebx[2]

for (void* i = ebx[1]; i != edi; i += 0x14)
    arg1 = (*(**(i + 0x10) + 4))(eax_2)

struct partsengine::CConstructionSurfaceMaker::VTable** var_24 = ebx
struct partsengine::CConstructionSurfaceMaker::VTable** var_28 = arg1
sub_484d80(ebx[1], ebx[2])
void* result = ebx[1]
ebx[2] = result

if (result != 0)
    struct partsengine::CConstructionSurfaceMaker::VTable** var_24_1 = ebx
    void* result_1 = result
    sub_484d80(result, result)
    result = j__free(ebx[1])
    ebx[1] = 0
    ebx[2] = 0
    ebx[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
