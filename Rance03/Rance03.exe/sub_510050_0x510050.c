// 函数: sub_510050
// 地址: 0x510050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1d96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CLLParts::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CLLParts::VTable** var_10_1 = arg1
*arg1 = &partsengine::CLLParts::`vftable'{for `IInterface'}
int32_t var_4 = 1
int32_t* ecx = arg1[8]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[8] = 0

int32_t* ecx_1 = arg1[9]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[9] = 0

int32_t* esi = arg1[0xa]
int32_t ebx = 0
uint32_t ebp_3 = (arg1[0xb] - esi + 3) u>> 2

if (esi u> arg1[0xb])
    ebp_3 = 0

if (ebp_3 != 0)
    do
        (*(**esi + 4))(eax_2)
        ebx += 1
        esi = &esi[1]
    while (ebx != ebp_3)

int32_t eax_6 = arg1[0xa]
arg1[0xb] = eax_6

if (eax_6 != 0)
    j__free(eax_6)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

int32_t* result = arg1[2]

if (result != 0)
    sub_4107c0(result, arg1[3])
    result = j__free(arg1[2])
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
