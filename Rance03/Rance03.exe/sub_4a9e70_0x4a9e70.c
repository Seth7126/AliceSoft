// 函数: sub_4a9e70
// 地址: 0x4a9e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4fc
int32_t* ecx = *(esi + 0x1f4)

if (ecx != 0)
    (**ecx)(1)

struct partsengine::CGUIScene::VTable** eax_4 = sub_69adc6(0x180)
struct partsengine::CGUIScene::VTable** var_10 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    *(esi + 0x1f4) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

struct partsengine::CGUIScene::VTable** eax_6 =
    sub_4d5c20(eax_4, esi + 0x18, esi + 0x54, esi + 0x58)
*(esi + 0x1f4) = eax_6
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
