// 函数: sub_4fc720
// 地址: 0x4fc720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7364e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_522f90(arg1 + 0x40, &var_20)
struct std::_Func_base<void, int32_t>::std::_Func_impl<class <lambda_28872d98d50afa1988fede9839490160>,class std::allocator<int32_t>,void,int32_t>::VTable
    * const var_50 = &std::_Func_impl<class <lambda_28872d98d50afa1988fede9839490160>,class std::allocator<int32_t>,void,int32_t>::`vftable'{for `std::_Func_base<void, int32_t>'}
void* var_4c = arg1
struct std::_Func_base<void, int32_t>::std::_Func_impl<class <lambda_28872d98d50afa1988fede9839490160>,class std::allocator<int32_t>,void,int32_t>::VTable
    * const* var_2c_1 = &var_50
struct _EXCEPTION_REGISTRATION_RECORD** result = Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >(
    &var_20)
void* ecx_1 = var_20

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (var_18 - ecx_1) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
