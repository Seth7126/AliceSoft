// 函数: sub_4d6790
// 地址: 0x4d6790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf8e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4

if (arg3 == 0)
    eax_4 = arg2
else
    eax_4 = *(arg1 + 0x1c) * arg2

*(arg1 + 0x20) += eax_4
int32_t* edi = *(arg1 + 0x20)
arg3.d = &partsengine::CSpriteEngineWrapper::`vftable'
int32_t var_4 = 0
int32_t eax_7 = sub_4b9a40(edi, arg1 + 0x5c, arg1 + 0x84)
int32_t eax_8 = sub_4b9a40(edi, arg1 + 0x40, arg1 + 0x78)
void* ecx_2 = data_75d4cc
int32_t var_4_1 = 0xffffffff
*(ecx_2 + 0x294) = eax_8
*(ecx_2 + 0x298) = eax_7
int32_t result = sub_50c3d0(arg1 + 0xac, *(arg1 + 0x20))
fsbase->NtTib.ExceptionList = ExceptionList
return result
