// 函数: sub_620b90
// 地址: 0x620b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b707b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISurfaceFactory::surfacefactory::CSurfaceFactory::VTable** var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_75d538

if (ecx != 0)
    (*(*ecx + 4))(__security_cookie ^ &var_10)
    data_75d538 = 0

struct ISurfaceFactory::surfacefactory::CSurfaceFactory::VTable** eax_4 = sub_69adc6(0x10)
var_10 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_75d538 = 0
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

data_75d538 = sub_620870(eax_4)
struct ISurfaceFactory::surfacefactory::CSurfaceFactory::VTable** eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
