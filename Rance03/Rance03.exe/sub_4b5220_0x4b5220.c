// 函数: sub_4b5220
// 地址: 0x4b5220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIMessage::VTable** eax_3 = sub_69adc6(0x34)
struct partsengine::CGUIMessage::VTable** var_10_1 = eax_3
int32_t var_4 = 0
int32_t arg_4
struct partsengine::CGUIMessage::VTable** esi

if (eax_3 == 0)
    esi = nullptr
else
    int32_t ecx = arg_4
    
    if (ecx != 0)
        esi = sub_4b4760(eax_3, *(ecx + 0x24), *(ecx + 0x6c), 1)
    else
        esi = sub_4b4760(eax_3, ecx, 0xffffffff, 1)

int32_t var_4_1 = 0xffffffff
sub_4b4850(esi, arg2)
sub_4b4850(esi, arg3)
arg_4 = esi
int32_t result = sub_4158d0(arg1 + 0x10, &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
