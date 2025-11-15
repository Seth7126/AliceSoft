// 函数: ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@$$QAV01@@Z
// 地址: 0x491580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f7ef
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = *arg2
int32_t* result = sub_6e810c(0xc)
arg2 = result
int32_t var_8_1 = 0
(*(*esi_1 + 0xc))("ratio", 0x3f800000, eax_2)
result[1] = 1
*result =
    &kiwi::CGainProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
result[2] = fconvert.s(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
