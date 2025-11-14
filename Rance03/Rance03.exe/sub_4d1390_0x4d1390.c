// 函数: sub_4d1390
// 地址: 0x4d1390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf37c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CGUIView::VTable** var_14 = arg1
*arg1 = &partsengine::CGUIView::`vftable'{for `IInterface'}
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
arg1[2] = &partsengine::CEventSubject::`vftable'
void* var_10 = &arg1[2]
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t var_4 = 0
arg1[6] = 0
sub_42f420(&arg1[7], 0x19)
arg1[0xa].b = 0
arg1[6] = &arg1[2]
int32_t var_4_1 = 1
int32_t i_1
int32_t i_2 = i_1
*arg1 = &partsengine::CGUIPartsView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIPartsView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = 1
arg1[0xc].b = 1
arg1[0xf] = i_2
arg1[0x10] = arg3
int32_t i_3 = sub_69adc6(0x40)
i_1 = i_3
var_4_1.b = 2
struct IInterface::partsengine::CLLParts::VTable** eax_3

if (i_3 == 0)
    eax_3 = nullptr
else
    eax_3 = sub_50ff50(i_3, *(arg2 + 4), *(arg2 + 8), arg2 + 0xc)

var_4_1.b = 1
arg1[0xd] = eax_3
int32_t i_4 = sub_69adc6(0x84)
i_1 = i_4
var_4_1.b = 3
struct partsengine::CPartsController::VTable** eax_4

if (i_4 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_4e6c00(i_4, arg1)

var_4_1.b = 1
arg1[0xe] = eax_4
i_1 = &arg1[1]

if (arg1 != 0xfffffffc)
    int32_t edx_2 = eax_4[0x1b]
    int32_t* eax_5 = eax_4[0x1a]
    
    if (eax_5 == edx_2)
        sub_412de0(&eax_4[0x1a], &i_1)
    else
        while (*eax_5 != &arg1[1])
            eax_5 = &eax_5[1]
            
            if (eax_5 == edx_2)
                break
        
        if (eax_5 == edx_2)
            sub_412de0(&eax_4[0x1a], &i_1)

int32_t i

if (arg3 == 0)
    i = 0
else
    i = arg3 + 4

i_1 = i

if (i != 0)
    int32_t edx_3 = arg1[4]
    int32_t* eax_6 = arg1[3]
    
    if (eax_6 == edx_3)
        sub_412de0(&arg1[3], &i_1)
    else
        while (*eax_6 != i)
            eax_6 = &eax_6[1]
            
            if (eax_6 == edx_3)
                break
        
        if (eax_6 == edx_3)
            sub_412de0(&arg1[3], &i_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
