// 函数: sub_4d5a50
// 地址: 0x4d5a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf669
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool>::.?AV?$_Func_impl@U?$_Callable_obj@V?$_Bind@$00_NU?$_Pmf_wrap@P8CGUIRadioButtonBoxModel@partsengine@@AE_NHABVCEXReader@common@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$function@$$A6AHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@6@@Z_NV12@HABV34@ABV56@ABV76@@std@@PAVCGUIRadioButtonBoxModel@partsengine@@AAHV?$reference_wrapper@$$CBVCEXReader@common@@@2@V?$reference_wrapper@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@ABV?$function@$$A6AHV?::VTable
    ** result = arg2

if (result == 0)
    result = sub_69adc6(0x50)
    
    if (result == 0)
        sub_69a4fc()
        noreturn
    
    arg2 = result

struct std::_Func_base<bool>::.?AV?$_Func_impl@U?$_Callable_obj@V?$_Bind@$00_NU?$_Pmf_wrap@P8CGUIRadioButtonBoxModel@partsengine@@AE_NHABVCEXReader@common@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$function@$$A6AHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@6@@Z_NV12@HABV34@ABV56@ABV76@@std@@PAVCGUIRadioButtonBoxModel@partsengine@@AAHV?$reference_wrapper@$$CBVCEXReader@common@@@2@V?$reference_wrapper@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@ABV?$function@$$A6AHV?::VTable
    ** result_1 = result
int32_t var_4 = 0

if (result != 0)
    var_4.b = 1
    *result = &.?AV?$_Func_impl@U?$_Callable_obj@V?$_Bind@$00_NU?$_Pmf_wrap@P8CGUIRadioButtonBoxModel@partsengine@@AE_NHABVCEXReader@common@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$function@$$A6AHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@6@@Z_NV12@HABV34@ABV56@ABV76@@std@@PAVCGUIRadioButtonBoxModel@partsengine@@AAHV?$reference_wrapper@$$CBVCEXReader@common@@@2@V?$reference_wrapper@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@ABV?$function@$$A6AHV?::`vftable'{for `std::_Func_base<bool>'}
    result[2] = *(arg1 + 8)
    sub_4d5b90(&result[4], arg1 + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
