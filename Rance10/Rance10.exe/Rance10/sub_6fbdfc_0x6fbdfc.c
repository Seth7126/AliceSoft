// 函数: sub_6fbdfc
// 地址: 0x6fbdfc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = *(arg1 + 8)
int32_t esi = *(**(arg1 + 0x1c) + 4)
j_sub_4033e0()
Concurrency::details::ContextBase::TraceContextEvent(3, 4, esi(var_10))
int32_t eax_2 = *(arg1 + 0x2c)
*(arg1 + 0x2c) += 1
enum WAIT_EVENT result = eax_2 + 1

if (result != 0x1)
    return result

return WaitForSingleObjectEx(*(arg1 + 0xa8), 0xffffffff, 0)
