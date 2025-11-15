// 函数: sub_545c70
// 地址: 0x545c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736422
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcba4
int32_t* ecx_1 = *(esi + 0x1b4)

if (ecx_1 != 0)
    (**ecx_1)(1)

struct partsengine::CGUIScene::VTable** eax_4 = sub_6e810c(0xc0)
struct partsengine::CGUIScene::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
struct partsengine::CGUIScene::VTable** result = sub_51ae60(eax_4, esi + 0x5c, esi + 0x9c)
*(esi + 0x1b4) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
