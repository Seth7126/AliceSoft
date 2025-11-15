// 函数: sub_537370
// 地址: 0x537370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a042
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcba4

if (ecx != 0)
    (**ecx)(1)

int32_t* ecx_1 = data_7fcba0
data_7fcba4 = 0

if (ecx_1 != 0)
    (**ecx_1)(1)

void* esi = data_7fcbbc
data_7fcba0 = 0
int32_t eax_5
int32_t edi

if (esi != 0)
    if (sub_63c080(esi) != 0)
        edi = (*(**(esi + 0x2c) + 0x4c))(eax_2)
    else
        edi = 0
    
    void* esi_1 = data_7fcbbc
    char eax_9
    
    if (esi_1 != 0)
        eax_9 = sub_63c080(esi_1)
    
    if (esi_1 == 0 || eax_9 == 0)
        eax_5 = 0
    else
        eax_5 = (*(**(esi_1 + 0x2c) + 0x48))(eax_2)
else
    edi = 0
    eax_5 = 0

sub_527040(eax_5, edi)
struct partsengine::CGUIEngine::VTable** eax_11 = sub_6e810c(0x1f8)
struct partsengine::CGUIEngine::VTable** var_14 = eax_11
int32_t var_8_1 = 0
data_7fcba4 = sub_4f56e0(eax_11)
struct partsengine::CGUIEngine::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
