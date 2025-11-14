// 函数: sub_46c4e0
// 地址: 0x46c4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b707b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IGraph::graph::CGraph::VTable** var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_75d4dc

if (ecx != 0)
    (*(*ecx + 0x70))(1)
    data_75d4dc = 0

struct IGraph::graph::CGraph::VTable** eax_4 = sub_69adc6(0x24)
var_10 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_75d4dc = 0
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

data_75d4dc = sub_4694c0(eax_4)
struct IGraph::graph::CGraph::VTable** eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
