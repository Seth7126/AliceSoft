// 函数: sub_48f8a0
// 地址: 0x48f8a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f543
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 == 0 || arg2 == 0)
    result = 0
else
    struct IString::common::CStringWrapper::VTable* var_30 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    (*(*arg1 + 0x10))(&var_30, 0x760604, 0x75ceab)
    void* var_390
    
    if (data_7fd568 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_7fd568)
        
        if (data_7fd568 == 0xffffffff)
            var_8_1.b = 1
            int32_t var_378_1 = 0xf
            int32_t var_37c_1 = 0
            char var_38c = 0
            sub_403490(&var_38c, 0x76060c, 0x10)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_b1d5d963366fdac473eea001e71a601f>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_374 = &std::_Func_impl<class <lambda_b1d5d963366fdac473eea001e71a601f>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_b1d5d963366fdac473eea001e71a601f>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_350_1 = &var_374
            var_8_1.b = 2
            int32_t var_338_1 = 0xf
            int32_t var_33c_1 = 0
            char var_34c = 0
            sub_403490(&var_34c, 0x760620, 0x10)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_3c44f29f00aa32a6082b4275d4a89d8b>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_334 = &std::_Func_impl<class <lambda_3c44f29f00aa32a6082b4275d4a89d8b>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_3c44f29f00aa32a6082b4275d4a89d8b>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_310_1 = &var_334
            var_8_1.b = 3
            int32_t var_2f8_1 = 0xf
            int32_t var_2fc_1 = 0
            char var_30c = 0
            sub_403490(&var_30c, 0x760634, 0x12)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_9b7fec1f40c52be61a9e4204de3b2a64>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_2f4 = &std::_Func_impl<class <lambda_9b7fec1f40c52be61a9e4204de3b2a64>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_9b7fec1f40c52be61a9e4204de3b2a64>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_2d0_1 = &var_2f4
            var_8_1.b = 4
            int32_t var_2b8_1 = 0xf
            int32_t var_2bc_1 = 0
            char var_2cc = 0
            sub_403490(&var_2cc, 0x760648, 0xa)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_5d03a0e28d9c575a297a571285e541d1>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_2b4 = &std::_Func_impl<class <lambda_5d03a0e28d9c575a297a571285e541d1>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_5d03a0e28d9c575a297a571285e541d1>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_290_1 = &var_2b4
            var_8_1.b = 5
            int32_t var_278_1 = 0xf
            int32_t var_27c_1 = 0
            char var_28c = 0
            sub_403490(&var_28c, 0x760654, 0x12)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_978d3294b08a2a652c769c8d17b5bf50>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_274 = &std::_Func_impl<class <lambda_978d3294b08a2a652c769c8d17b5bf50>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_978d3294b08a2a652c769c8d17b5bf50>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_250_1 = &var_274
            var_8_1.b = 6
            int32_t var_238_1 = 0xf
            int32_t var_23c_1 = 0
            char var_24c = 0
            sub_403490(&var_24c, 0x76059c, 0xc)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_2ffc23396c44fd6b5468477db10bce44>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_234 = &std::_Func_impl<class <lambda_2ffc23396c44fd6b5468477db10bce44>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_2ffc23396c44fd6b5468477db10bce44>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_210_1 = &var_234
            var_8_1.b = 7
            int32_t var_1f8_1 = 0xf
            int32_t var_1fc_1 = 0
            char var_20c = 0
            sub_403490(&var_20c, 0x760534, 0x12)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_0655ba2ce5e6bf3cf127a2fb35389580>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_1f4 = &std::_Func_impl<class <lambda_0655ba2ce5e6bf3cf127a2fb35389580>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_0655ba2ce5e6bf3cf127a2fb35389580>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_1d0_1 = &var_1f4
            var_8_1.b = 8
            int32_t var_1b8_1 = 0xf
            int32_t var_1bc_1 = 0
            char var_1cc = 0
            sub_403490(&var_1cc, 0x7605ac, 0x14)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_9f021dfdaa446633efc0cec02a808625>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_1b4 = &std::_Func_impl<class <lambda_9f021dfdaa446633efc0cec02a808625>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_9f021dfdaa446633efc0cec02a808625>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_190_1 = &var_1b4
            var_8_1.b = 9
            int32_t var_178_1 = 0xf
            int32_t var_17c_1 = 0
            char var_18c = 0
            sub_403490(&var_18c, 0x7605c4, 8)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_8df1265bcaef8c9b7db7546258cee87a>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_174 = &std::_Func_impl<class <lambda_8df1265bcaef8c9b7db7546258cee87a>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_8df1265bcaef8c9b7db7546258cee87a>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_150_1 = &var_174
            var_8_1.b = 0xa
            int32_t var_138_1 = 0xf
            int32_t var_13c_1 = 0
            char var_14c = 0
            sub_403490(&var_14c, 0x7605d0, 0x10)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_302aa812991e7408b2b2b76b0c3d0870>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_134 = &std::_Func_impl<class <lambda_302aa812991e7408b2b2b76b0c3d0870>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_302aa812991e7408b2b2b76b0c3d0870>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_110_1 = &var_134
            var_8_1.b = 0xb
            int32_t var_f8_1 = 0xf
            int32_t var_fc_1 = 0
            char var_10c = 0
            sub_403490(&var_10c, 0x7605e4, 6)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_57e28d1180eba34db32c1bdd6607e712>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_f4 = &std::_Func_impl<class <lambda_57e28d1180eba34db32c1bdd6607e712>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_57e28d1180eba34db32c1bdd6607e712>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_d0_1 = &var_f4
            var_8_1.b = 0xc
            int32_t var_b8_1 = 0xf
            int32_t var_bc_1 = 0
            char var_cc = 0
            sub_403490(&var_cc, 0x7605ec, 8)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_bf2eee55d3060b1bfad0d1b5d402dbf7>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_b4 = &std::_Func_impl<class <lambda_bf2eee55d3060b1bfad0d1b5d402dbf7>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_bf2eee55d3060b1bfad0d1b5d402dbf7>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_90_1 = &var_b4
            var_8_1.b = 0xd
            int32_t var_78_1 = 0xf
            int32_t var_7c_1 = 0
            char var_8c = 0
            int32_t ecx_15 = sub_403490(&var_8c, 0x7605f8, 8)
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_67e4566dfb249ee4a53fc399de0304e0>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const var_74 = &std::_Func_impl<class <lambda_67e4566dfb249ee4a53fc399de0304e0>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::`vftable'{for `std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>'}
            struct std::_Func_base<class kiwi::IFilterProcess*, class IEXTreeReader const*, class IWaveFormat const*>::std::_Func_impl<class <lambda_67e4566dfb249ee4a53fc399de0304e0>,class std::allocator<int32_t>,class kiwi::IFilterProcess*,class IEXTreeReader const*,class IWaveFormat const*>::VTable
                * const* var_50_1 = &var_74
            int32_t var_3a8_1 = ecx_15
            var_8_1.b = 0xe
            var_390 = nullptr
            sub_490cc0(&var_390)
            var_8_1.b = 0xf
            void var_4c
            sub_491080(&var_38c, &var_4c)
            var_8_1.b = 1
            `eh vector vbase constructor iterator'(&var_38c, 0x40, 0xd, 
                Concurrency::details::UMSSchedulerProxy::~UMSSchedulerProxy)
            _atexit(j_sub_490b20)
            var_8_1.b = 0
            sub_6e85d6(&data_7fd568)
    
    char* eax_6 = &var_2c
    
    if (var_18_1 u>= 0x10)
        eax_6 = var_2c.d
    
    void* var_48
    sub_403360(&var_48, eax_6)
    sub_490ba0(&var_390, &var_48)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    void* eax_9 = var_390
    
    if (eax_9 != data_7fd570)
        int32_t* ecx_18 = *(eax_9 + 0x44)
        var_390 = arg2
        int32_t* var_394 = arg1
        
        if (ecx_18 == 0)
            sub_6d090a()
            noreturn
        
        int32_t result_1 = (*(*ecx_18 + 8))(&var_394, &var_390)
        sub_404c60(&var_30)
        result = result_1
    else
        sub_404c60(&var_30)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
