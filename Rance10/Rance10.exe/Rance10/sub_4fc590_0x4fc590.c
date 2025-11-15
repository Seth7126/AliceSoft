// 函数: sub_4fc590
// 地址: 0x4fc590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736ac0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x1d4) += arg2
void* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_8_1 = 0
void* var_34
__builtin_memset(&var_34, 0, 0x24)
var_8_1.b = 3
void* var_1c
int32_t* var_4c = &var_1c
void* var_28
sub_522d10(arg1 + 0x40, &var_40, &var_34, &var_28)
struct std::_Func_base<void, int32_t>::std::_Func_impl<class <lambda_db6c501233313992285f09f811fab884>,class std::allocator<int32_t>,void,int32_t>::VTable
    * const var_70 = &std::_Func_impl<class <lambda_db6c501233313992285f09f811fab884>,class std::allocator<int32_t>,void,int32_t>::`vftable'{for `std::_Func_base<void, int32_t>'}
void* var_6c = arg1
struct std::_Func_base<void, int32_t>::std::_Func_impl<class <lambda_db6c501233313992285f09f811fab884>,class std::allocator<int32_t>,void,int32_t>::VTable
    * const* var_4c_1 = &var_70
Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >(
    &var_40)
var_70 = &std::_Func_impl<class <lambda_3bef5ab5116764e45fb22817091ebfca>,class std::allocator<int32_t>,void,int32_t>::`vftable'{for `std::_Func_base<void, int32_t>'}
void* var_6c_1 = arg1
struct std::_Func_base<void, int32_t>::std::_Func_impl<class <lambda_db6c501233313992285f09f811fab884>,class std::allocator<int32_t>,void,int32_t>::VTable
    * const* var_4c_2 = &var_70
Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >(
    &var_28)
var_70 = &std::_Func_impl<class <lambda_ae53767283a5e5f37ede4ef50e0aae80>,class std::allocator<int32_t>,void,int32_t>::`vftable'{for `std::_Func_base<void, int32_t>'}
void* var_6c_2 = arg1
struct std::_Func_base<void, int32_t>::std::_Func_impl<class <lambda_db6c501233313992285f09f811fab884>,class std::allocator<int32_t>,void,int32_t>::VTable
    * const* var_4c_3 = &var_70
Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >(
    &var_1c)
var_70 = &std::_Func_impl<class <lambda_8637495717d000fec913e3b311355638>,class std::allocator<int32_t>,void,int32_t>::`vftable'{for `std::_Func_base<void, int32_t>'}
void* var_6c_3 = arg1
struct std::_Func_base<void, int32_t>::std::_Func_impl<class <lambda_db6c501233313992285f09f811fab884>,class std::allocator<int32_t>,void,int32_t>::VTable
    * const* var_4c_4 = &var_70
struct _EXCEPTION_REGISTRATION_RECORD** result = Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::multi_link_registry<class Concurrency::ISource<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >(
    &var_34)
void* ecx_1 = var_1c
int32_t var_14

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (var_14 - ecx_1) s>> 2, 4)
void* ecx_2 = var_28
int32_t var_20

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (var_20 - ecx_2) s>> 2, 4)
void* ecx_3 = var_34
int32_t var_2c

if (ecx_3 != 0)
    result = sub_403160(ecx_3, (var_2c - ecx_3) s>> 2, 4)
void* ecx_4 = var_40

if (ecx_4 != 0)
    result = sub_403160(ecx_4, (var_38 - ecx_4) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
