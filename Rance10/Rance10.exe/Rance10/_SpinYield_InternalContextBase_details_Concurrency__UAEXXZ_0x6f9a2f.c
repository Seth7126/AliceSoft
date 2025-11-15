// 函数: ?SpinYield@InternalContextBase@details@Concurrency@@UAEXXZ
// 地址: 0x6f9a2f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_8 = 0
int32_t var_24 = *(arg1 + 8)
int32_t esi = *(**(arg1 + 0x1c) + 4)
j_sub_4033e0()
Concurrency::details::ContextBase::TraceContextEvent(5, 4, esi(var_24))
void* eax_2
eax_2.b = *(*(arg1 + 0x9c) + 0xad)

if (eax_2.b == 0)
    void* edi_1 = *(arg1 + 0x9c)
    int32_t edx_1 = *(arg1 + 0x18)
    int32_t var_14 = 0
    int32_t var_c_1 = 0
    int32_t esi_1 = *(edi_1 + 0x48)
    j_sub_4033e0()
    
    if (esi_1(&var_14, edx_1, 0, 1) == 0)
        var_8 = 1
    else
        sub_6f9c54(arg1 - 4, var_c_1, 2)
else
    Concurrency::details::InternalContextBase::SwitchOut(arg1 - 4, 2)

int32_t result = sub_40d500()

if (var_8 == 0)
    return result

int32_t esi_2 = *(**(arg1 + 0x98) + 0xc)
j_sub_4033e0()
return esi_2()
