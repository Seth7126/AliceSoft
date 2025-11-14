// 函数: sub_48fb50
// 地址: 0x48fb50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba08b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatTimeLineData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatTimeLineData::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatTimeLineData::`vftable'{for `IInterface'}
int32_t var_4 = 0
int32_t* i = arg1[2]
arg1[5] = 0xffffffff

for (; i != arg1[3]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (*(*ecx + 8))(1)

int32_t result = arg1[2]
arg1[3] = result

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
