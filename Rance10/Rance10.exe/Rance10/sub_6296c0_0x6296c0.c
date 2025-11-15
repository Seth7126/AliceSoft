// 函数: sub_6296c0
// 地址: 0x6296c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744c20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0x10)
int32_t* esi = *(arg1 + 0xc)
int32_t* var_1c = nullptr
int32_t var_18 = 0
var_1c = sub_4f2cd0()
int32_t var_8_1 = 0
sub_62a460(&var_1c, esi, edi)
int32_t var_8_2 = 1
int32_t* esi_1 = var_1c
int32_t arg_4
int32_t edi_1 = arg_4
void* eax_4 = *esi_1
void* var_14 = eax_4

if (eax_4 != esi_1)
    do
        void* eax_5 = sub_622960(*(arg1 + 4), *(eax_4 + 0x10))
        
        if (eax_5 != 0 && sub_5ff680(eax_5, edi_1, *(arg1 + 8)) == 0)
            int32_t* eax_10 = var_1c
            int32_t* var_30_7 = eax_10
            sub_513f00(&var_1c, &arg_4, *eax_10)
            sub_403160(var_1c, 1, 0x14)
            goto label_629816
        
        sub_429080(&var_14)
        eax_4 = var_14
    while (eax_4 != esi_1)
    
    esi_1 = var_1c

int32_t* var_30_3 = esi_1
int32_t var_8_3 = 0xffffffff
sub_513f00(&var_1c, &arg_4, *esi_1)
sub_403160(var_1c, 1, 0x14)
int32_t ecx_5 = *(arg1 + 8)
int32_t* var_54 = &std::_Func_impl<class <lambda_a630462dfdd28cc63f8095b783b6cd72>,class std::allocator<int32_t>,bool,class sys43vm::CDelegatePage*>::`vftable'{for `std::_Func_base<bool, class sys43vm::CDelegatePage*>'}
int32_t var_4c_1 = ecx_5
int32_t var_50_1 = edi_1
int32_t** var_30_5 = &var_54

if (sub_62a250(&var_54, edi_1, 0xd, *(arg1 + 4), var_54) == 0)
label_629816:
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

var_54 = &std::_Func_impl<class <lambda_c31d754850a16a1035ed20855a8d0bb8>,class std::allocator<int32_t>,bool,class sys43vm::CDelegatePage*>::`vftable'{for `std::_Func_base<bool, class sys43vm::CDelegatePage*>'}
int32_t var_50_2 = edi_1
int32_t** var_30_6 = &var_54
bool result = sub_62a250(&var_54, *(arg1 + 8), 0xd, *(arg1 + 4), var_54) != 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
