// 函数: sub_4ad3b0
// 地址: 0x4ad3b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_14 = ebx
void* result
result.b = *(arg2 + 0xa8)

if (result.b != 0)
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<class <lambda_bf60bfe42a7bbdcb07502ba075e954b2>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::VTable
        * const var_60 = &std::_Func_impl<class <lambda_bf60bfe42a7bbdcb07502ba075e954b2>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    void* var_5c_1 = ebx
    struct std::_Func_base<void, class partsengine::CGUIComponent*>::std::_Func_impl<class <lambda_bf60bfe42a7bbdcb07502ba075e954b2>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::VTable
        * const* var_3c_1 = &var_60
    sub_4c2b20(ebx + 0x40, var_60)
    void* eax_3 = *(ebx + 0xb0)
    arg2 = 1
    void* var_28 = nullptr
    int32_t var_24_1 = 0
    void* eax_4 = *(eax_3 + 0x70)
    int32_t var_20_1 = 0
    int32_t ecx_3 = (*(eax_4 + 0xc4) - *(eax_4 + 0xc0)) s>> 2
    int32_t edi_1 = 0
    int32_t var_8_1 = 0
    
    if (ecx_3 s> 0)
        do
            int32_t esi_1
            
            if (edi_1 s>= 0)
                void* ecx_4 = *(*(ebx + 0xb0) + 0x70)
                
                if ((*(ecx_4 + 0xc4) - *(ecx_4 + 0xc0)) s>> 2 s> edi_1)
                    esi_1 = *(*(ecx_4 + 0xc0) + (edi_1 << 2))
                else
                    esi_1 = 0
            else
                esi_1 = 0
            
            void** ecx_5 = *(ebx + 0xb4)
            int32_t var_3c_2 = esi_1
            int32_t var_18 = esi_1
            void* eax_10 = sub_4f15e0(ecx_5)
            
            if (eax_10 != 0)
                int32_t edx_1 = *(eax_10 + 8)
                
                if (esi_1 s>= edx_1 && *(eax_10 + 4) + edx_1 s> esi_1)
                    void* ebx_1 = *(*(eax_10 + 0xc) + ((esi_1 - edx_1) << 2))
                    
                    if (ebx_1 == 0)
                        ebx = var_14
                    else
                        int32_t* ecx_10 = *(ebx_1 + 0x74)
                        
                        if (ecx_10 == 0)
                            ebx = var_14
                        else if ((*(*ecx_10 + 8))(1) != 0xd)
                            ebx = var_14
                        else
                            *(ebx_1 + 0x98) = arg2
                            arg2 = arg2 - sub_4ed8c0(ebx_1) + 0xa + sub_4ed930(ebx_1)
                            
                            if (*(ebx_1 + 0xaa) == 0 || *(ebx_1 + 0xab) == 0)
                                ebx = var_14
                                sub_4ab5b0(ebx + 0xa0, esi_1)
                            else
                                sub_404370(&var_28, &var_18)
                                ebx = var_14
            
            edi_1 += 1
        while (edi_1 s< ecx_3)
    
    sub_4ab660(ebx + 0xa0, &var_28, *(ebx + 0xb4))
    result = sub_4ad6a0(ebx)
    void* ecx_19 = var_28
    
    if (ecx_19 != 0)
        result = sub_403160(ecx_19, (var_20_1 - ecx_19) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
