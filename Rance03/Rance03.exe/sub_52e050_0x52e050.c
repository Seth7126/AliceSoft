// 函数: sub_52e050
// 地址: 0x52e050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3926
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CCombineSurface::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CCombineSurface::VTable** var_10_1 = arg1
*arg1 = &sealengine::CCombineSurface::`vftable'
int32_t var_4 = 1

for (int32_t* i = arg1[7]; i != arg1[8]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

int32_t result = arg1[7]

if (result != 0)
    result = j__free(result)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t var_4_1 = 0xffffffff
int32_t* i_1 = arg1[4]

if (i_1 != 0)
    for (int32_t ebx_1 = arg1[5]; i_1 != ebx_1; i_1 = &i_1[5])
        (**i_1)(0)
    
    result = j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
