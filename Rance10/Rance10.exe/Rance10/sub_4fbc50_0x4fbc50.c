// 函数: sub_4fbc50
// 地址: 0x4fbc50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct partsengine::IEventArgs::partsengine::SSwipeBeginEventArgs::VTable* ecx = *(arg1 + 0x200)
int32_t edi = *(arg1 + 8)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != edi)
    result.b = ecx->__offset(0x1c0).b
    float eax = arg4
    int32_t* var_74
    int32_t* var_70
    void* var_6c
    struct std::_Func_base<void, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_99fdc8c8da445936d6c67076ffc5f6b9>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::VTable
        * const var_4c
    struct _EXCEPTION_REGISTRATION_RECORD** edi_1
    
    if (result.b != 0)
        edi_1 = arg2
    label_4fbd11:
        char eax_8 = sub_5257b0(ecx, arg3, *(arg1 + 0x18), *(arg1 + 0x1c), eax, arg5, arg6, arg7)
        struct partsengine::IEventArgs::partsengine::SSwipeEndEventArgs::VTable* ecx_6 =
            *(arg1 + 0x200)
        
        if (eax_8 != 0)
            eax_8 = ecx_6->__offset(0x1b4).b
            
            if (eax_8 == 0 && ecx_6->__offset(0x1c0).b != eax_8 && ecx_6->__offset(0x1dc).d s< 0)
                struct partsengine::IEventArgs::partsengine::SSwipeEndEventArgs::VTable* var_24_3 =
                    ecx_6
                var_4c = &std::_Func_impl<class <lambda_2ddbf15212d3dfd3e9b60ff20fd5af7a>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
                struct std::_Func_base<void, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_99fdc8c8da445936d6c67076ffc5f6b9>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::VTable
                    * const* var_28_3 = &var_4c
                var_74 = &std::_Func_impl<class <lambda_7ae3f7621014ae6f61d2bf5c48082778>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
                int32_t** var_50_2 = &var_74
                sub_4fc280(&var_74, 0x80000000, edi_1, 0x80000000, var_74, var_70, var_6c)
            
            return 1
        
        sub_525b60(ecx_6)
        *(arg1 + 0x200) = *(arg1 + 8)
    else
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(eax i- *(arg1 + 0x30))
        void* ecx_3 = (eax_2 ^ edx_1) - edx_1
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(arg5 i- *(arg1 + 0x34))
        result = (eax_5 ^ edx_2) - edx_2
        
        if (ecx_3 + result s>= *(arg1 + 0x204))
            bool var_d = result s>= ecx_3
            *(arg1 + 0x200) = edi
            edi_1 = arg2
            int32_t var_24_1 = 0
            var_4c = &std::_Func_impl<class <lambda_99fdc8c8da445936d6c67076ffc5f6b9>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
            struct std::_Func_base<void, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_99fdc8c8da445936d6c67076ffc5f6b9>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::VTable
                * const* var_28_1 = &var_4c
            var_74 = &std::_Func_impl<class <lambda_583f89e3bb131fc630d164f29c95824b>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
            var_70 = &var_d
            var_6c = arg1
            int32_t** var_50_1 = &var_74
            sub_4fc280(&var_74, arg4, edi_1, arg5, var_74, var_70, var_6c)
            ecx = *(arg1 + 0x200)
            
            if (ecx != *(arg1 + 8))
                eax = arg4
                goto label_4fbd11

result.b = 0
return result
