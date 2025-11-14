// 函数: sub_487130
// 地址: 0x487130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bab7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t edi_1 = ebx[1] - *ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edi_1 s> 0)
    struct _EXCEPTION_REGISTRATION_RECORD* esi_1 = sub_69adc6(0x20)
    arg3 = esi_1
    int32_t var_4 = 0
    
    if (esi_1 == 0)
        esi_1 = nullptr
    else
        esi_1->Next = &common::CIMemory::`vftable'{for `IMemory'}
        sub_5f4370(&esi_1->Handler)
        esi_1->__offset(0x14).d = 0
        esi_1->__offset(0x18).d = 0
        esi_1->__offset(0x1c).d = 0
    
    int32_t var_4_1 = 0xffffffff
    esi_1->Next->__offset(0x8).d(edi_1)
    sub_69d850(esi_1->Next->__offset(0x18).d(*ebx, edi_1, eax_2))
    *sub_427f90(arg1 + 0x50, arg2) = esi_1
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
