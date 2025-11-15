// 函数: sub_4ef940
// 地址: 0x4ef940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735e42
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

struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable** 
    result

if (ecx != 0 && eax_4 == 0xc)
    result = *(arg1 + 0x74)
else
    int32_t* ecx_2 = *(arg1 + 0x74)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0x74) = 0
    
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable**
         eax_7 = sub_6e810c(0xd8)
    struct 
        common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUIPanelView::VTable**
         var_14_1 = eax_7
    void* var_24_1 = arg1
    int32_t var_8_1 = 0xc
    int32_t var_28_1 = *(arg1 + 0x78)
    result = sub_4b4540(eax_7, *(arg1 + 0x80))
    int32_t var_8_2 = 0xffffffff
    *(arg1 + 0x74) = result
    
    if (result != 0)
        int32_t eax_8 = (*result)->vFunc_2(1)
        
        if (eax_8 == 0xc || eax_8 == 0xd)
            int32_t eax_10 = (*(**(arg1 + 0x74) + 0x24))(1)
            int32_t* ecx_6 = *(arg1 + 0x74)
            *(arg1 + 0x320) = eax_10
            *(arg1 + 0x324) = (*(*ecx_6 + 0x28))(1)
        
        result = *(arg1 + 0x74)

fsbase->NtTib.ExceptionList = ExceptionList
return result
