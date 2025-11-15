// 函数: sub_4ef220
// 地址: 0x4ef220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735cc2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x74)
int32_t eax_4

if (ecx != 0)
    eax_4 = (*(*ecx + 0xc))(eax_2)
    (*(**(arg1 + 0x74) + 8))(1)

if (ecx == 0 || eax_4 != 3)
    int32_t* ecx_2 = *(arg1 + 0x74)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0x74) = 0
    
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_7 = sub_6e810c(0x2f0)
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** var_14_1 = eax_7
    void* var_24_1 = arg1
    int32_t var_8_1 = 3
    int32_t var_28_1 = *(arg1 + 0x78)
    struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIScrollbarView::VTable
        ** eax_8 = sub_520cf0(eax_7, *(arg1 + 0x80))
    int32_t var_8_2 = 0xffffffff
    *(arg1 + 0x74) = eax_8
    sub_521360(eax_8)
    int32_t* result = *(arg1 + 0x74)
    
    if (result == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t eax_10 = (*(*result + 8))(1)
    
    if (eax_10 == 0xc || eax_10 == 0xd)
        int32_t eax_12 = (*(**(arg1 + 0x74) + 0x24))(1)
        int32_t* ecx_6 = *(arg1 + 0x74)
        *(arg1 + 0x320) = eax_12
        *(arg1 + 0x324) = (*(*ecx_6 + 0x28))(1)

fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 0x74)
