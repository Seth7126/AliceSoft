// 函数: sub_4a1970
// 地址: 0x4a1970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc551
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CGUIComponent::VTable** var_14 = arg1
*arg1 = &partsengine::CGUIComponent::`vftable'{for `IInterface'}
arg1[1] = &partsengine::CGUIComponent::`vftable'{for `partsengine::CEventObserverBase'}
int32_t var_4 = 2
int32_t* ecx = arg1[0x12b]

if (ecx != 0)
    (**ecx)(1)

sub_4a2d90(arg1)
int32_t eax_4 = arg1[0x36]
void* ecx_2 = arg1[0x18]
int32_t var_18 = eax_4
int32_t var_1c = eax_4

if (eax_4 s> 0)
    int32_t* var_10
    int32_t* eax_6
    eax_6.b = *sub_42f3d0(ecx_2 + 0x14, &var_10, &var_1c) != *(ecx_2 + 0x14)
    
    if (eax_6.b != 0)
        void* eax_7 = sub_42f350(ecx_2 + 0x14, &var_18)
        *eax_7 -= 1

sub_4a69b0(&arg1[0x13])
void* ebx = arg1[0x14]
int32_t eax_9 = *(*(ebx + 0x58) + 0x90)

if (eax_9 s> 0)
    int32_t var_30_3 = eax_9
    void* eax_10 = sub_4a56f0(arg1[0x15])
    
    if (eax_10 != 0)
        sub_4b7b70(eax_10 + 0x6c, *(ebx + 0x2c))

int32_t* ecx_8 = arg1[0x17]

if (ecx_8 != 0)
    (*(*ecx_8 + 4))(eax_2)
    arg1[0x17] = 0

sub_4b7000(&arg1[0x1b])
arg1[0x13] = &partsengine::CGUIComponentTreeUnit::`vftable'
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
