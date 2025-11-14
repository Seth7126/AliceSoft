// 函数: sub_4b5810
// 地址: 0x4b5810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIMessage::VTable** eax_3 = sub_69adc6(0x34)
struct partsengine::CGUIMessage::VTable** var_10_1 = eax_3
int32_t var_4 = 0
int32_t arg_4
struct partsengine::CGUIMessage::VTable** eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    int32_t ecx = arg_4
    
    if (ecx != 0)
        eax_4 = sub_4b4760(eax_3, *(ecx + 0x24), *(ecx + 0x6c), 9)
    else
        eax_4 = sub_4b4760(eax_3, ecx, 0xffffffff, 9)

int32_t var_4_1 = 0xffffffff
arg_4 = eax_4
int32_t result = sub_4158d0(arg1 + 4, &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
