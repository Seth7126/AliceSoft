// 函数: sub_4d5980
// 地址: 0x4d5980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf629
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Func_base<bool>::.?AV?$_Func_impl@U?$_Callable_obj@V?$_Bind@$00_NU?$_Pmf_wrap@P8CGUIRadioButtonBoxModel@partsengine@@AE_NHABVCEXReader@common@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$function@$$A6AHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@6@@Z_NV12@HABV34@ABV56@ABV76@@std@@PAVCGUIRadioButtonBoxModel@partsengine@@AAHV?$reference_wrapper@$$CBVCEXReader@common@@@2@V?$reference_wrapper@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@ABV?$function@$$A6AHV?::VTable
    ** eax_3 = sub_69adc6(0x50)

if (eax_3 == 0)
    sub_69a4fc()
    noreturn

struct std::_Func_base<bool>::.?AV?$_Func_impl@U?$_Callable_obj@V?$_Bind@$00_NU?$_Pmf_wrap@P8CGUIRadioButtonBoxModel@partsengine@@AE_NHABVCEXReader@common@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$function@$$A6AHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@6@@Z_NV12@HABV34@ABV56@ABV76@@std@@PAVCGUIRadioButtonBoxModel@partsengine@@AAHV?$reference_wrapper@$$CBVCEXReader@common@@@2@V?$reference_wrapper@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@ABV?$function@$$A6AHV?::VTable
    ** var_14 = eax_3
struct std::_Func_base<bool>::.?AV?$_Func_impl@U?$_Callable_obj@V?$_Bind@$00_NU?$_Pmf_wrap@P8CGUIRadioButtonBoxModel@partsengine@@AE_NHABVCEXReader@common@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$function@$$A6AHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@6@@Z_NV12@HABV34@ABV56@ABV76@@std@@PAVCGUIRadioButtonBoxModel@partsengine@@AAHV?$reference_wrapper@$$CBVCEXReader@common@@@2@V?$reference_wrapper@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@ABV?$function@$$A6AHV?::VTable
    ** var_10 = eax_3
int32_t var_4 = 3
*eax_3 = &.?AV?$_Func_impl@U?$_Callable_obj@V?$_Bind@$00_NU?$_Pmf_wrap@P8CGUIRadioButtonBoxModel@partsengine@@AE_NHABVCEXReader@common@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$function@$$A6AHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@6@@Z_NV12@HABV34@ABV56@ABV76@@std@@PAVCGUIRadioButtonBoxModel@partsengine@@AAHV?$reference_wrapper@$$CBVCEXReader@common@@@2@V?$reference_wrapper@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@ABV?$function@$$A6AHV?::`vftable'{for `std::_Func_base<bool>'}
eax_3[2] = *arg2
void* result = sub_4d5b90(&eax_3[4], &arg2[2])
*(arg1 + 0x10) = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return result
