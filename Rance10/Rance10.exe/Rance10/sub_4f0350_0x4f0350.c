// 函数: sub_4f0350
// 地址: 0x4f0350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct partsengine::IEventArgs::partsengine::SLostFocusEventArgs::VTable* const var_4 = arg1
var_4 = &partsengine::SLostFocusEventArgs::`vftable'{for `partsengine::IEventArgs'}
sub_4cbd50(arg1 + 0xc, &var_4, 0)
(*(**(arg1 + 0x74) + 0x38))()
void* result = *(*(arg1 + 0x68) + 0x70)
int32_t esi = *(result + 0xbc)

if (esi s> 0)
    int32_t var_14_1 = esi
    result = sub_4f15e0(*(arg1 + 0x6c))
    void* result_1 = result
    void* ecx_3
    
    if (result_1 == 0)
        ecx_3 = nullptr
    else
        int32_t edx_1 = *(result_1 + 8)
        
        if (esi s< edx_1)
            ecx_3 = nullptr
        else
            result = *(result_1 + 4) + edx_1
            
            if (result s<= esi)
                ecx_3 = nullptr
            else
                result = *(result_1 + 0xc)
                ecx_3 = *(result + ((esi - edx_1) << 2))
    
    if (ecx_3 != 0)
        return sub_4ed680(ecx_3, arg1, arg1 + 0xc, &var_4)

return result
