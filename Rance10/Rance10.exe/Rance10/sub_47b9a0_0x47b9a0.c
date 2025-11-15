// 函数: sub_47b9a0
// 地址: 0x47b9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e46f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_7fcb5c

if (ecx_1 != 0)
    (*(*ecx_1 + 0x70))(1)
    data_7fcb5c = 0

struct IGraph::graph::CGraphImplement::VTable** eax_4 = sub_6e810c(0x24)
struct IGraph::graph::CGraphImplement::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
data_7fcb5c = sub_478ac0(eax_4)
struct IGraph::graph::CGraphImplement::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
