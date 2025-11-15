// 函数: sub_40c970
// 地址: 0x40c970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72786e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4084f0(*(arg1 + 0x10) + 0x3c)
sub_40a100(*(arg1 + 0x10) + 0x30)
struct std::_Func_base<void, struct dpanalysis::CBreakPointFile::SPoint const&>::std::_Func_impl<class <lambda_3a096a272bcc5679121616c9fe0a1853>,class std::allocator<int32_t>,void,struct dpanalysis::CBreakPointFile::SPoint const&>::VTable
    * const var_3c
int32_t* ecx_4 = &var_3c
var_3c = &std::_Func_impl<class <lambda_3a096a272bcc5679121616c9fe0a1853>,class std::allocator<int32_t>,void,struct dpanalysis::CBreakPointFile::SPoint const&>::`vftable'{for `std::_Func_base<void, struct dpanalysis::CBreakPointFile::SPoint const&>'}
void* var_38 = arg1
struct std::_Func_base<void, struct dpanalysis::CBreakPointFile::SPoint const&>::std::_Func_impl<class <lambda_3a096a272bcc5679121616c9fe0a1853>,class std::allocator<int32_t>,void,struct dpanalysis::CBreakPointFile::SPoint const&>::VTable
    * const* var_18 = &var_3c
int32_t var_8_1 = 0
void* edi = *(arg1 + 0x10)

for (int32_t i = *(edi + 0x54); i != *(edi + 0x58); i += 0x3c)
    if (ecx_4 == 0)
        sub_6d090a()
        noreturn
    
    (*(*ecx_4 + 8))(i)
    ecx_4 = var_18

int32_t var_8_2 = 1

if (ecx_4 != 0)
    (*(*ecx_4 + 0x10))(ecx_4 != &var_3c)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
