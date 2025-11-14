// 函数: sub_4a8310
// 地址: 0x4a8310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcbeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xc) = 0
sub_4a62e0(arg1 + 4, sub_4e7600)
struct partsengine::CGUIController::VTable** var_28 = arg2
struct partsengine::CPartsList::VTable** eax_4 = sub_4a52a0(arg1 + 4)
int32_t edi_1

if (eax_4 != 0)
    edi_1 = eax_4[2]

struct IInterface::VTable** vFunc_0

if (eax_4 == 0 || arg2 s< edi_1 || eax_4[1] + edi_1 s<= arg2)
    vFunc_0 = nullptr
else
    vFunc_0 = eax_4[3][arg2 - edi_1].vFunc_0
    
    if (vFunc_0 == 0)
        vFunc_0 = sub_4e7720(eax_4, arg2)

int32_t var_28_2 = arg3
struct partsengine::CPartsList::VTable** eax_9 = sub_4a52a0(arg1 + 4)
int32_t edi_2

if (eax_9 != 0)
    edi_2 = eax_9[2]

struct IInterface::VTable** vFunc_0_1

if (eax_9 == 0 || arg3 s< edi_2 || eax_9[1] + edi_2 s<= arg3)
    vFunc_0_1 = nullptr
else
    vFunc_0_1 = eax_9[3][arg3 - edi_2].vFunc_0
    
    if (vFunc_0_1 == 0)
        vFunc_0_1 = sub_4e7720(eax_9, arg3)

struct partsengine::CGUIController::VTable** eax_14
int32_t ecx_9
eax_14, ecx_9 = sub_69adc6(0xa4)
arg2 = eax_14
int32_t var_4 = 0
struct partsengine::CGUIController::VTable** result

if (eax_14 == 0)
    result = nullptr
else
    int32_t var_28_4 = *(arg1 + 0x74)
    struct partsengine::CGUIController::VTable** result_1
    result_1, ecx_9 = sub_4a71e0(eax_14, vFunc_0, vFunc_0_1, arg1 + 4)
    result = result_1

void* var_28_5 = arg1
*(arg1 + 0xc) = arg1
sub_4a6280(arg1 + 4, ecx_9)
fsbase->NtTib.ExceptionList = ExceptionList
return result
