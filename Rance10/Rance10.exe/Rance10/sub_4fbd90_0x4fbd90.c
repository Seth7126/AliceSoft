// 函数: sub_4fbd90
// 地址: 0x4fbd90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result = arg5
struct std::_Func_base<void, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_986dfff29044df040dc4e128cb951ce2>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::VTable
    * const var_48
struct std::_Func_base<bool, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_d729126d6a5706fa2a2364b978088457>,class std::allocator<int32_t>,bool,class partsengine::CPartsController*>::VTable
    * const var_44
struct _EXCEPTION_REGISTRATION_RECORD** eax

if (arg6 != 0 || arg7 != 0)
    result = arg1->__offset(0x8).d
    arg1->__offset(0x1e4).d = result
    arg1->__offset(0x1f4).d = result
    arg1->__offset(0x1f8).d = result
    var_44 = &std::_Func_impl<class <lambda_d729126d6a5706fa2a2364b978088457>,class std::allocator<int32_t>,bool,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<bool, class partsengine::CPartsController*>'}
    void** var_20_2 = &var_44
    var_48 = arg4
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = sub_4fb5d0(arg2, arg3, var_48)
    
    if (result_1 != 0)
        if (arg7 != 0)
            arg1->__offset(0x1e4).d = result_1
            arg1->__offset(0x1e8).d = *((*result_1)->__offset(0x50).d + 0x90)
            int32_t xmm0_2 = *((*result_1)->__offset(0x50).d + 0x94)
            arg1->__offset(0x18).d = arg3
            eax = arg4
            arg1->__offset(0x1ec).d = xmm0_2
            arg1->__offset(0x1c).d = eax
        else if (arg9 != 0)
            arg1->__offset(0x20).d = arg3
            eax = arg4
            arg1->__offset(0x1f4).d = result_1
            arg1->__offset(0x24).d = eax
        else if (arg10 != 0)
            arg1->__offset(0x28).d = arg3
            eax = arg4
            arg1->__offset(0x1f8).d = result_1
            arg1->__offset(0x2c).d = eax
        
        if (arg6 != 0)
            result = result_1
            struct partsengine::IEventArgs::partsengine::SSwipeEndEventArgs::VTable* ecx_2 =
                arg1->__offset(0x200).d
            
            if (ecx_2 != arg1->__offset(0x8).d)
                sub_525b60(ecx_2)
                arg1->__offset(0x200).d = arg1->__offset(0x8).d
    
    if (arg5 != result)
        if (arg5[0x6d].b != 0)
            arg7.d = &partsengine::SLostFocusEventArgs::`vftable'{for `partsengine::IEventArgs'}
            sub_4cbd50(&arg5[0x79], &arg7, 0)
            arg5[0x6d].b = 0
        
        if (result[0x6d].b == 0)
            arg7.d = &partsengine::SFocusEventArgs::`vftable'{for `partsengine::IEventArgs'}
            sub_4cbd50(&result[0x79], &arg7, 0)
            result[0x6d].b = 1
else
    if (arg11 == 0)
        sub_4fc3d0(arg1, arg3, arg4)
        arg1->__offset(0x3c).b = 0
    
    if (arg12 == 0)
        sub_4fc460(arg1)
    
    if (arg13 == 0)
        sub_4fc4d0(arg1)

int32_t* var_70
int32_t* var_6c

if (arg8 == 0)
    eax.b = arg11
    
    if (eax.b == 0)
        eax.b = arg1->__offset(0x200).d[0x70].b
        
        if (eax.b == 0)
            arg1->__offset(0x200).d = arg1->__offset(0x8).d
        
        eax.b = arg11
else
    int32_t var_20_5 = 0
    arg7.d = 0
    var_48 = &std::_Func_impl<class <lambda_986dfff29044df040dc4e128cb951ce2>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
    struct std::_Func_base<void, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_986dfff29044df040dc4e128cb951ce2>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::VTable
        * const* var_24_4 = &var_48
    var_70 = &std::_Func_impl<class <lambda_9eda313f140487e2e4c6d02f043e2d75>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
    var_6c = &arg7
    int32_t** var_4c_2 = &var_70
    sub_4fc280(&var_70, arg3, arg2, arg4, var_70, var_6c)
    int32_t* edx_2 = arg7.d
    
    if (edx_2 != 0)
        struct partsengine::IEventArgs::partsengine::SSwipeEndEventArgs::VTable* ecx_6 =
            arg1->__offset(0x200).d
        
        if (edx_2 != ecx_6)
            if (ecx_6 != arg1->__offset(0x8).d)
                sub_525b60(ecx_6)
                edx_2 = arg7.d
                arg1->__offset(0x200).d = arg1->__offset(0x8).d
            
            if ((*(*edx_2 + 0x50))[0x6b] != 4)
                arg1->__offset(0x30).d = arg3
                eax = arg4
                arg1->__offset(0x200).d = edx_2
                arg1->__offset(0x34).d = eax
    
    eax.b = arg11

int32_t ebx_2 = arg3 i- arg1->__offset(0x18).d
void* ebp_2 = arg4 - arg1->__offset(0x1c).d

if (arg1->__offset(0x3c).b == 0 && eax.b != 0)
    int32_t eax_13
    int32_t edx_3
    edx_3:eax_13 = sx.q(ebp_2)
    int32_t eax_15
    int32_t edx_4
    edx_4:eax_15 = sx.q(ebx_2)
    eax.b = arg1->__offset(0x204).d s<= (eax_13 ^ edx_3) - edx_3 + (eax_15 ^ edx_4) - edx_4
    arg1->__offset(0x3c).b = eax.b

void** ecx_11 = arg1->__offset(0x1e4).d
eax.b = arg14
struct _EXCEPTION_REGISTRATION_RECORD** ebx_3

if (ecx_11 == arg1->__offset(0x8).d || ecx_11 != result || eax.b == 0
        || arg1->__offset(0x3c).b == 0)
    ebx_3 = arg2
else
    void* eax_18
    eax_18.b = *(*(*ecx_11 + 0x50) + 0x1aa)
    
    if (eax_18.b != 0)
        void* eax_19 = *ecx_11
        float xmm1_2 = _mm_cvtepi32_ps(zx.o(ebp_2))
        void* eax_20 = *(eax_19 + 0x50)
        float xmm0_5 = _mm_cvtepi32_ps(zx.o(ebx_2)) f+ arg1->__offset(0x1e8).d
        *(eax_20 + 0x94) = xmm1_2 f+ arg1->__offset(0x1ec).d
        *(eax_20 + 0x90) = xmm0_5
    
    void* ecx_12 = arg1->__offset(0x1e4).d
    sub_525bc0(ecx_12, arg1->__offset(0x18).d, arg1->__offset(0x1c).d, arg3, arg4, ecx_12 + 0x1e0, 
        1, 0, 0)
    int32_t var_20_7 = arg1->__offset(0x1e4).d
    ebx_3 = arg2
    arg1->__offset(0x1fc).d = arg1->__offset(0x8).d
    var_48 = &std::_Func_impl<class <lambda_04ae13a9192b01011ea3163a2226ccbf>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
    var_44 = arg1
    struct std::_Func_base<void, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_986dfff29044df040dc4e128cb951ce2>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::VTable
        * const* var_24_6 = &var_48
    float* var_8_1 = &arg3
    var_70 = &std::_Func_impl<class <lambda_873eef5155dc3c9463c103c4196fbac3>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
    var_6c.q = arg1.q
    struct _EXCEPTION_REGISTRATION_RECORD*** var_64_1 = &arg4
    int32_t** var_4c_3 = &var_70
    sub_4fc280(&var_70, arg3, ebx_3, arg4, var_70, var_6c)
    eax.b = arg14

void* ecx_14 = arg1->__offset(0x1f4).d

if (ecx_14 != arg1->__offset(0x8).d && eax.b != 0)
    sub_525bc0(ecx_14, arg1->__offset(0x20).d, arg1->__offset(0x24).d, arg3, arg4, ecx_14 + 0x1e1, 
        4, 0, 0)

void* ecx_15 = arg1->__offset(0x1f8).d

if (ecx_15 != arg1->__offset(0x8).d && arg14 != 0)
    sub_525bc0(ecx_15, arg1->__offset(0x28).d, arg1->__offset(0x2c).d, arg3, arg4, ecx_15 + 0x1e2, 
        2, 0, 0)

int32_t var_20_10 = 0
var_48 = &std::_Func_impl<class <lambda_6e48f2fda216e43e8c2b81e302d2696f>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
struct std::_Func_base<void, class partsengine::CPartsController*>::std::_Func_impl<class <lambda_986dfff29044df040dc4e128cb951ce2>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::VTable
    * const* var_24_9 = &var_48
var_70 = &std::_Func_impl<class <lambda_f858ec44bcdfcb54b95d898b72ea8724>,class std::allocator<int32_t>,void,class partsengine::CPartsController*>::`vftable'{for `std::_Func_base<void, class partsengine::CPartsController*>'}
int32_t** var_4c_4 = &var_70
sub_4fc280(&var_48, arg3, ebx_3, arg4, var_70, var_6c)
return result
