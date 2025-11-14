// 函数: sub_4a3970
// 地址: 0x4a3970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc6ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x5c)
int32_t eax_4

if (ecx != 0)
    eax_4 = (*(*ecx + 0xc))(eax_2)
    (*(**(arg1 + 0x5c) + 8))(1)

if (ecx == 0 || eax_4 != 0)
    int32_t* ecx_2 = *(arg1 + 0x5c)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0x5c) = 0
    
    struct IInterface::partsengine::CGUIView::VTable** eax_7 = sub_69adc6(0x214)
    struct IInterface::partsengine::CGUIView::VTable** var_10_1 = eax_7
    int32_t var_4 = 0xc
    struct IInterface::partsengine::CGUIView::VTable** eax_8
    
    if (eax_7 == 0)
        eax_8 = nullptr
    else
        void* var_20_1 = arg1
        eax_8 = sub_497e50(eax_7, *(arg1 + 0x68), *(arg1 + 0x60))
    
    *(arg1 + 0x5c) = eax_8

fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 0x5c)
