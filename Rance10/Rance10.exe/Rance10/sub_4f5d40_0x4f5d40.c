// 函数: sub_4f5d40
// 地址: 0x4f5d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736422
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4f40f0(arg1 + 0x124)
sub_503370(arg1 + 0x100)
sub_503370(arg1 + 0x10c)
int32_t* ecx_1 = *(arg1 + 0x1b4)

if (ecx_1 != 0)
    (**ecx_1)(1)

struct partsengine::CGUIScene::VTable** eax_6 = sub_6e810c(0xc0)
struct partsengine::CGUIScene::VTable** var_14_1 = eax_6
int32_t var_8_1 = 0
struct partsengine::CGUIScene::VTable** result = sub_51ae60(eax_6, arg1 + 0x5c, arg1 + 0x9c)
int32_t var_8_2 = 0xffffffff
*(arg1 + 0x1b4) = result
void* esi_1 = data_7fcb4c
int32_t* ecx_5 = *(esi_1 + 0x14)

if (ecx_5 != 0)
    result = (*(*ecx_5 + 0x10))(eax_2)

void* ecx_6 = *(esi_1 + 0x18)

if (ecx_6 != 0)
    result = sub_4523f0(ecx_6 + 0x44)

fsbase->NtTib.ExceptionList = ExceptionList
return result
